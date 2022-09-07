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
#include <aws/acm/model/PutAccountConfigurationRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::ACMClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::ACMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::~ACMClient()
{
}

void ACMClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ACM");
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
  return AddTagsToCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToCertificateOutcomeCallable ACMClient::AddTagsToCertificateCallable(const AddTagsToCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientAddTagsToCertificateAsyncHelper(ACMClient const * const clientThis, const AddTagsToCertificateRequest& request, const AddTagsToCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToCertificate(request), context);
}

void ACMClient::AddTagsToCertificateAsync(const AddTagsToCertificateRequest& request, const AddTagsToCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientAddTagsToCertificateAsyncHelper( this, request, handler, context ); } );
}

DeleteCertificateOutcome ACMClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateOutcomeCallable ACMClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientDeleteCertificateAsyncHelper(ACMClient const * const clientThis, const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCertificate(request), context);
}

void ACMClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientDeleteCertificateAsyncHelper( this, request, handler, context ); } );
}

DescribeCertificateOutcome ACMClient::DescribeCertificate(const DescribeCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificateOutcomeCallable ACMClient::DescribeCertificateCallable(const DescribeCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientDescribeCertificateAsyncHelper(ACMClient const * const clientThis, const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCertificate(request), context);
}

void ACMClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientDescribeCertificateAsyncHelper( this, request, handler, context ); } );
}

ExportCertificateOutcome ACMClient::ExportCertificate(const ExportCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExportCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportCertificateOutcomeCallable ACMClient::ExportCertificateCallable(const ExportCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientExportCertificateAsyncHelper(ACMClient const * const clientThis, const ExportCertificateRequest& request, const ExportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExportCertificate(request), context);
}

void ACMClient::ExportCertificateAsync(const ExportCertificateRequest& request, const ExportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientExportCertificateAsyncHelper( this, request, handler, context ); } );
}

GetAccountConfigurationOutcome ACMClient::GetAccountConfiguration() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return GetAccountConfigurationOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "GetAccountConfiguration"));
}

GetAccountConfigurationOutcomeCallable ACMClient::GetAccountConfigurationCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountConfigurationOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetAccountConfiguration(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientGetAccountConfigurationAsyncHelper(ACMClient const * const clientThis, const GetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->GetAccountConfiguration(), context);
}

void ACMClient::GetAccountConfigurationAsync(const GetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ ACMClientGetAccountConfigurationAsyncHelper( this, handler, context ); } );
}

GetCertificateOutcome ACMClient::GetCertificate(const GetCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCertificateOutcomeCallable ACMClient::GetCertificateCallable(const GetCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientGetCertificateAsyncHelper(ACMClient const * const clientThis, const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCertificate(request), context);
}

void ACMClient::GetCertificateAsync(const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientGetCertificateAsyncHelper( this, request, handler, context ); } );
}

ImportCertificateOutcome ACMClient::ImportCertificate(const ImportCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportCertificateOutcomeCallable ACMClient::ImportCertificateCallable(const ImportCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientImportCertificateAsyncHelper(ACMClient const * const clientThis, const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportCertificate(request), context);
}

void ACMClient::ImportCertificateAsync(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientImportCertificateAsyncHelper( this, request, handler, context ); } );
}

ListCertificatesOutcome ACMClient::ListCertificates(const ListCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCertificatesOutcomeCallable ACMClient::ListCertificatesCallable(const ListCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientListCertificatesAsyncHelper(ACMClient const * const clientThis, const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCertificates(request), context);
}

void ACMClient::ListCertificatesAsync(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientListCertificatesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForCertificateOutcome ACMClient::ListTagsForCertificate(const ListTagsForCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForCertificateOutcomeCallable ACMClient::ListTagsForCertificateCallable(const ListTagsForCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientListTagsForCertificateAsyncHelper(ACMClient const * const clientThis, const ListTagsForCertificateRequest& request, const ListTagsForCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForCertificate(request), context);
}

void ACMClient::ListTagsForCertificateAsync(const ListTagsForCertificateRequest& request, const ListTagsForCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientListTagsForCertificateAsyncHelper( this, request, handler, context ); } );
}

PutAccountConfigurationOutcome ACMClient::PutAccountConfiguration(const PutAccountConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAccountConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccountConfigurationOutcomeCallable ACMClient::PutAccountConfigurationCallable(const PutAccountConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientPutAccountConfigurationAsyncHelper(ACMClient const * const clientThis, const PutAccountConfigurationRequest& request, const PutAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountConfiguration(request), context);
}

void ACMClient::PutAccountConfigurationAsync(const PutAccountConfigurationRequest& request, const PutAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientPutAccountConfigurationAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromCertificateOutcome ACMClient::RemoveTagsFromCertificate(const RemoveTagsFromCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromCertificateOutcomeCallable ACMClient::RemoveTagsFromCertificateCallable(const RemoveTagsFromCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientRemoveTagsFromCertificateAsyncHelper(ACMClient const * const clientThis, const RemoveTagsFromCertificateRequest& request, const RemoveTagsFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromCertificate(request), context);
}

void ACMClient::RemoveTagsFromCertificateAsync(const RemoveTagsFromCertificateRequest& request, const RemoveTagsFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientRemoveTagsFromCertificateAsyncHelper( this, request, handler, context ); } );
}

RenewCertificateOutcome ACMClient::RenewCertificate(const RenewCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RenewCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RenewCertificateOutcomeCallable ACMClient::RenewCertificateCallable(const RenewCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RenewCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RenewCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientRenewCertificateAsyncHelper(ACMClient const * const clientThis, const RenewCertificateRequest& request, const RenewCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RenewCertificate(request), context);
}

void ACMClient::RenewCertificateAsync(const RenewCertificateRequest& request, const RenewCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientRenewCertificateAsyncHelper( this, request, handler, context ); } );
}

RequestCertificateOutcome ACMClient::RequestCertificate(const RequestCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RequestCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RequestCertificateOutcomeCallable ACMClient::RequestCertificateCallable(const RequestCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientRequestCertificateAsyncHelper(ACMClient const * const clientThis, const RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RequestCertificate(request), context);
}

void ACMClient::RequestCertificateAsync(const RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientRequestCertificateAsyncHelper( this, request, handler, context ); } );
}

ResendValidationEmailOutcome ACMClient::ResendValidationEmail(const ResendValidationEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResendValidationEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResendValidationEmailOutcomeCallable ACMClient::ResendValidationEmailCallable(const ResendValidationEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResendValidationEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResendValidationEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientResendValidationEmailAsyncHelper(ACMClient const * const clientThis, const ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResendValidationEmail(request), context);
}

void ACMClient::ResendValidationEmailAsync(const ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientResendValidationEmailAsyncHelper( this, request, handler, context ); } );
}

UpdateCertificateOptionsOutcome ACMClient::UpdateCertificateOptions(const UpdateCertificateOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCertificateOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCertificateOptionsOutcomeCallable ACMClient::UpdateCertificateOptionsCallable(const UpdateCertificateOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCertificateOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCertificateOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ACMClientUpdateCertificateOptionsAsyncHelper(ACMClient const * const clientThis, const UpdateCertificateOptionsRequest& request, const UpdateCertificateOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCertificateOptions(request), context);
}

void ACMClient::UpdateCertificateOptionsAsync(const UpdateCertificateOptionsRequest& request, const UpdateCertificateOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ACMClientUpdateCertificateOptionsAsyncHelper( this, request, handler, context ); } );
}

