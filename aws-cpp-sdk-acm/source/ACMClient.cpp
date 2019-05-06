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

#include <aws/acm/ACMClient.h>
#include <aws/acm/ACMEndpoint.h>
#include <aws/acm/ACMErrorMarshaller.h>
#include <aws/acm/model/AddTagsToCertificateRequest.h>
#include <aws/acm/model/DeleteCertificateRequest.h>
#include <aws/acm/model/DescribeCertificateRequest.h>
#include <aws/acm/model/ExportCertificateRequest.h>
#include <aws/acm/model/GetCertificateRequest.h>
#include <aws/acm/model/ImportCertificateRequest.h>
#include <aws/acm/model/ListCertificatesRequest.h>
#include <aws/acm/model/ListTagsForCertificateRequest.h>
#include <aws/acm/model/RemoveTagsFromCertificateRequest.h>
#include <aws/acm/model/RenewCertificateRequest.h>
#include <aws/acm/model/RequestCertificateRequest.h>
#include <aws/acm/model/ResendValidationEmailRequest.h>
#include <aws/acm/model/UpdateCertificateOptionsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ACM;
using namespace Aws::ACM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "acm";
static const char* ALLOCATION_TAG = "ACMClient";


ACMClient::ACMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::ACMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::ACMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::~ACMClient()
{
}

void ACMClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ACMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ACMClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsToCertificateOutcome ACMClient::AddTagsToCertificate(const AddTagsToCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsToCertificateOutcome(NoResult());
  }
  else
  {
    return AddTagsToCertificateOutcome(outcome.GetError());
  }
}

AddTagsToCertificateOutcomeCallable ACMClient::AddTagsToCertificateCallable(const AddTagsToCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::AddTagsToCertificateAsync(const AddTagsToCertificateRequest& request, const AddTagsToCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::AddTagsToCertificateAsyncHelper(const AddTagsToCertificateRequest& request, const AddTagsToCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToCertificate(request), context);
}

DeleteCertificateOutcome ACMClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCertificateOutcome(NoResult());
  }
  else
  {
    return DeleteCertificateOutcome(outcome.GetError());
  }
}

DeleteCertificateOutcomeCallable ACMClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::DeleteCertificateAsyncHelper(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCertificate(request), context);
}

DescribeCertificateOutcome ACMClient::DescribeCertificate(const DescribeCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCertificateOutcome(DescribeCertificateResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCertificateOutcome(outcome.GetError());
  }
}

DescribeCertificateOutcomeCallable ACMClient::DescribeCertificateCallable(const DescribeCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::DescribeCertificateAsyncHelper(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificate(request), context);
}

ExportCertificateOutcome ACMClient::ExportCertificate(const ExportCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ExportCertificateOutcome(ExportCertificateResult(outcome.GetResult()));
  }
  else
  {
    return ExportCertificateOutcome(outcome.GetError());
  }
}

ExportCertificateOutcomeCallable ACMClient::ExportCertificateCallable(const ExportCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::ExportCertificateAsync(const ExportCertificateRequest& request, const ExportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExportCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::ExportCertificateAsyncHelper(const ExportCertificateRequest& request, const ExportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportCertificate(request), context);
}

GetCertificateOutcome ACMClient::GetCertificate(const GetCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCertificateOutcome(GetCertificateResult(outcome.GetResult()));
  }
  else
  {
    return GetCertificateOutcome(outcome.GetError());
  }
}

GetCertificateOutcomeCallable ACMClient::GetCertificateCallable(const GetCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::GetCertificateAsync(const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::GetCertificateAsyncHelper(const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCertificate(request), context);
}

ImportCertificateOutcome ACMClient::ImportCertificate(const ImportCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportCertificateOutcome(ImportCertificateResult(outcome.GetResult()));
  }
  else
  {
    return ImportCertificateOutcome(outcome.GetError());
  }
}

ImportCertificateOutcomeCallable ACMClient::ImportCertificateCallable(const ImportCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::ImportCertificateAsync(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::ImportCertificateAsyncHelper(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportCertificate(request), context);
}

ListCertificatesOutcome ACMClient::ListCertificates(const ListCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCertificatesOutcome(ListCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return ListCertificatesOutcome(outcome.GetError());
  }
}

ListCertificatesOutcomeCallable ACMClient::ListCertificatesCallable(const ListCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::ListCertificatesAsync(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCertificatesAsyncHelper( request, handler, context ); } );
}

void ACMClient::ListCertificatesAsyncHelper(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCertificates(request), context);
}

ListTagsForCertificateOutcome ACMClient::ListTagsForCertificate(const ListTagsForCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForCertificateOutcome(ListTagsForCertificateResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForCertificateOutcome(outcome.GetError());
  }
}

ListTagsForCertificateOutcomeCallable ACMClient::ListTagsForCertificateCallable(const ListTagsForCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::ListTagsForCertificateAsync(const ListTagsForCertificateRequest& request, const ListTagsForCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::ListTagsForCertificateAsyncHelper(const ListTagsForCertificateRequest& request, const ListTagsForCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForCertificate(request), context);
}

RemoveTagsFromCertificateOutcome ACMClient::RemoveTagsFromCertificate(const RemoveTagsFromCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromCertificateOutcome(NoResult());
  }
  else
  {
    return RemoveTagsFromCertificateOutcome(outcome.GetError());
  }
}

RemoveTagsFromCertificateOutcomeCallable ACMClient::RemoveTagsFromCertificateCallable(const RemoveTagsFromCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::RemoveTagsFromCertificateAsync(const RemoveTagsFromCertificateRequest& request, const RemoveTagsFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::RemoveTagsFromCertificateAsyncHelper(const RemoveTagsFromCertificateRequest& request, const RemoveTagsFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromCertificate(request), context);
}

RenewCertificateOutcome ACMClient::RenewCertificate(const RenewCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RenewCertificateOutcome(NoResult());
  }
  else
  {
    return RenewCertificateOutcome(outcome.GetError());
  }
}

RenewCertificateOutcomeCallable ACMClient::RenewCertificateCallable(const RenewCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RenewCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RenewCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::RenewCertificateAsync(const RenewCertificateRequest& request, const RenewCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RenewCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::RenewCertificateAsyncHelper(const RenewCertificateRequest& request, const RenewCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RenewCertificate(request), context);
}

RequestCertificateOutcome ACMClient::RequestCertificate(const RequestCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RequestCertificateOutcome(RequestCertificateResult(outcome.GetResult()));
  }
  else
  {
    return RequestCertificateOutcome(outcome.GetError());
  }
}

RequestCertificateOutcomeCallable ACMClient::RequestCertificateCallable(const RequestCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::RequestCertificateAsync(const RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RequestCertificateAsyncHelper( request, handler, context ); } );
}

void ACMClient::RequestCertificateAsyncHelper(const RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestCertificate(request), context);
}

ResendValidationEmailOutcome ACMClient::ResendValidationEmail(const ResendValidationEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResendValidationEmailOutcome(NoResult());
  }
  else
  {
    return ResendValidationEmailOutcome(outcome.GetError());
  }
}

ResendValidationEmailOutcomeCallable ACMClient::ResendValidationEmailCallable(const ResendValidationEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResendValidationEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResendValidationEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::ResendValidationEmailAsync(const ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResendValidationEmailAsyncHelper( request, handler, context ); } );
}

void ACMClient::ResendValidationEmailAsyncHelper(const ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResendValidationEmail(request), context);
}

UpdateCertificateOptionsOutcome ACMClient::UpdateCertificateOptions(const UpdateCertificateOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCertificateOptionsOutcome(NoResult());
  }
  else
  {
    return UpdateCertificateOptionsOutcome(outcome.GetError());
  }
}

UpdateCertificateOptionsOutcomeCallable ACMClient::UpdateCertificateOptionsCallable(const UpdateCertificateOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCertificateOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCertificateOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClient::UpdateCertificateOptionsAsync(const UpdateCertificateOptionsRequest& request, const UpdateCertificateOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCertificateOptionsAsyncHelper( request, handler, context ); } );
}

void ACMClient::UpdateCertificateOptionsAsyncHelper(const UpdateCertificateOptionsRequest& request, const UpdateCertificateOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCertificateOptions(request), context);
}

