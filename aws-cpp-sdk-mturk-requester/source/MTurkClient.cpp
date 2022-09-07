/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MTurkClient::MTurkClient(const AWSCredentials& credentials,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MTurkClient::MTurkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MTurkClient::~MTurkClient()
{
}

void MTurkClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MTurk");
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
  return AcceptQualificationRequestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptQualificationRequestOutcomeCallable MTurkClient::AcceptQualificationRequestCallable(const AcceptQualificationRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptQualificationRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptQualificationRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientAcceptQualificationRequestAsyncHelper(MTurkClient const * const clientThis, const AcceptQualificationRequestRequest& request, const AcceptQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptQualificationRequest(request), context);
}

void MTurkClient::AcceptQualificationRequestAsync(const AcceptQualificationRequestRequest& request, const AcceptQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientAcceptQualificationRequestAsyncHelper( this, request, handler, context ); } );
}

ApproveAssignmentOutcome MTurkClient::ApproveAssignment(const ApproveAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ApproveAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ApproveAssignmentOutcomeCallable MTurkClient::ApproveAssignmentCallable(const ApproveAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApproveAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApproveAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientApproveAssignmentAsyncHelper(MTurkClient const * const clientThis, const ApproveAssignmentRequest& request, const ApproveAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApproveAssignment(request), context);
}

void MTurkClient::ApproveAssignmentAsync(const ApproveAssignmentRequest& request, const ApproveAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientApproveAssignmentAsyncHelper( this, request, handler, context ); } );
}

AssociateQualificationWithWorkerOutcome MTurkClient::AssociateQualificationWithWorker(const AssociateQualificationWithWorkerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateQualificationWithWorkerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateQualificationWithWorkerOutcomeCallable MTurkClient::AssociateQualificationWithWorkerCallable(const AssociateQualificationWithWorkerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateQualificationWithWorkerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateQualificationWithWorker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientAssociateQualificationWithWorkerAsyncHelper(MTurkClient const * const clientThis, const AssociateQualificationWithWorkerRequest& request, const AssociateQualificationWithWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateQualificationWithWorker(request), context);
}

void MTurkClient::AssociateQualificationWithWorkerAsync(const AssociateQualificationWithWorkerRequest& request, const AssociateQualificationWithWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientAssociateQualificationWithWorkerAsyncHelper( this, request, handler, context ); } );
}

CreateAdditionalAssignmentsForHITOutcome MTurkClient::CreateAdditionalAssignmentsForHIT(const CreateAdditionalAssignmentsForHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAdditionalAssignmentsForHITOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAdditionalAssignmentsForHITOutcomeCallable MTurkClient::CreateAdditionalAssignmentsForHITCallable(const CreateAdditionalAssignmentsForHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAdditionalAssignmentsForHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAdditionalAssignmentsForHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientCreateAdditionalAssignmentsForHITAsyncHelper(MTurkClient const * const clientThis, const CreateAdditionalAssignmentsForHITRequest& request, const CreateAdditionalAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAdditionalAssignmentsForHIT(request), context);
}

void MTurkClient::CreateAdditionalAssignmentsForHITAsync(const CreateAdditionalAssignmentsForHITRequest& request, const CreateAdditionalAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientCreateAdditionalAssignmentsForHITAsyncHelper( this, request, handler, context ); } );
}

CreateHITOutcome MTurkClient::CreateHIT(const CreateHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHITOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHITOutcomeCallable MTurkClient::CreateHITCallable(const CreateHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientCreateHITAsyncHelper(MTurkClient const * const clientThis, const CreateHITRequest& request, const CreateHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHIT(request), context);
}

void MTurkClient::CreateHITAsync(const CreateHITRequest& request, const CreateHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientCreateHITAsyncHelper( this, request, handler, context ); } );
}

CreateHITTypeOutcome MTurkClient::CreateHITType(const CreateHITTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHITTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHITTypeOutcomeCallable MTurkClient::CreateHITTypeCallable(const CreateHITTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHITTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHITType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientCreateHITTypeAsyncHelper(MTurkClient const * const clientThis, const CreateHITTypeRequest& request, const CreateHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHITType(request), context);
}

void MTurkClient::CreateHITTypeAsync(const CreateHITTypeRequest& request, const CreateHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientCreateHITTypeAsyncHelper( this, request, handler, context ); } );
}

CreateHITWithHITTypeOutcome MTurkClient::CreateHITWithHITType(const CreateHITWithHITTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHITWithHITTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHITWithHITTypeOutcomeCallable MTurkClient::CreateHITWithHITTypeCallable(const CreateHITWithHITTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHITWithHITTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHITWithHITType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientCreateHITWithHITTypeAsyncHelper(MTurkClient const * const clientThis, const CreateHITWithHITTypeRequest& request, const CreateHITWithHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHITWithHITType(request), context);
}

void MTurkClient::CreateHITWithHITTypeAsync(const CreateHITWithHITTypeRequest& request, const CreateHITWithHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientCreateHITWithHITTypeAsyncHelper( this, request, handler, context ); } );
}

CreateQualificationTypeOutcome MTurkClient::CreateQualificationType(const CreateQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateQualificationTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateQualificationTypeOutcomeCallable MTurkClient::CreateQualificationTypeCallable(const CreateQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientCreateQualificationTypeAsyncHelper(MTurkClient const * const clientThis, const CreateQualificationTypeRequest& request, const CreateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateQualificationType(request), context);
}

void MTurkClient::CreateQualificationTypeAsync(const CreateQualificationTypeRequest& request, const CreateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientCreateQualificationTypeAsyncHelper( this, request, handler, context ); } );
}

CreateWorkerBlockOutcome MTurkClient::CreateWorkerBlock(const CreateWorkerBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkerBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkerBlockOutcomeCallable MTurkClient::CreateWorkerBlockCallable(const CreateWorkerBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkerBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkerBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientCreateWorkerBlockAsyncHelper(MTurkClient const * const clientThis, const CreateWorkerBlockRequest& request, const CreateWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkerBlock(request), context);
}

void MTurkClient::CreateWorkerBlockAsync(const CreateWorkerBlockRequest& request, const CreateWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientCreateWorkerBlockAsyncHelper( this, request, handler, context ); } );
}

DeleteHITOutcome MTurkClient::DeleteHIT(const DeleteHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteHITOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteHITOutcomeCallable MTurkClient::DeleteHITCallable(const DeleteHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientDeleteHITAsyncHelper(MTurkClient const * const clientThis, const DeleteHITRequest& request, const DeleteHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHIT(request), context);
}

void MTurkClient::DeleteHITAsync(const DeleteHITRequest& request, const DeleteHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientDeleteHITAsyncHelper( this, request, handler, context ); } );
}

DeleteQualificationTypeOutcome MTurkClient::DeleteQualificationType(const DeleteQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteQualificationTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteQualificationTypeOutcomeCallable MTurkClient::DeleteQualificationTypeCallable(const DeleteQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientDeleteQualificationTypeAsyncHelper(MTurkClient const * const clientThis, const DeleteQualificationTypeRequest& request, const DeleteQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteQualificationType(request), context);
}

void MTurkClient::DeleteQualificationTypeAsync(const DeleteQualificationTypeRequest& request, const DeleteQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientDeleteQualificationTypeAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkerBlockOutcome MTurkClient::DeleteWorkerBlock(const DeleteWorkerBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkerBlockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkerBlockOutcomeCallable MTurkClient::DeleteWorkerBlockCallable(const DeleteWorkerBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkerBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkerBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientDeleteWorkerBlockAsyncHelper(MTurkClient const * const clientThis, const DeleteWorkerBlockRequest& request, const DeleteWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkerBlock(request), context);
}

void MTurkClient::DeleteWorkerBlockAsync(const DeleteWorkerBlockRequest& request, const DeleteWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientDeleteWorkerBlockAsyncHelper( this, request, handler, context ); } );
}

DisassociateQualificationFromWorkerOutcome MTurkClient::DisassociateQualificationFromWorker(const DisassociateQualificationFromWorkerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateQualificationFromWorkerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateQualificationFromWorkerOutcomeCallable MTurkClient::DisassociateQualificationFromWorkerCallable(const DisassociateQualificationFromWorkerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateQualificationFromWorkerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateQualificationFromWorker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientDisassociateQualificationFromWorkerAsyncHelper(MTurkClient const * const clientThis, const DisassociateQualificationFromWorkerRequest& request, const DisassociateQualificationFromWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateQualificationFromWorker(request), context);
}

void MTurkClient::DisassociateQualificationFromWorkerAsync(const DisassociateQualificationFromWorkerRequest& request, const DisassociateQualificationFromWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientDisassociateQualificationFromWorkerAsyncHelper( this, request, handler, context ); } );
}

GetAccountBalanceOutcome MTurkClient::GetAccountBalance(const GetAccountBalanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccountBalanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccountBalanceOutcomeCallable MTurkClient::GetAccountBalanceCallable(const GetAccountBalanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountBalanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountBalance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientGetAccountBalanceAsyncHelper(MTurkClient const * const clientThis, const GetAccountBalanceRequest& request, const GetAccountBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountBalance(request), context);
}

void MTurkClient::GetAccountBalanceAsync(const GetAccountBalanceRequest& request, const GetAccountBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientGetAccountBalanceAsyncHelper( this, request, handler, context ); } );
}

GetAssignmentOutcome MTurkClient::GetAssignment(const GetAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAssignmentOutcomeCallable MTurkClient::GetAssignmentCallable(const GetAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientGetAssignmentAsyncHelper(MTurkClient const * const clientThis, const GetAssignmentRequest& request, const GetAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAssignment(request), context);
}

void MTurkClient::GetAssignmentAsync(const GetAssignmentRequest& request, const GetAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientGetAssignmentAsyncHelper( this, request, handler, context ); } );
}

GetFileUploadURLOutcome MTurkClient::GetFileUploadURL(const GetFileUploadURLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFileUploadURLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFileUploadURLOutcomeCallable MTurkClient::GetFileUploadURLCallable(const GetFileUploadURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFileUploadURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFileUploadURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientGetFileUploadURLAsyncHelper(MTurkClient const * const clientThis, const GetFileUploadURLRequest& request, const GetFileUploadURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFileUploadURL(request), context);
}

void MTurkClient::GetFileUploadURLAsync(const GetFileUploadURLRequest& request, const GetFileUploadURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientGetFileUploadURLAsyncHelper( this, request, handler, context ); } );
}

GetHITOutcome MTurkClient::GetHIT(const GetHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetHITOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetHITOutcomeCallable MTurkClient::GetHITCallable(const GetHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientGetHITAsyncHelper(MTurkClient const * const clientThis, const GetHITRequest& request, const GetHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHIT(request), context);
}

void MTurkClient::GetHITAsync(const GetHITRequest& request, const GetHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientGetHITAsyncHelper( this, request, handler, context ); } );
}

GetQualificationScoreOutcome MTurkClient::GetQualificationScore(const GetQualificationScoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQualificationScoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQualificationScoreOutcomeCallable MTurkClient::GetQualificationScoreCallable(const GetQualificationScoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQualificationScoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQualificationScore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientGetQualificationScoreAsyncHelper(MTurkClient const * const clientThis, const GetQualificationScoreRequest& request, const GetQualificationScoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQualificationScore(request), context);
}

void MTurkClient::GetQualificationScoreAsync(const GetQualificationScoreRequest& request, const GetQualificationScoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientGetQualificationScoreAsyncHelper( this, request, handler, context ); } );
}

GetQualificationTypeOutcome MTurkClient::GetQualificationType(const GetQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQualificationTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQualificationTypeOutcomeCallable MTurkClient::GetQualificationTypeCallable(const GetQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientGetQualificationTypeAsyncHelper(MTurkClient const * const clientThis, const GetQualificationTypeRequest& request, const GetQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQualificationType(request), context);
}

void MTurkClient::GetQualificationTypeAsync(const GetQualificationTypeRequest& request, const GetQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientGetQualificationTypeAsyncHelper( this, request, handler, context ); } );
}

ListAssignmentsForHITOutcome MTurkClient::ListAssignmentsForHIT(const ListAssignmentsForHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssignmentsForHITOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssignmentsForHITOutcomeCallable MTurkClient::ListAssignmentsForHITCallable(const ListAssignmentsForHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssignmentsForHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssignmentsForHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListAssignmentsForHITAsyncHelper(MTurkClient const * const clientThis, const ListAssignmentsForHITRequest& request, const ListAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssignmentsForHIT(request), context);
}

void MTurkClient::ListAssignmentsForHITAsync(const ListAssignmentsForHITRequest& request, const ListAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListAssignmentsForHITAsyncHelper( this, request, handler, context ); } );
}

ListBonusPaymentsOutcome MTurkClient::ListBonusPayments(const ListBonusPaymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBonusPaymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBonusPaymentsOutcomeCallable MTurkClient::ListBonusPaymentsCallable(const ListBonusPaymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBonusPaymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBonusPayments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListBonusPaymentsAsyncHelper(MTurkClient const * const clientThis, const ListBonusPaymentsRequest& request, const ListBonusPaymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBonusPayments(request), context);
}

void MTurkClient::ListBonusPaymentsAsync(const ListBonusPaymentsRequest& request, const ListBonusPaymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListBonusPaymentsAsyncHelper( this, request, handler, context ); } );
}

ListHITsOutcome MTurkClient::ListHITs(const ListHITsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHITsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHITsOutcomeCallable MTurkClient::ListHITsCallable(const ListHITsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHITsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHITs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListHITsAsyncHelper(MTurkClient const * const clientThis, const ListHITsRequest& request, const ListHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHITs(request), context);
}

void MTurkClient::ListHITsAsync(const ListHITsRequest& request, const ListHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListHITsAsyncHelper( this, request, handler, context ); } );
}

ListHITsForQualificationTypeOutcome MTurkClient::ListHITsForQualificationType(const ListHITsForQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHITsForQualificationTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHITsForQualificationTypeOutcomeCallable MTurkClient::ListHITsForQualificationTypeCallable(const ListHITsForQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHITsForQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHITsForQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListHITsForQualificationTypeAsyncHelper(MTurkClient const * const clientThis, const ListHITsForQualificationTypeRequest& request, const ListHITsForQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHITsForQualificationType(request), context);
}

void MTurkClient::ListHITsForQualificationTypeAsync(const ListHITsForQualificationTypeRequest& request, const ListHITsForQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListHITsForQualificationTypeAsyncHelper( this, request, handler, context ); } );
}

ListQualificationRequestsOutcome MTurkClient::ListQualificationRequests(const ListQualificationRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListQualificationRequestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListQualificationRequestsOutcomeCallable MTurkClient::ListQualificationRequestsCallable(const ListQualificationRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQualificationRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQualificationRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListQualificationRequestsAsyncHelper(MTurkClient const * const clientThis, const ListQualificationRequestsRequest& request, const ListQualificationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQualificationRequests(request), context);
}

void MTurkClient::ListQualificationRequestsAsync(const ListQualificationRequestsRequest& request, const ListQualificationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListQualificationRequestsAsyncHelper( this, request, handler, context ); } );
}

ListQualificationTypesOutcome MTurkClient::ListQualificationTypes(const ListQualificationTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListQualificationTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListQualificationTypesOutcomeCallable MTurkClient::ListQualificationTypesCallable(const ListQualificationTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQualificationTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQualificationTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListQualificationTypesAsyncHelper(MTurkClient const * const clientThis, const ListQualificationTypesRequest& request, const ListQualificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQualificationTypes(request), context);
}

void MTurkClient::ListQualificationTypesAsync(const ListQualificationTypesRequest& request, const ListQualificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListQualificationTypesAsyncHelper( this, request, handler, context ); } );
}

ListReviewPolicyResultsForHITOutcome MTurkClient::ListReviewPolicyResultsForHIT(const ListReviewPolicyResultsForHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReviewPolicyResultsForHITOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReviewPolicyResultsForHITOutcomeCallable MTurkClient::ListReviewPolicyResultsForHITCallable(const ListReviewPolicyResultsForHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReviewPolicyResultsForHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReviewPolicyResultsForHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListReviewPolicyResultsForHITAsyncHelper(MTurkClient const * const clientThis, const ListReviewPolicyResultsForHITRequest& request, const ListReviewPolicyResultsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReviewPolicyResultsForHIT(request), context);
}

void MTurkClient::ListReviewPolicyResultsForHITAsync(const ListReviewPolicyResultsForHITRequest& request, const ListReviewPolicyResultsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListReviewPolicyResultsForHITAsyncHelper( this, request, handler, context ); } );
}

ListReviewableHITsOutcome MTurkClient::ListReviewableHITs(const ListReviewableHITsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReviewableHITsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReviewableHITsOutcomeCallable MTurkClient::ListReviewableHITsCallable(const ListReviewableHITsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReviewableHITsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReviewableHITs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListReviewableHITsAsyncHelper(MTurkClient const * const clientThis, const ListReviewableHITsRequest& request, const ListReviewableHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReviewableHITs(request), context);
}

void MTurkClient::ListReviewableHITsAsync(const ListReviewableHITsRequest& request, const ListReviewableHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListReviewableHITsAsyncHelper( this, request, handler, context ); } );
}

ListWorkerBlocksOutcome MTurkClient::ListWorkerBlocks(const ListWorkerBlocksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkerBlocksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkerBlocksOutcomeCallable MTurkClient::ListWorkerBlocksCallable(const ListWorkerBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkerBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkerBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListWorkerBlocksAsyncHelper(MTurkClient const * const clientThis, const ListWorkerBlocksRequest& request, const ListWorkerBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkerBlocks(request), context);
}

void MTurkClient::ListWorkerBlocksAsync(const ListWorkerBlocksRequest& request, const ListWorkerBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListWorkerBlocksAsyncHelper( this, request, handler, context ); } );
}

ListWorkersWithQualificationTypeOutcome MTurkClient::ListWorkersWithQualificationType(const ListWorkersWithQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkersWithQualificationTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkersWithQualificationTypeOutcomeCallable MTurkClient::ListWorkersWithQualificationTypeCallable(const ListWorkersWithQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkersWithQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkersWithQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientListWorkersWithQualificationTypeAsyncHelper(MTurkClient const * const clientThis, const ListWorkersWithQualificationTypeRequest& request, const ListWorkersWithQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkersWithQualificationType(request), context);
}

void MTurkClient::ListWorkersWithQualificationTypeAsync(const ListWorkersWithQualificationTypeRequest& request, const ListWorkersWithQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientListWorkersWithQualificationTypeAsyncHelper( this, request, handler, context ); } );
}

NotifyWorkersOutcome MTurkClient::NotifyWorkers(const NotifyWorkersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return NotifyWorkersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

NotifyWorkersOutcomeCallable MTurkClient::NotifyWorkersCallable(const NotifyWorkersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyWorkersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyWorkers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientNotifyWorkersAsyncHelper(MTurkClient const * const clientThis, const NotifyWorkersRequest& request, const NotifyWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->NotifyWorkers(request), context);
}

void MTurkClient::NotifyWorkersAsync(const NotifyWorkersRequest& request, const NotifyWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientNotifyWorkersAsyncHelper( this, request, handler, context ); } );
}

RejectAssignmentOutcome MTurkClient::RejectAssignment(const RejectAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RejectAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectAssignmentOutcomeCallable MTurkClient::RejectAssignmentCallable(const RejectAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientRejectAssignmentAsyncHelper(MTurkClient const * const clientThis, const RejectAssignmentRequest& request, const RejectAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectAssignment(request), context);
}

void MTurkClient::RejectAssignmentAsync(const RejectAssignmentRequest& request, const RejectAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientRejectAssignmentAsyncHelper( this, request, handler, context ); } );
}

RejectQualificationRequestOutcome MTurkClient::RejectQualificationRequest(const RejectQualificationRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RejectQualificationRequestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectQualificationRequestOutcomeCallable MTurkClient::RejectQualificationRequestCallable(const RejectQualificationRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectQualificationRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectQualificationRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientRejectQualificationRequestAsyncHelper(MTurkClient const * const clientThis, const RejectQualificationRequestRequest& request, const RejectQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectQualificationRequest(request), context);
}

void MTurkClient::RejectQualificationRequestAsync(const RejectQualificationRequestRequest& request, const RejectQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientRejectQualificationRequestAsyncHelper( this, request, handler, context ); } );
}

SendBonusOutcome MTurkClient::SendBonus(const SendBonusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendBonusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendBonusOutcomeCallable MTurkClient::SendBonusCallable(const SendBonusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendBonusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendBonus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientSendBonusAsyncHelper(MTurkClient const * const clientThis, const SendBonusRequest& request, const SendBonusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendBonus(request), context);
}

void MTurkClient::SendBonusAsync(const SendBonusRequest& request, const SendBonusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientSendBonusAsyncHelper( this, request, handler, context ); } );
}

SendTestEventNotificationOutcome MTurkClient::SendTestEventNotification(const SendTestEventNotificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendTestEventNotificationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendTestEventNotificationOutcomeCallable MTurkClient::SendTestEventNotificationCallable(const SendTestEventNotificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendTestEventNotificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendTestEventNotification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientSendTestEventNotificationAsyncHelper(MTurkClient const * const clientThis, const SendTestEventNotificationRequest& request, const SendTestEventNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendTestEventNotification(request), context);
}

void MTurkClient::SendTestEventNotificationAsync(const SendTestEventNotificationRequest& request, const SendTestEventNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientSendTestEventNotificationAsyncHelper( this, request, handler, context ); } );
}

UpdateExpirationForHITOutcome MTurkClient::UpdateExpirationForHIT(const UpdateExpirationForHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateExpirationForHITOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateExpirationForHITOutcomeCallable MTurkClient::UpdateExpirationForHITCallable(const UpdateExpirationForHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExpirationForHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExpirationForHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientUpdateExpirationForHITAsyncHelper(MTurkClient const * const clientThis, const UpdateExpirationForHITRequest& request, const UpdateExpirationForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateExpirationForHIT(request), context);
}

void MTurkClient::UpdateExpirationForHITAsync(const UpdateExpirationForHITRequest& request, const UpdateExpirationForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientUpdateExpirationForHITAsyncHelper( this, request, handler, context ); } );
}

UpdateHITReviewStatusOutcome MTurkClient::UpdateHITReviewStatus(const UpdateHITReviewStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateHITReviewStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateHITReviewStatusOutcomeCallable MTurkClient::UpdateHITReviewStatusCallable(const UpdateHITReviewStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHITReviewStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHITReviewStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientUpdateHITReviewStatusAsyncHelper(MTurkClient const * const clientThis, const UpdateHITReviewStatusRequest& request, const UpdateHITReviewStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateHITReviewStatus(request), context);
}

void MTurkClient::UpdateHITReviewStatusAsync(const UpdateHITReviewStatusRequest& request, const UpdateHITReviewStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientUpdateHITReviewStatusAsyncHelper( this, request, handler, context ); } );
}

UpdateHITTypeOfHITOutcome MTurkClient::UpdateHITTypeOfHIT(const UpdateHITTypeOfHITRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateHITTypeOfHITOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateHITTypeOfHITOutcomeCallable MTurkClient::UpdateHITTypeOfHITCallable(const UpdateHITTypeOfHITRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHITTypeOfHITOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHITTypeOfHIT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientUpdateHITTypeOfHITAsyncHelper(MTurkClient const * const clientThis, const UpdateHITTypeOfHITRequest& request, const UpdateHITTypeOfHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateHITTypeOfHIT(request), context);
}

void MTurkClient::UpdateHITTypeOfHITAsync(const UpdateHITTypeOfHITRequest& request, const UpdateHITTypeOfHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientUpdateHITTypeOfHITAsyncHelper( this, request, handler, context ); } );
}

UpdateNotificationSettingsOutcome MTurkClient::UpdateNotificationSettings(const UpdateNotificationSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNotificationSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotificationSettingsOutcomeCallable MTurkClient::UpdateNotificationSettingsCallable(const UpdateNotificationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotificationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotificationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientUpdateNotificationSettingsAsyncHelper(MTurkClient const * const clientThis, const UpdateNotificationSettingsRequest& request, const UpdateNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNotificationSettings(request), context);
}

void MTurkClient::UpdateNotificationSettingsAsync(const UpdateNotificationSettingsRequest& request, const UpdateNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientUpdateNotificationSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateQualificationTypeOutcome MTurkClient::UpdateQualificationType(const UpdateQualificationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateQualificationTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQualificationTypeOutcomeCallable MTurkClient::UpdateQualificationTypeCallable(const UpdateQualificationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQualificationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQualificationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MTurkClientUpdateQualificationTypeAsyncHelper(MTurkClient const * const clientThis, const UpdateQualificationTypeRequest& request, const UpdateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQualificationType(request), context);
}

void MTurkClient::UpdateQualificationTypeAsync(const UpdateQualificationTypeRequest& request, const UpdateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MTurkClientUpdateQualificationTypeAsyncHelper( this, request, handler, context ); } );
}

