/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/mturk-requester/MTurkClient.h>
#include <aws/mturk-requester/MTurkEndpoint.h>
#include <aws/mturk-requester/MTurkErrorMarshaller.h>
#include <aws/mturk-requester/model/AcceptQualificationRequestRequest.h>
#include <aws/mturk-requester/model/ApproveAssignmentRequest.h>
#include <aws/mturk-requester/model/AssociateQualificationWithWorkerRequest.h>
#include <aws/mturk-requester/model/CreateAdditionalAssignmentsForHITRequest.h>
#include <aws/mturk-requester/model/CreateHITRequest.h>
#include <aws/mturk-requester/model/CreateHITTypeRequest.h>
#include <aws/mturk-requester/model/CreateHITWithHITTypeRequest.h>
#include <aws/mturk-requester/model/CreateQualificationTypeRequest.h>
#include <aws/mturk-requester/model/CreateWorkerBlockRequest.h>
#include <aws/mturk-requester/model/DeleteHITRequest.h>
#include <aws/mturk-requester/model/DeleteQualificationTypeRequest.h>
#include <aws/mturk-requester/model/DeleteWorkerBlockRequest.h>
#include <aws/mturk-requester/model/DisassociateQualificationFromWorkerRequest.h>
#include <aws/mturk-requester/model/GetAccountBalanceRequest.h>
#include <aws/mturk-requester/model/GetAssignmentRequest.h>
#include <aws/mturk-requester/model/GetFileUploadURLRequest.h>
#include <aws/mturk-requester/model/GetHITRequest.h>
#include <aws/mturk-requester/model/GetQualificationScoreRequest.h>
#include <aws/mturk-requester/model/GetQualificationTypeRequest.h>
#include <aws/mturk-requester/model/ListAssignmentsForHITRequest.h>
#include <aws/mturk-requester/model/ListBonusPaymentsRequest.h>
#include <aws/mturk-requester/model/ListHITsRequest.h>
#include <aws/mturk-requester/model/ListHITsForQualificationTypeRequest.h>
#include <aws/mturk-requester/model/ListQualificationRequestsRequest.h>
#include <aws/mturk-requester/model/ListQualificationTypesRequest.h>
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITRequest.h>
#include <aws/mturk-requester/model/ListReviewableHITsRequest.h>
#include <aws/mturk-requester/model/ListWorkerBlocksRequest.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeRequest.h>
#include <aws/mturk-requester/model/NotifyWorkersRequest.h>
#include <aws/mturk-requester/model/RejectAssignmentRequest.h>
#include <aws/mturk-requester/model/RejectQualificationRequestRequest.h>
#include <aws/mturk-requester/model/SendBonusRequest.h>
#include <aws/mturk-requester/model/SendTestEventNotificationRequest.h>
#include <aws/mturk-requester/model/UpdateExpirationForHITRequest.h>
#include <aws/mturk-requester/model/UpdateHITReviewStatusRequest.h>
#include <aws/mturk-requester/model/UpdateHITTypeOfHITRequest.h>
#include <aws/mturk-requester/model/UpdateNotificationSettingsRequest.h>
#include <aws/mturk-requester/model/UpdateQualificationTypeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MTurk;
using namespace Aws::MTurk::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mturk-requester";
static const char* ALLOCATION_TAG = "MTurkClient";


MTurkClient::MTurkClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MTurkClient::MTurkClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MTurkClient::MTurkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MTurkClient::~MTurkClient()
{
}

void MTurkClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MTurkEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MTurkClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AcceptQualificationRequestOutcome MTurkClient::AcceptQualificationRequest(const AcceptQualificationRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AcceptQualificationRequestOutcome(AcceptQualificationRequestResult(outcome.GetResult()));
  }
  else
  {
    return AcceptQualificationRequestOutcome(outcome.GetError());
  }
}

AcceptQualificationRequestOutcomeCallable MTurkClient::AcceptQualificationRequestCallable(const AcceptQualificationRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptQualificationRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptQualificationRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::AcceptQualificationRequestAsync(const AcceptQualificationRequestRequest& request, const AcceptQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptQualificationRequestAsyncHelper( request, handler, context ); } );
}

void MTurkClient::AcceptQualificationRequestAsyncHelper(const AcceptQualificationRequestRequest& request, const AcceptQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptQualificationRequest(request), context);
}

ApproveAssignmentOutcome MTurkClient::ApproveAssignment(const ApproveAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ApproveAssignmentOutcome(ApproveAssignmentResult(outcome.GetResult()));
  }
  else
  {
    return ApproveAssignmentOutcome(outcome.GetError());
  }
}

ApproveAssignmentOutcomeCallable MTurkClient::ApproveAssignmentCallable(const ApproveAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApproveAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApproveAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ApproveAssignmentAsync(const ApproveAssignmentRequest& request, const ApproveAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApproveAssignmentAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ApproveAssignmentAsyncHelper(const ApproveAssignmentRequest& request, const ApproveAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApproveAssignment(request), context);
}

AssociateQualificationWithWorkerOutcome MTurkClient::AssociateQualificationWithWorker(const AssociateQualificationWithWorkerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateQualificationWithWorkerOutcome(AssociateQualificationWithWorkerResult(outcome.GetResult()));
  }
  else
  {
    return AssociateQualificationWithWorkerOutcome(outcome.GetError());
  }
}

AssociateQualificationWithWorkerOutcomeCallable MTurkClient::AssociateQualificationWithWorkerCallable(const AssociateQualificationWithWorkerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateQualificationWithWorkerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateQualificationWithWorker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::AssociateQualificationWithWorkerAsync(const AssociateQualificationWithWorkerRequest& request, const AssociateQualificationWithWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateQualificationWithWorkerAsyncHelper( request, handler, context ); } );
}

void MTurkClient::AssociateQualificationWithWorkerAsyncHelper(const AssociateQualificationWithWorkerRequest& request, const AssociateQualificationWithWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateQualificationWithWorker(request), context);
}

CreateAdditionalAssignmentsForHITOutcome MTurkClient::CreateAdditionalAssignmentsForHIT(const CreateAdditionalAssignmentsForHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAdditionalAssignmentsForHITOutcome(CreateAdditionalAssignmentsForHITResult(outcome.GetResult()));
  }
  else
  {
    return CreateAdditionalAssignmentsForHITOutcome(outcome.GetError());
  }
}

CreateAdditionalAssignmentsForHITOutcomeCallable MTurkClient::CreateAdditionalAssignmentsForHITCallable(const CreateAdditionalAssignmentsForHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAdditionalAssignmentsForHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAdditionalAssignmentsForHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::CreateAdditionalAssignmentsForHITAsync(const CreateAdditionalAssignmentsForHITRequest& request, const CreateAdditionalAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAdditionalAssignmentsForHITAsyncHelper( request, handler, context ); } );
}

void MTurkClient::CreateAdditionalAssignmentsForHITAsyncHelper(const CreateAdditionalAssignmentsForHITRequest& request, const CreateAdditionalAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAdditionalAssignmentsForHIT(request), context);
}

CreateHITOutcome MTurkClient::CreateHIT(const CreateHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHITOutcome(CreateHITResult(outcome.GetResult()));
  }
  else
  {
    return CreateHITOutcome(outcome.GetError());
  }
}

CreateHITOutcomeCallable MTurkClient::CreateHITCallable(const CreateHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::CreateHITAsync(const CreateHITRequest& request, const CreateHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHITAsyncHelper( request, handler, context ); } );
}

void MTurkClient::CreateHITAsyncHelper(const CreateHITRequest& request, const CreateHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHIT(request), context);
}

CreateHITTypeOutcome MTurkClient::CreateHITType(const CreateHITTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHITTypeOutcome(CreateHITTypeResult(outcome.GetResult()));
  }
  else
  {
    return CreateHITTypeOutcome(outcome.GetError());
  }
}

CreateHITTypeOutcomeCallable MTurkClient::CreateHITTypeCallable(const CreateHITTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHITTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHITType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::CreateHITTypeAsync(const CreateHITTypeRequest& request, const CreateHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHITTypeAsyncHelper( request, handler, context ); } );
}

void MTurkClient::CreateHITTypeAsyncHelper(const CreateHITTypeRequest& request, const CreateHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHITType(request), context);
}

CreateHITWithHITTypeOutcome MTurkClient::CreateHITWithHITType(const CreateHITWithHITTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHITWithHITTypeOutcome(CreateHITWithHITTypeResult(outcome.GetResult()));
  }
  else
  {
    return CreateHITWithHITTypeOutcome(outcome.GetError());
  }
}

CreateHITWithHITTypeOutcomeCallable MTurkClient::CreateHITWithHITTypeCallable(const CreateHITWithHITTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHITWithHITTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHITWithHITType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::CreateHITWithHITTypeAsync(const CreateHITWithHITTypeRequest& request, const CreateHITWithHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHITWithHITTypeAsyncHelper( request, handler, context ); } );
}

void MTurkClient::CreateHITWithHITTypeAsyncHelper(const CreateHITWithHITTypeRequest& request, const CreateHITWithHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHITWithHITType(request), context);
}

CreateQualificationTypeOutcome MTurkClient::CreateQualificationType(const CreateQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateQualificationTypeOutcome(CreateQualificationTypeResult(outcome.GetResult()));
  }
  else
  {
    return CreateQualificationTypeOutcome(outcome.GetError());
  }
}

CreateQualificationTypeOutcomeCallable MTurkClient::CreateQualificationTypeCallable(const CreateQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::CreateQualificationTypeAsync(const CreateQualificationTypeRequest& request, const CreateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateQualificationTypeAsyncHelper( request, handler, context ); } );
}

void MTurkClient::CreateQualificationTypeAsyncHelper(const CreateQualificationTypeRequest& request, const CreateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateQualificationType(request), context);
}

CreateWorkerBlockOutcome MTurkClient::CreateWorkerBlock(const CreateWorkerBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateWorkerBlockOutcome(CreateWorkerBlockResult(outcome.GetResult()));
  }
  else
  {
    return CreateWorkerBlockOutcome(outcome.GetError());
  }
}

CreateWorkerBlockOutcomeCallable MTurkClient::CreateWorkerBlockCallable(const CreateWorkerBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkerBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkerBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::CreateWorkerBlockAsync(const CreateWorkerBlockRequest& request, const CreateWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorkerBlockAsyncHelper( request, handler, context ); } );
}

void MTurkClient::CreateWorkerBlockAsyncHelper(const CreateWorkerBlockRequest& request, const CreateWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkerBlock(request), context);
}

DeleteHITOutcome MTurkClient::DeleteHIT(const DeleteHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteHITOutcome(DeleteHITResult(outcome.GetResult()));
  }
  else
  {
    return DeleteHITOutcome(outcome.GetError());
  }
}

DeleteHITOutcomeCallable MTurkClient::DeleteHITCallable(const DeleteHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::DeleteHITAsync(const DeleteHITRequest& request, const DeleteHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHITAsyncHelper( request, handler, context ); } );
}

void MTurkClient::DeleteHITAsyncHelper(const DeleteHITRequest& request, const DeleteHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHIT(request), context);
}

DeleteQualificationTypeOutcome MTurkClient::DeleteQualificationType(const DeleteQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteQualificationTypeOutcome(DeleteQualificationTypeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteQualificationTypeOutcome(outcome.GetError());
  }
}

DeleteQualificationTypeOutcomeCallable MTurkClient::DeleteQualificationTypeCallable(const DeleteQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::DeleteQualificationTypeAsync(const DeleteQualificationTypeRequest& request, const DeleteQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteQualificationTypeAsyncHelper( request, handler, context ); } );
}

void MTurkClient::DeleteQualificationTypeAsyncHelper(const DeleteQualificationTypeRequest& request, const DeleteQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteQualificationType(request), context);
}

DeleteWorkerBlockOutcome MTurkClient::DeleteWorkerBlock(const DeleteWorkerBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteWorkerBlockOutcome(DeleteWorkerBlockResult(outcome.GetResult()));
  }
  else
  {
    return DeleteWorkerBlockOutcome(outcome.GetError());
  }
}

DeleteWorkerBlockOutcomeCallable MTurkClient::DeleteWorkerBlockCallable(const DeleteWorkerBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkerBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkerBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::DeleteWorkerBlockAsync(const DeleteWorkerBlockRequest& request, const DeleteWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWorkerBlockAsyncHelper( request, handler, context ); } );
}

void MTurkClient::DeleteWorkerBlockAsyncHelper(const DeleteWorkerBlockRequest& request, const DeleteWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWorkerBlock(request), context);
}

DisassociateQualificationFromWorkerOutcome MTurkClient::DisassociateQualificationFromWorker(const DisassociateQualificationFromWorkerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateQualificationFromWorkerOutcome(DisassociateQualificationFromWorkerResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateQualificationFromWorkerOutcome(outcome.GetError());
  }
}

DisassociateQualificationFromWorkerOutcomeCallable MTurkClient::DisassociateQualificationFromWorkerCallable(const DisassociateQualificationFromWorkerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateQualificationFromWorkerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateQualificationFromWorker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::DisassociateQualificationFromWorkerAsync(const DisassociateQualificationFromWorkerRequest& request, const DisassociateQualificationFromWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateQualificationFromWorkerAsyncHelper( request, handler, context ); } );
}

void MTurkClient::DisassociateQualificationFromWorkerAsyncHelper(const DisassociateQualificationFromWorkerRequest& request, const DisassociateQualificationFromWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateQualificationFromWorker(request), context);
}

GetAccountBalanceOutcome MTurkClient::GetAccountBalance(const GetAccountBalanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAccountBalanceOutcome(GetAccountBalanceResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountBalanceOutcome(outcome.GetError());
  }
}

GetAccountBalanceOutcomeCallable MTurkClient::GetAccountBalanceCallable(const GetAccountBalanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountBalanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountBalance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::GetAccountBalanceAsync(const GetAccountBalanceRequest& request, const GetAccountBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountBalanceAsyncHelper( request, handler, context ); } );
}

void MTurkClient::GetAccountBalanceAsyncHelper(const GetAccountBalanceRequest& request, const GetAccountBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountBalance(request), context);
}

GetAssignmentOutcome MTurkClient::GetAssignment(const GetAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAssignmentOutcome(GetAssignmentResult(outcome.GetResult()));
  }
  else
  {
    return GetAssignmentOutcome(outcome.GetError());
  }
}

GetAssignmentOutcomeCallable MTurkClient::GetAssignmentCallable(const GetAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::GetAssignmentAsync(const GetAssignmentRequest& request, const GetAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAssignmentAsyncHelper( request, handler, context ); } );
}

void MTurkClient::GetAssignmentAsyncHelper(const GetAssignmentRequest& request, const GetAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAssignment(request), context);
}

GetFileUploadURLOutcome MTurkClient::GetFileUploadURL(const GetFileUploadURLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFileUploadURLOutcome(GetFileUploadURLResult(outcome.GetResult()));
  }
  else
  {
    return GetFileUploadURLOutcome(outcome.GetError());
  }
}

GetFileUploadURLOutcomeCallable MTurkClient::GetFileUploadURLCallable(const GetFileUploadURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFileUploadURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFileUploadURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::GetFileUploadURLAsync(const GetFileUploadURLRequest& request, const GetFileUploadURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFileUploadURLAsyncHelper( request, handler, context ); } );
}

void MTurkClient::GetFileUploadURLAsyncHelper(const GetFileUploadURLRequest& request, const GetFileUploadURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFileUploadURL(request), context);
}

GetHITOutcome MTurkClient::GetHIT(const GetHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetHITOutcome(GetHITResult(outcome.GetResult()));
  }
  else
  {
    return GetHITOutcome(outcome.GetError());
  }
}

GetHITOutcomeCallable MTurkClient::GetHITCallable(const GetHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::GetHITAsync(const GetHITRequest& request, const GetHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHITAsyncHelper( request, handler, context ); } );
}

void MTurkClient::GetHITAsyncHelper(const GetHITRequest& request, const GetHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHIT(request), context);
}

GetQualificationScoreOutcome MTurkClient::GetQualificationScore(const GetQualificationScoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetQualificationScoreOutcome(GetQualificationScoreResult(outcome.GetResult()));
  }
  else
  {
    return GetQualificationScoreOutcome(outcome.GetError());
  }
}

GetQualificationScoreOutcomeCallable MTurkClient::GetQualificationScoreCallable(const GetQualificationScoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQualificationScoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQualificationScore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::GetQualificationScoreAsync(const GetQualificationScoreRequest& request, const GetQualificationScoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQualificationScoreAsyncHelper( request, handler, context ); } );
}

void MTurkClient::GetQualificationScoreAsyncHelper(const GetQualificationScoreRequest& request, const GetQualificationScoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQualificationScore(request), context);
}

GetQualificationTypeOutcome MTurkClient::GetQualificationType(const GetQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetQualificationTypeOutcome(GetQualificationTypeResult(outcome.GetResult()));
  }
  else
  {
    return GetQualificationTypeOutcome(outcome.GetError());
  }
}

GetQualificationTypeOutcomeCallable MTurkClient::GetQualificationTypeCallable(const GetQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::GetQualificationTypeAsync(const GetQualificationTypeRequest& request, const GetQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQualificationTypeAsyncHelper( request, handler, context ); } );
}

void MTurkClient::GetQualificationTypeAsyncHelper(const GetQualificationTypeRequest& request, const GetQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQualificationType(request), context);
}

ListAssignmentsForHITOutcome MTurkClient::ListAssignmentsForHIT(const ListAssignmentsForHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAssignmentsForHITOutcome(ListAssignmentsForHITResult(outcome.GetResult()));
  }
  else
  {
    return ListAssignmentsForHITOutcome(outcome.GetError());
  }
}

ListAssignmentsForHITOutcomeCallable MTurkClient::ListAssignmentsForHITCallable(const ListAssignmentsForHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssignmentsForHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssignmentsForHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListAssignmentsForHITAsync(const ListAssignmentsForHITRequest& request, const ListAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAssignmentsForHITAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListAssignmentsForHITAsyncHelper(const ListAssignmentsForHITRequest& request, const ListAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssignmentsForHIT(request), context);
}

ListBonusPaymentsOutcome MTurkClient::ListBonusPayments(const ListBonusPaymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBonusPaymentsOutcome(ListBonusPaymentsResult(outcome.GetResult()));
  }
  else
  {
    return ListBonusPaymentsOutcome(outcome.GetError());
  }
}

ListBonusPaymentsOutcomeCallable MTurkClient::ListBonusPaymentsCallable(const ListBonusPaymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBonusPaymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBonusPayments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListBonusPaymentsAsync(const ListBonusPaymentsRequest& request, const ListBonusPaymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBonusPaymentsAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListBonusPaymentsAsyncHelper(const ListBonusPaymentsRequest& request, const ListBonusPaymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBonusPayments(request), context);
}

ListHITsOutcome MTurkClient::ListHITs(const ListHITsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListHITsOutcome(ListHITsResult(outcome.GetResult()));
  }
  else
  {
    return ListHITsOutcome(outcome.GetError());
  }
}

ListHITsOutcomeCallable MTurkClient::ListHITsCallable(const ListHITsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHITsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHITs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListHITsAsync(const ListHITsRequest& request, const ListHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHITsAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListHITsAsyncHelper(const ListHITsRequest& request, const ListHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHITs(request), context);
}

ListHITsForQualificationTypeOutcome MTurkClient::ListHITsForQualificationType(const ListHITsForQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListHITsForQualificationTypeOutcome(ListHITsForQualificationTypeResult(outcome.GetResult()));
  }
  else
  {
    return ListHITsForQualificationTypeOutcome(outcome.GetError());
  }
}

ListHITsForQualificationTypeOutcomeCallable MTurkClient::ListHITsForQualificationTypeCallable(const ListHITsForQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHITsForQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHITsForQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListHITsForQualificationTypeAsync(const ListHITsForQualificationTypeRequest& request, const ListHITsForQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHITsForQualificationTypeAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListHITsForQualificationTypeAsyncHelper(const ListHITsForQualificationTypeRequest& request, const ListHITsForQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHITsForQualificationType(request), context);
}

ListQualificationRequestsOutcome MTurkClient::ListQualificationRequests(const ListQualificationRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListQualificationRequestsOutcome(ListQualificationRequestsResult(outcome.GetResult()));
  }
  else
  {
    return ListQualificationRequestsOutcome(outcome.GetError());
  }
}

ListQualificationRequestsOutcomeCallable MTurkClient::ListQualificationRequestsCallable(const ListQualificationRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQualificationRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQualificationRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListQualificationRequestsAsync(const ListQualificationRequestsRequest& request, const ListQualificationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQualificationRequestsAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListQualificationRequestsAsyncHelper(const ListQualificationRequestsRequest& request, const ListQualificationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQualificationRequests(request), context);
}

ListQualificationTypesOutcome MTurkClient::ListQualificationTypes(const ListQualificationTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListQualificationTypesOutcome(ListQualificationTypesResult(outcome.GetResult()));
  }
  else
  {
    return ListQualificationTypesOutcome(outcome.GetError());
  }
}

ListQualificationTypesOutcomeCallable MTurkClient::ListQualificationTypesCallable(const ListQualificationTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQualificationTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQualificationTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListQualificationTypesAsync(const ListQualificationTypesRequest& request, const ListQualificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQualificationTypesAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListQualificationTypesAsyncHelper(const ListQualificationTypesRequest& request, const ListQualificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQualificationTypes(request), context);
}

ListReviewPolicyResultsForHITOutcome MTurkClient::ListReviewPolicyResultsForHIT(const ListReviewPolicyResultsForHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListReviewPolicyResultsForHITOutcome(ListReviewPolicyResultsForHITResult(outcome.GetResult()));
  }
  else
  {
    return ListReviewPolicyResultsForHITOutcome(outcome.GetError());
  }
}

ListReviewPolicyResultsForHITOutcomeCallable MTurkClient::ListReviewPolicyResultsForHITCallable(const ListReviewPolicyResultsForHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReviewPolicyResultsForHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReviewPolicyResultsForHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListReviewPolicyResultsForHITAsync(const ListReviewPolicyResultsForHITRequest& request, const ListReviewPolicyResultsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReviewPolicyResultsForHITAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListReviewPolicyResultsForHITAsyncHelper(const ListReviewPolicyResultsForHITRequest& request, const ListReviewPolicyResultsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReviewPolicyResultsForHIT(request), context);
}

ListReviewableHITsOutcome MTurkClient::ListReviewableHITs(const ListReviewableHITsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListReviewableHITsOutcome(ListReviewableHITsResult(outcome.GetResult()));
  }
  else
  {
    return ListReviewableHITsOutcome(outcome.GetError());
  }
}

ListReviewableHITsOutcomeCallable MTurkClient::ListReviewableHITsCallable(const ListReviewableHITsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReviewableHITsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReviewableHITs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListReviewableHITsAsync(const ListReviewableHITsRequest& request, const ListReviewableHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReviewableHITsAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListReviewableHITsAsyncHelper(const ListReviewableHITsRequest& request, const ListReviewableHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReviewableHITs(request), context);
}

ListWorkerBlocksOutcome MTurkClient::ListWorkerBlocks(const ListWorkerBlocksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListWorkerBlocksOutcome(ListWorkerBlocksResult(outcome.GetResult()));
  }
  else
  {
    return ListWorkerBlocksOutcome(outcome.GetError());
  }
}

ListWorkerBlocksOutcomeCallable MTurkClient::ListWorkerBlocksCallable(const ListWorkerBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkerBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkerBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListWorkerBlocksAsync(const ListWorkerBlocksRequest& request, const ListWorkerBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkerBlocksAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListWorkerBlocksAsyncHelper(const ListWorkerBlocksRequest& request, const ListWorkerBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkerBlocks(request), context);
}

ListWorkersWithQualificationTypeOutcome MTurkClient::ListWorkersWithQualificationType(const ListWorkersWithQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListWorkersWithQualificationTypeOutcome(ListWorkersWithQualificationTypeResult(outcome.GetResult()));
  }
  else
  {
    return ListWorkersWithQualificationTypeOutcome(outcome.GetError());
  }
}

ListWorkersWithQualificationTypeOutcomeCallable MTurkClient::ListWorkersWithQualificationTypeCallable(const ListWorkersWithQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkersWithQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkersWithQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::ListWorkersWithQualificationTypeAsync(const ListWorkersWithQualificationTypeRequest& request, const ListWorkersWithQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkersWithQualificationTypeAsyncHelper( request, handler, context ); } );
}

void MTurkClient::ListWorkersWithQualificationTypeAsyncHelper(const ListWorkersWithQualificationTypeRequest& request, const ListWorkersWithQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkersWithQualificationType(request), context);
}

NotifyWorkersOutcome MTurkClient::NotifyWorkers(const NotifyWorkersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return NotifyWorkersOutcome(NotifyWorkersResult(outcome.GetResult()));
  }
  else
  {
    return NotifyWorkersOutcome(outcome.GetError());
  }
}

NotifyWorkersOutcomeCallable MTurkClient::NotifyWorkersCallable(const NotifyWorkersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyWorkersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyWorkers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::NotifyWorkersAsync(const NotifyWorkersRequest& request, const NotifyWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->NotifyWorkersAsyncHelper( request, handler, context ); } );
}

void MTurkClient::NotifyWorkersAsyncHelper(const NotifyWorkersRequest& request, const NotifyWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, NotifyWorkers(request), context);
}

RejectAssignmentOutcome MTurkClient::RejectAssignment(const RejectAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RejectAssignmentOutcome(RejectAssignmentResult(outcome.GetResult()));
  }
  else
  {
    return RejectAssignmentOutcome(outcome.GetError());
  }
}

RejectAssignmentOutcomeCallable MTurkClient::RejectAssignmentCallable(const RejectAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::RejectAssignmentAsync(const RejectAssignmentRequest& request, const RejectAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectAssignmentAsyncHelper( request, handler, context ); } );
}

void MTurkClient::RejectAssignmentAsyncHelper(const RejectAssignmentRequest& request, const RejectAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectAssignment(request), context);
}

RejectQualificationRequestOutcome MTurkClient::RejectQualificationRequest(const RejectQualificationRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RejectQualificationRequestOutcome(RejectQualificationRequestResult(outcome.GetResult()));
  }
  else
  {
    return RejectQualificationRequestOutcome(outcome.GetError());
  }
}

RejectQualificationRequestOutcomeCallable MTurkClient::RejectQualificationRequestCallable(const RejectQualificationRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectQualificationRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectQualificationRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::RejectQualificationRequestAsync(const RejectQualificationRequestRequest& request, const RejectQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectQualificationRequestAsyncHelper( request, handler, context ); } );
}

void MTurkClient::RejectQualificationRequestAsyncHelper(const RejectQualificationRequestRequest& request, const RejectQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectQualificationRequest(request), context);
}

SendBonusOutcome MTurkClient::SendBonus(const SendBonusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendBonusOutcome(SendBonusResult(outcome.GetResult()));
  }
  else
  {
    return SendBonusOutcome(outcome.GetError());
  }
}

SendBonusOutcomeCallable MTurkClient::SendBonusCallable(const SendBonusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendBonusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendBonus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::SendBonusAsync(const SendBonusRequest& request, const SendBonusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendBonusAsyncHelper( request, handler, context ); } );
}

void MTurkClient::SendBonusAsyncHelper(const SendBonusRequest& request, const SendBonusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendBonus(request), context);
}

SendTestEventNotificationOutcome MTurkClient::SendTestEventNotification(const SendTestEventNotificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendTestEventNotificationOutcome(SendTestEventNotificationResult(outcome.GetResult()));
  }
  else
  {
    return SendTestEventNotificationOutcome(outcome.GetError());
  }
}

SendTestEventNotificationOutcomeCallable MTurkClient::SendTestEventNotificationCallable(const SendTestEventNotificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendTestEventNotificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendTestEventNotification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::SendTestEventNotificationAsync(const SendTestEventNotificationRequest& request, const SendTestEventNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendTestEventNotificationAsyncHelper( request, handler, context ); } );
}

void MTurkClient::SendTestEventNotificationAsyncHelper(const SendTestEventNotificationRequest& request, const SendTestEventNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendTestEventNotification(request), context);
}

UpdateExpirationForHITOutcome MTurkClient::UpdateExpirationForHIT(const UpdateExpirationForHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateExpirationForHITOutcome(UpdateExpirationForHITResult(outcome.GetResult()));
  }
  else
  {
    return UpdateExpirationForHITOutcome(outcome.GetError());
  }
}

UpdateExpirationForHITOutcomeCallable MTurkClient::UpdateExpirationForHITCallable(const UpdateExpirationForHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExpirationForHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExpirationForHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::UpdateExpirationForHITAsync(const UpdateExpirationForHITRequest& request, const UpdateExpirationForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateExpirationForHITAsyncHelper( request, handler, context ); } );
}

void MTurkClient::UpdateExpirationForHITAsyncHelper(const UpdateExpirationForHITRequest& request, const UpdateExpirationForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateExpirationForHIT(request), context);
}

UpdateHITReviewStatusOutcome MTurkClient::UpdateHITReviewStatus(const UpdateHITReviewStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateHITReviewStatusOutcome(UpdateHITReviewStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateHITReviewStatusOutcome(outcome.GetError());
  }
}

UpdateHITReviewStatusOutcomeCallable MTurkClient::UpdateHITReviewStatusCallable(const UpdateHITReviewStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHITReviewStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHITReviewStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::UpdateHITReviewStatusAsync(const UpdateHITReviewStatusRequest& request, const UpdateHITReviewStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateHITReviewStatusAsyncHelper( request, handler, context ); } );
}

void MTurkClient::UpdateHITReviewStatusAsyncHelper(const UpdateHITReviewStatusRequest& request, const UpdateHITReviewStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateHITReviewStatus(request), context);
}

UpdateHITTypeOfHITOutcome MTurkClient::UpdateHITTypeOfHIT(const UpdateHITTypeOfHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateHITTypeOfHITOutcome(UpdateHITTypeOfHITResult(outcome.GetResult()));
  }
  else
  {
    return UpdateHITTypeOfHITOutcome(outcome.GetError());
  }
}

UpdateHITTypeOfHITOutcomeCallable MTurkClient::UpdateHITTypeOfHITCallable(const UpdateHITTypeOfHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHITTypeOfHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHITTypeOfHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::UpdateHITTypeOfHITAsync(const UpdateHITTypeOfHITRequest& request, const UpdateHITTypeOfHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateHITTypeOfHITAsyncHelper( request, handler, context ); } );
}

void MTurkClient::UpdateHITTypeOfHITAsyncHelper(const UpdateHITTypeOfHITRequest& request, const UpdateHITTypeOfHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateHITTypeOfHIT(request), context);
}

UpdateNotificationSettingsOutcome MTurkClient::UpdateNotificationSettings(const UpdateNotificationSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateNotificationSettingsOutcome(UpdateNotificationSettingsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateNotificationSettingsOutcome(outcome.GetError());
  }
}

UpdateNotificationSettingsOutcomeCallable MTurkClient::UpdateNotificationSettingsCallable(const UpdateNotificationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotificationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotificationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::UpdateNotificationSettingsAsync(const UpdateNotificationSettingsRequest& request, const UpdateNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNotificationSettingsAsyncHelper( request, handler, context ); } );
}

void MTurkClient::UpdateNotificationSettingsAsyncHelper(const UpdateNotificationSettingsRequest& request, const UpdateNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNotificationSettings(request), context);
}

UpdateQualificationTypeOutcome MTurkClient::UpdateQualificationType(const UpdateQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateQualificationTypeOutcome(UpdateQualificationTypeResult(outcome.GetResult()));
  }
  else
  {
    return UpdateQualificationTypeOutcome(outcome.GetError());
  }
}

UpdateQualificationTypeOutcomeCallable MTurkClient::UpdateQualificationTypeCallable(const UpdateQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClient::UpdateQualificationTypeAsync(const UpdateQualificationTypeRequest& request, const UpdateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQualificationTypeAsyncHelper( request, handler, context ); } );
}

void MTurkClient::UpdateQualificationTypeAsyncHelper(const UpdateQualificationTypeRequest& request, const UpdateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQualificationType(request), context);
}

