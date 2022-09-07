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

#include <aws/license-manager/LicenseManagerClient.h>
#include <aws/license-manager/LicenseManagerEndpoint.h>
#include <aws/license-manager/LicenseManagerErrorMarshaller.h>
#include <aws/license-manager/model/AcceptGrantRequest.h>
#include <aws/license-manager/model/CheckInLicenseRequest.h>
#include <aws/license-manager/model/CheckoutBorrowLicenseRequest.h>
#include <aws/license-manager/model/CheckoutLicenseRequest.h>
#include <aws/license-manager/model/CreateGrantRequest.h>
#include <aws/license-manager/model/CreateGrantVersionRequest.h>
#include <aws/license-manager/model/CreateLicenseRequest.h>
#include <aws/license-manager/model/CreateLicenseConfigurationRequest.h>
#include <aws/license-manager/model/CreateLicenseConversionTaskForResourceRequest.h>
#include <aws/license-manager/model/CreateLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/CreateLicenseVersionRequest.h>
#include <aws/license-manager/model/CreateTokenRequest.h>
#include <aws/license-manager/model/DeleteGrantRequest.h>
#include <aws/license-manager/model/DeleteLicenseRequest.h>
#include <aws/license-manager/model/DeleteLicenseConfigurationRequest.h>
#include <aws/license-manager/model/DeleteLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/DeleteTokenRequest.h>
#include <aws/license-manager/model/ExtendLicenseConsumptionRequest.h>
#include <aws/license-manager/model/GetAccessTokenRequest.h>
#include <aws/license-manager/model/GetGrantRequest.h>
#include <aws/license-manager/model/GetLicenseRequest.h>
#include <aws/license-manager/model/GetLicenseConfigurationRequest.h>
#include <aws/license-manager/model/GetLicenseConversionTaskRequest.h>
#include <aws/license-manager/model/GetLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/GetLicenseUsageRequest.h>
#include <aws/license-manager/model/GetServiceSettingsRequest.h>
#include <aws/license-manager/model/ListAssociationsForLicenseConfigurationRequest.h>
#include <aws/license-manager/model/ListDistributedGrantsRequest.h>
#include <aws/license-manager/model/ListFailuresForLicenseConfigurationOperationsRequest.h>
#include <aws/license-manager/model/ListLicenseConfigurationsRequest.h>
#include <aws/license-manager/model/ListLicenseConversionTasksRequest.h>
#include <aws/license-manager/model/ListLicenseManagerReportGeneratorsRequest.h>
#include <aws/license-manager/model/ListLicenseSpecificationsForResourceRequest.h>
#include <aws/license-manager/model/ListLicenseVersionsRequest.h>
#include <aws/license-manager/model/ListLicensesRequest.h>
#include <aws/license-manager/model/ListReceivedGrantsRequest.h>
#include <aws/license-manager/model/ListReceivedLicensesRequest.h>
#include <aws/license-manager/model/ListResourceInventoryRequest.h>
#include <aws/license-manager/model/ListTagsForResourceRequest.h>
#include <aws/license-manager/model/ListTokensRequest.h>
#include <aws/license-manager/model/ListUsageForLicenseConfigurationRequest.h>
#include <aws/license-manager/model/RejectGrantRequest.h>
#include <aws/license-manager/model/TagResourceRequest.h>
#include <aws/license-manager/model/UntagResourceRequest.h>
#include <aws/license-manager/model/UpdateLicenseConfigurationRequest.h>
#include <aws/license-manager/model/UpdateLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/UpdateLicenseSpecificationsForResourceRequest.h>
#include <aws/license-manager/model/UpdateServiceSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LicenseManager;
using namespace Aws::LicenseManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "license-manager";
static const char* ALLOCATION_TAG = "LicenseManagerClient";

LicenseManagerClient::LicenseManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerClient::~LicenseManagerClient()
{
}

void LicenseManagerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("License Manager");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LicenseManagerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LicenseManagerClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptGrantOutcome LicenseManagerClient::AcceptGrant(const AcceptGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcceptGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptGrantOutcomeCallable LicenseManagerClient::AcceptGrantCallable(const AcceptGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientAcceptGrantAsyncHelper(LicenseManagerClient const * const clientThis, const AcceptGrantRequest& request, const AcceptGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptGrant(request), context);
}

void LicenseManagerClient::AcceptGrantAsync(const AcceptGrantRequest& request, const AcceptGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientAcceptGrantAsyncHelper( this, request, handler, context ); } );
}

CheckInLicenseOutcome LicenseManagerClient::CheckInLicense(const CheckInLicenseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CheckInLicenseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckInLicenseOutcomeCallable LicenseManagerClient::CheckInLicenseCallable(const CheckInLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckInLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckInLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCheckInLicenseAsyncHelper(LicenseManagerClient const * const clientThis, const CheckInLicenseRequest& request, const CheckInLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CheckInLicense(request), context);
}

void LicenseManagerClient::CheckInLicenseAsync(const CheckInLicenseRequest& request, const CheckInLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCheckInLicenseAsyncHelper( this, request, handler, context ); } );
}

CheckoutBorrowLicenseOutcome LicenseManagerClient::CheckoutBorrowLicense(const CheckoutBorrowLicenseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CheckoutBorrowLicenseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckoutBorrowLicenseOutcomeCallable LicenseManagerClient::CheckoutBorrowLicenseCallable(const CheckoutBorrowLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckoutBorrowLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckoutBorrowLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCheckoutBorrowLicenseAsyncHelper(LicenseManagerClient const * const clientThis, const CheckoutBorrowLicenseRequest& request, const CheckoutBorrowLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CheckoutBorrowLicense(request), context);
}

void LicenseManagerClient::CheckoutBorrowLicenseAsync(const CheckoutBorrowLicenseRequest& request, const CheckoutBorrowLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCheckoutBorrowLicenseAsyncHelper( this, request, handler, context ); } );
}

CheckoutLicenseOutcome LicenseManagerClient::CheckoutLicense(const CheckoutLicenseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CheckoutLicenseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckoutLicenseOutcomeCallable LicenseManagerClient::CheckoutLicenseCallable(const CheckoutLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckoutLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckoutLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCheckoutLicenseAsyncHelper(LicenseManagerClient const * const clientThis, const CheckoutLicenseRequest& request, const CheckoutLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CheckoutLicense(request), context);
}

void LicenseManagerClient::CheckoutLicenseAsync(const CheckoutLicenseRequest& request, const CheckoutLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCheckoutLicenseAsyncHelper( this, request, handler, context ); } );
}

CreateGrantOutcome LicenseManagerClient::CreateGrant(const CreateGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGrantOutcomeCallable LicenseManagerClient::CreateGrantCallable(const CreateGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCreateGrantAsyncHelper(LicenseManagerClient const * const clientThis, const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGrant(request), context);
}

void LicenseManagerClient::CreateGrantAsync(const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCreateGrantAsyncHelper( this, request, handler, context ); } );
}

CreateGrantVersionOutcome LicenseManagerClient::CreateGrantVersion(const CreateGrantVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGrantVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGrantVersionOutcomeCallable LicenseManagerClient::CreateGrantVersionCallable(const CreateGrantVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGrantVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGrantVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCreateGrantVersionAsyncHelper(LicenseManagerClient const * const clientThis, const CreateGrantVersionRequest& request, const CreateGrantVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGrantVersion(request), context);
}

void LicenseManagerClient::CreateGrantVersionAsync(const CreateGrantVersionRequest& request, const CreateGrantVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCreateGrantVersionAsyncHelper( this, request, handler, context ); } );
}

CreateLicenseOutcome LicenseManagerClient::CreateLicense(const CreateLicenseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLicenseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseOutcomeCallable LicenseManagerClient::CreateLicenseCallable(const CreateLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCreateLicenseAsyncHelper(LicenseManagerClient const * const clientThis, const CreateLicenseRequest& request, const CreateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLicense(request), context);
}

void LicenseManagerClient::CreateLicenseAsync(const CreateLicenseRequest& request, const CreateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCreateLicenseAsyncHelper( this, request, handler, context ); } );
}

CreateLicenseConfigurationOutcome LicenseManagerClient::CreateLicenseConfiguration(const CreateLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLicenseConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseConfigurationOutcomeCallable LicenseManagerClient::CreateLicenseConfigurationCallable(const CreateLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCreateLicenseConfigurationAsyncHelper(LicenseManagerClient const * const clientThis, const CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLicenseConfiguration(request), context);
}

void LicenseManagerClient::CreateLicenseConfigurationAsync(const CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCreateLicenseConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateLicenseConversionTaskForResourceOutcome LicenseManagerClient::CreateLicenseConversionTaskForResource(const CreateLicenseConversionTaskForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLicenseConversionTaskForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseConversionTaskForResourceOutcomeCallable LicenseManagerClient::CreateLicenseConversionTaskForResourceCallable(const CreateLicenseConversionTaskForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseConversionTaskForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseConversionTaskForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCreateLicenseConversionTaskForResourceAsyncHelper(LicenseManagerClient const * const clientThis, const CreateLicenseConversionTaskForResourceRequest& request, const CreateLicenseConversionTaskForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLicenseConversionTaskForResource(request), context);
}

void LicenseManagerClient::CreateLicenseConversionTaskForResourceAsync(const CreateLicenseConversionTaskForResourceRequest& request, const CreateLicenseConversionTaskForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCreateLicenseConversionTaskForResourceAsyncHelper( this, request, handler, context ); } );
}

CreateLicenseManagerReportGeneratorOutcome LicenseManagerClient::CreateLicenseManagerReportGenerator(const CreateLicenseManagerReportGeneratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLicenseManagerReportGeneratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseManagerReportGeneratorOutcomeCallable LicenseManagerClient::CreateLicenseManagerReportGeneratorCallable(const CreateLicenseManagerReportGeneratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseManagerReportGeneratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseManagerReportGenerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCreateLicenseManagerReportGeneratorAsyncHelper(LicenseManagerClient const * const clientThis, const CreateLicenseManagerReportGeneratorRequest& request, const CreateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLicenseManagerReportGenerator(request), context);
}

void LicenseManagerClient::CreateLicenseManagerReportGeneratorAsync(const CreateLicenseManagerReportGeneratorRequest& request, const CreateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCreateLicenseManagerReportGeneratorAsyncHelper( this, request, handler, context ); } );
}

CreateLicenseVersionOutcome LicenseManagerClient::CreateLicenseVersion(const CreateLicenseVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLicenseVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLicenseVersionOutcomeCallable LicenseManagerClient::CreateLicenseVersionCallable(const CreateLicenseVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCreateLicenseVersionAsyncHelper(LicenseManagerClient const * const clientThis, const CreateLicenseVersionRequest& request, const CreateLicenseVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLicenseVersion(request), context);
}

void LicenseManagerClient::CreateLicenseVersionAsync(const CreateLicenseVersionRequest& request, const CreateLicenseVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCreateLicenseVersionAsyncHelper( this, request, handler, context ); } );
}

CreateTokenOutcome LicenseManagerClient::CreateToken(const CreateTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTokenOutcomeCallable LicenseManagerClient::CreateTokenCallable(const CreateTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientCreateTokenAsyncHelper(LicenseManagerClient const * const clientThis, const CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateToken(request), context);
}

void LicenseManagerClient::CreateTokenAsync(const CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientCreateTokenAsyncHelper( this, request, handler, context ); } );
}

DeleteGrantOutcome LicenseManagerClient::DeleteGrant(const DeleteGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGrantOutcomeCallable LicenseManagerClient::DeleteGrantCallable(const DeleteGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientDeleteGrantAsyncHelper(LicenseManagerClient const * const clientThis, const DeleteGrantRequest& request, const DeleteGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGrant(request), context);
}

void LicenseManagerClient::DeleteGrantAsync(const DeleteGrantRequest& request, const DeleteGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientDeleteGrantAsyncHelper( this, request, handler, context ); } );
}

DeleteLicenseOutcome LicenseManagerClient::DeleteLicense(const DeleteLicenseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLicenseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLicenseOutcomeCallable LicenseManagerClient::DeleteLicenseCallable(const DeleteLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientDeleteLicenseAsyncHelper(LicenseManagerClient const * const clientThis, const DeleteLicenseRequest& request, const DeleteLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLicense(request), context);
}

void LicenseManagerClient::DeleteLicenseAsync(const DeleteLicenseRequest& request, const DeleteLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientDeleteLicenseAsyncHelper( this, request, handler, context ); } );
}

DeleteLicenseConfigurationOutcome LicenseManagerClient::DeleteLicenseConfiguration(const DeleteLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLicenseConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLicenseConfigurationOutcomeCallable LicenseManagerClient::DeleteLicenseConfigurationCallable(const DeleteLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientDeleteLicenseConfigurationAsyncHelper(LicenseManagerClient const * const clientThis, const DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLicenseConfiguration(request), context);
}

void LicenseManagerClient::DeleteLicenseConfigurationAsync(const DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientDeleteLicenseConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteLicenseManagerReportGeneratorOutcome LicenseManagerClient::DeleteLicenseManagerReportGenerator(const DeleteLicenseManagerReportGeneratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLicenseManagerReportGeneratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLicenseManagerReportGeneratorOutcomeCallable LicenseManagerClient::DeleteLicenseManagerReportGeneratorCallable(const DeleteLicenseManagerReportGeneratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLicenseManagerReportGeneratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLicenseManagerReportGenerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientDeleteLicenseManagerReportGeneratorAsyncHelper(LicenseManagerClient const * const clientThis, const DeleteLicenseManagerReportGeneratorRequest& request, const DeleteLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLicenseManagerReportGenerator(request), context);
}

void LicenseManagerClient::DeleteLicenseManagerReportGeneratorAsync(const DeleteLicenseManagerReportGeneratorRequest& request, const DeleteLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientDeleteLicenseManagerReportGeneratorAsyncHelper( this, request, handler, context ); } );
}

DeleteTokenOutcome LicenseManagerClient::DeleteToken(const DeleteTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTokenOutcomeCallable LicenseManagerClient::DeleteTokenCallable(const DeleteTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientDeleteTokenAsyncHelper(LicenseManagerClient const * const clientThis, const DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteToken(request), context);
}

void LicenseManagerClient::DeleteTokenAsync(const DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientDeleteTokenAsyncHelper( this, request, handler, context ); } );
}

ExtendLicenseConsumptionOutcome LicenseManagerClient::ExtendLicenseConsumption(const ExtendLicenseConsumptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExtendLicenseConsumptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExtendLicenseConsumptionOutcomeCallable LicenseManagerClient::ExtendLicenseConsumptionCallable(const ExtendLicenseConsumptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExtendLicenseConsumptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExtendLicenseConsumption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientExtendLicenseConsumptionAsyncHelper(LicenseManagerClient const * const clientThis, const ExtendLicenseConsumptionRequest& request, const ExtendLicenseConsumptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExtendLicenseConsumption(request), context);
}

void LicenseManagerClient::ExtendLicenseConsumptionAsync(const ExtendLicenseConsumptionRequest& request, const ExtendLicenseConsumptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientExtendLicenseConsumptionAsyncHelper( this, request, handler, context ); } );
}

GetAccessTokenOutcome LicenseManagerClient::GetAccessToken(const GetAccessTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccessTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccessTokenOutcomeCallable LicenseManagerClient::GetAccessTokenCallable(const GetAccessTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientGetAccessTokenAsyncHelper(LicenseManagerClient const * const clientThis, const GetAccessTokenRequest& request, const GetAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccessToken(request), context);
}

void LicenseManagerClient::GetAccessTokenAsync(const GetAccessTokenRequest& request, const GetAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientGetAccessTokenAsyncHelper( this, request, handler, context ); } );
}

GetGrantOutcome LicenseManagerClient::GetGrant(const GetGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGrantOutcomeCallable LicenseManagerClient::GetGrantCallable(const GetGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientGetGrantAsyncHelper(LicenseManagerClient const * const clientThis, const GetGrantRequest& request, const GetGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGrant(request), context);
}

void LicenseManagerClient::GetGrantAsync(const GetGrantRequest& request, const GetGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientGetGrantAsyncHelper( this, request, handler, context ); } );
}

GetLicenseOutcome LicenseManagerClient::GetLicense(const GetLicenseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLicenseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseOutcomeCallable LicenseManagerClient::GetLicenseCallable(const GetLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientGetLicenseAsyncHelper(LicenseManagerClient const * const clientThis, const GetLicenseRequest& request, const GetLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLicense(request), context);
}

void LicenseManagerClient::GetLicenseAsync(const GetLicenseRequest& request, const GetLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientGetLicenseAsyncHelper( this, request, handler, context ); } );
}

GetLicenseConfigurationOutcome LicenseManagerClient::GetLicenseConfiguration(const GetLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLicenseConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseConfigurationOutcomeCallable LicenseManagerClient::GetLicenseConfigurationCallable(const GetLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientGetLicenseConfigurationAsyncHelper(LicenseManagerClient const * const clientThis, const GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLicenseConfiguration(request), context);
}

void LicenseManagerClient::GetLicenseConfigurationAsync(const GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientGetLicenseConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetLicenseConversionTaskOutcome LicenseManagerClient::GetLicenseConversionTask(const GetLicenseConversionTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLicenseConversionTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseConversionTaskOutcomeCallable LicenseManagerClient::GetLicenseConversionTaskCallable(const GetLicenseConversionTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseConversionTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseConversionTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientGetLicenseConversionTaskAsyncHelper(LicenseManagerClient const * const clientThis, const GetLicenseConversionTaskRequest& request, const GetLicenseConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLicenseConversionTask(request), context);
}

void LicenseManagerClient::GetLicenseConversionTaskAsync(const GetLicenseConversionTaskRequest& request, const GetLicenseConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientGetLicenseConversionTaskAsyncHelper( this, request, handler, context ); } );
}

GetLicenseManagerReportGeneratorOutcome LicenseManagerClient::GetLicenseManagerReportGenerator(const GetLicenseManagerReportGeneratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLicenseManagerReportGeneratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseManagerReportGeneratorOutcomeCallable LicenseManagerClient::GetLicenseManagerReportGeneratorCallable(const GetLicenseManagerReportGeneratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseManagerReportGeneratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseManagerReportGenerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientGetLicenseManagerReportGeneratorAsyncHelper(LicenseManagerClient const * const clientThis, const GetLicenseManagerReportGeneratorRequest& request, const GetLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLicenseManagerReportGenerator(request), context);
}

void LicenseManagerClient::GetLicenseManagerReportGeneratorAsync(const GetLicenseManagerReportGeneratorRequest& request, const GetLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientGetLicenseManagerReportGeneratorAsyncHelper( this, request, handler, context ); } );
}

GetLicenseUsageOutcome LicenseManagerClient::GetLicenseUsage(const GetLicenseUsageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLicenseUsageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLicenseUsageOutcomeCallable LicenseManagerClient::GetLicenseUsageCallable(const GetLicenseUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientGetLicenseUsageAsyncHelper(LicenseManagerClient const * const clientThis, const GetLicenseUsageRequest& request, const GetLicenseUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLicenseUsage(request), context);
}

void LicenseManagerClient::GetLicenseUsageAsync(const GetLicenseUsageRequest& request, const GetLicenseUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientGetLicenseUsageAsyncHelper( this, request, handler, context ); } );
}

GetServiceSettingsOutcome LicenseManagerClient::GetServiceSettings(const GetServiceSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceSettingsOutcomeCallable LicenseManagerClient::GetServiceSettingsCallable(const GetServiceSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientGetServiceSettingsAsyncHelper(LicenseManagerClient const * const clientThis, const GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServiceSettings(request), context);
}

void LicenseManagerClient::GetServiceSettingsAsync(const GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientGetServiceSettingsAsyncHelper( this, request, handler, context ); } );
}

ListAssociationsForLicenseConfigurationOutcome LicenseManagerClient::ListAssociationsForLicenseConfiguration(const ListAssociationsForLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssociationsForLicenseConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociationsForLicenseConfigurationOutcomeCallable LicenseManagerClient::ListAssociationsForLicenseConfigurationCallable(const ListAssociationsForLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationsForLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociationsForLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListAssociationsForLicenseConfigurationAsyncHelper(LicenseManagerClient const * const clientThis, const ListAssociationsForLicenseConfigurationRequest& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociationsForLicenseConfiguration(request), context);
}

void LicenseManagerClient::ListAssociationsForLicenseConfigurationAsync(const ListAssociationsForLicenseConfigurationRequest& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListAssociationsForLicenseConfigurationAsyncHelper( this, request, handler, context ); } );
}

ListDistributedGrantsOutcome LicenseManagerClient::ListDistributedGrants(const ListDistributedGrantsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDistributedGrantsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDistributedGrantsOutcomeCallable LicenseManagerClient::ListDistributedGrantsCallable(const ListDistributedGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributedGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributedGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListDistributedGrantsAsyncHelper(LicenseManagerClient const * const clientThis, const ListDistributedGrantsRequest& request, const ListDistributedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDistributedGrants(request), context);
}

void LicenseManagerClient::ListDistributedGrantsAsync(const ListDistributedGrantsRequest& request, const ListDistributedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListDistributedGrantsAsyncHelper( this, request, handler, context ); } );
}

ListFailuresForLicenseConfigurationOperationsOutcome LicenseManagerClient::ListFailuresForLicenseConfigurationOperations(const ListFailuresForLicenseConfigurationOperationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFailuresForLicenseConfigurationOperationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFailuresForLicenseConfigurationOperationsOutcomeCallable LicenseManagerClient::ListFailuresForLicenseConfigurationOperationsCallable(const ListFailuresForLicenseConfigurationOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFailuresForLicenseConfigurationOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFailuresForLicenseConfigurationOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListFailuresForLicenseConfigurationOperationsAsyncHelper(LicenseManagerClient const * const clientThis, const ListFailuresForLicenseConfigurationOperationsRequest& request, const ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFailuresForLicenseConfigurationOperations(request), context);
}

void LicenseManagerClient::ListFailuresForLicenseConfigurationOperationsAsync(const ListFailuresForLicenseConfigurationOperationsRequest& request, const ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListFailuresForLicenseConfigurationOperationsAsyncHelper( this, request, handler, context ); } );
}

ListLicenseConfigurationsOutcome LicenseManagerClient::ListLicenseConfigurations(const ListLicenseConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLicenseConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseConfigurationsOutcomeCallable LicenseManagerClient::ListLicenseConfigurationsCallable(const ListLicenseConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListLicenseConfigurationsAsyncHelper(LicenseManagerClient const * const clientThis, const ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLicenseConfigurations(request), context);
}

void LicenseManagerClient::ListLicenseConfigurationsAsync(const ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListLicenseConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListLicenseConversionTasksOutcome LicenseManagerClient::ListLicenseConversionTasks(const ListLicenseConversionTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLicenseConversionTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseConversionTasksOutcomeCallable LicenseManagerClient::ListLicenseConversionTasksCallable(const ListLicenseConversionTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseConversionTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseConversionTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListLicenseConversionTasksAsyncHelper(LicenseManagerClient const * const clientThis, const ListLicenseConversionTasksRequest& request, const ListLicenseConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLicenseConversionTasks(request), context);
}

void LicenseManagerClient::ListLicenseConversionTasksAsync(const ListLicenseConversionTasksRequest& request, const ListLicenseConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListLicenseConversionTasksAsyncHelper( this, request, handler, context ); } );
}

ListLicenseManagerReportGeneratorsOutcome LicenseManagerClient::ListLicenseManagerReportGenerators(const ListLicenseManagerReportGeneratorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLicenseManagerReportGeneratorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseManagerReportGeneratorsOutcomeCallable LicenseManagerClient::ListLicenseManagerReportGeneratorsCallable(const ListLicenseManagerReportGeneratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseManagerReportGeneratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseManagerReportGenerators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListLicenseManagerReportGeneratorsAsyncHelper(LicenseManagerClient const * const clientThis, const ListLicenseManagerReportGeneratorsRequest& request, const ListLicenseManagerReportGeneratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLicenseManagerReportGenerators(request), context);
}

void LicenseManagerClient::ListLicenseManagerReportGeneratorsAsync(const ListLicenseManagerReportGeneratorsRequest& request, const ListLicenseManagerReportGeneratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListLicenseManagerReportGeneratorsAsyncHelper( this, request, handler, context ); } );
}

ListLicenseSpecificationsForResourceOutcome LicenseManagerClient::ListLicenseSpecificationsForResource(const ListLicenseSpecificationsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLicenseSpecificationsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseSpecificationsForResourceOutcomeCallable LicenseManagerClient::ListLicenseSpecificationsForResourceCallable(const ListLicenseSpecificationsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseSpecificationsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseSpecificationsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListLicenseSpecificationsForResourceAsyncHelper(LicenseManagerClient const * const clientThis, const ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLicenseSpecificationsForResource(request), context);
}

void LicenseManagerClient::ListLicenseSpecificationsForResourceAsync(const ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListLicenseSpecificationsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListLicenseVersionsOutcome LicenseManagerClient::ListLicenseVersions(const ListLicenseVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLicenseVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicenseVersionsOutcomeCallable LicenseManagerClient::ListLicenseVersionsCallable(const ListLicenseVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListLicenseVersionsAsyncHelper(LicenseManagerClient const * const clientThis, const ListLicenseVersionsRequest& request, const ListLicenseVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLicenseVersions(request), context);
}

void LicenseManagerClient::ListLicenseVersionsAsync(const ListLicenseVersionsRequest& request, const ListLicenseVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListLicenseVersionsAsyncHelper( this, request, handler, context ); } );
}

ListLicensesOutcome LicenseManagerClient::ListLicenses(const ListLicensesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLicensesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLicensesOutcomeCallable LicenseManagerClient::ListLicensesCallable(const ListLicensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListLicensesAsyncHelper(LicenseManagerClient const * const clientThis, const ListLicensesRequest& request, const ListLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLicenses(request), context);
}

void LicenseManagerClient::ListLicensesAsync(const ListLicensesRequest& request, const ListLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListLicensesAsyncHelper( this, request, handler, context ); } );
}

ListReceivedGrantsOutcome LicenseManagerClient::ListReceivedGrants(const ListReceivedGrantsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReceivedGrantsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReceivedGrantsOutcomeCallable LicenseManagerClient::ListReceivedGrantsCallable(const ListReceivedGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceivedGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceivedGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListReceivedGrantsAsyncHelper(LicenseManagerClient const * const clientThis, const ListReceivedGrantsRequest& request, const ListReceivedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReceivedGrants(request), context);
}

void LicenseManagerClient::ListReceivedGrantsAsync(const ListReceivedGrantsRequest& request, const ListReceivedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListReceivedGrantsAsyncHelper( this, request, handler, context ); } );
}

ListReceivedLicensesOutcome LicenseManagerClient::ListReceivedLicenses(const ListReceivedLicensesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReceivedLicensesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReceivedLicensesOutcomeCallable LicenseManagerClient::ListReceivedLicensesCallable(const ListReceivedLicensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceivedLicensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceivedLicenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListReceivedLicensesAsyncHelper(LicenseManagerClient const * const clientThis, const ListReceivedLicensesRequest& request, const ListReceivedLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReceivedLicenses(request), context);
}

void LicenseManagerClient::ListReceivedLicensesAsync(const ListReceivedLicensesRequest& request, const ListReceivedLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListReceivedLicensesAsyncHelper( this, request, handler, context ); } );
}

ListResourceInventoryOutcome LicenseManagerClient::ListResourceInventory(const ListResourceInventoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourceInventoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceInventoryOutcomeCallable LicenseManagerClient::ListResourceInventoryCallable(const ListResourceInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListResourceInventoryAsyncHelper(LicenseManagerClient const * const clientThis, const ListResourceInventoryRequest& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourceInventory(request), context);
}

void LicenseManagerClient::ListResourceInventoryAsync(const ListResourceInventoryRequest& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListResourceInventoryAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome LicenseManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable LicenseManagerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListTagsForResourceAsyncHelper(LicenseManagerClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void LicenseManagerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTokensOutcome LicenseManagerClient::ListTokens(const ListTokensRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTokensOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTokensOutcomeCallable LicenseManagerClient::ListTokensCallable(const ListTokensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTokensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTokens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListTokensAsyncHelper(LicenseManagerClient const * const clientThis, const ListTokensRequest& request, const ListTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTokens(request), context);
}

void LicenseManagerClient::ListTokensAsync(const ListTokensRequest& request, const ListTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListTokensAsyncHelper( this, request, handler, context ); } );
}

ListUsageForLicenseConfigurationOutcome LicenseManagerClient::ListUsageForLicenseConfiguration(const ListUsageForLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUsageForLicenseConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsageForLicenseConfigurationOutcomeCallable LicenseManagerClient::ListUsageForLicenseConfigurationCallable(const ListUsageForLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsageForLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsageForLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientListUsageForLicenseConfigurationAsyncHelper(LicenseManagerClient const * const clientThis, const ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUsageForLicenseConfiguration(request), context);
}

void LicenseManagerClient::ListUsageForLicenseConfigurationAsync(const ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientListUsageForLicenseConfigurationAsyncHelper( this, request, handler, context ); } );
}

RejectGrantOutcome LicenseManagerClient::RejectGrant(const RejectGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RejectGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectGrantOutcomeCallable LicenseManagerClient::RejectGrantCallable(const RejectGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientRejectGrantAsyncHelper(LicenseManagerClient const * const clientThis, const RejectGrantRequest& request, const RejectGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectGrant(request), context);
}

void LicenseManagerClient::RejectGrantAsync(const RejectGrantRequest& request, const RejectGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientRejectGrantAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome LicenseManagerClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LicenseManagerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientTagResourceAsyncHelper(LicenseManagerClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void LicenseManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome LicenseManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LicenseManagerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientUntagResourceAsyncHelper(LicenseManagerClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void LicenseManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateLicenseConfigurationOutcome LicenseManagerClient::UpdateLicenseConfiguration(const UpdateLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLicenseConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLicenseConfigurationOutcomeCallable LicenseManagerClient::UpdateLicenseConfigurationCallable(const UpdateLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientUpdateLicenseConfigurationAsyncHelper(LicenseManagerClient const * const clientThis, const UpdateLicenseConfigurationRequest& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLicenseConfiguration(request), context);
}

void LicenseManagerClient::UpdateLicenseConfigurationAsync(const UpdateLicenseConfigurationRequest& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientUpdateLicenseConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateLicenseManagerReportGeneratorOutcome LicenseManagerClient::UpdateLicenseManagerReportGenerator(const UpdateLicenseManagerReportGeneratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLicenseManagerReportGeneratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLicenseManagerReportGeneratorOutcomeCallable LicenseManagerClient::UpdateLicenseManagerReportGeneratorCallable(const UpdateLicenseManagerReportGeneratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLicenseManagerReportGeneratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLicenseManagerReportGenerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientUpdateLicenseManagerReportGeneratorAsyncHelper(LicenseManagerClient const * const clientThis, const UpdateLicenseManagerReportGeneratorRequest& request, const UpdateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLicenseManagerReportGenerator(request), context);
}

void LicenseManagerClient::UpdateLicenseManagerReportGeneratorAsync(const UpdateLicenseManagerReportGeneratorRequest& request, const UpdateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientUpdateLicenseManagerReportGeneratorAsyncHelper( this, request, handler, context ); } );
}

UpdateLicenseSpecificationsForResourceOutcome LicenseManagerClient::UpdateLicenseSpecificationsForResource(const UpdateLicenseSpecificationsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLicenseSpecificationsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLicenseSpecificationsForResourceOutcomeCallable LicenseManagerClient::UpdateLicenseSpecificationsForResourceCallable(const UpdateLicenseSpecificationsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLicenseSpecificationsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLicenseSpecificationsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientUpdateLicenseSpecificationsForResourceAsyncHelper(LicenseManagerClient const * const clientThis, const UpdateLicenseSpecificationsForResourceRequest& request, const UpdateLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLicenseSpecificationsForResource(request), context);
}

void LicenseManagerClient::UpdateLicenseSpecificationsForResourceAsync(const UpdateLicenseSpecificationsForResourceRequest& request, const UpdateLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientUpdateLicenseSpecificationsForResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateServiceSettingsOutcome LicenseManagerClient::UpdateServiceSettings(const UpdateServiceSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceSettingsOutcomeCallable LicenseManagerClient::UpdateServiceSettingsCallable(const UpdateServiceSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClientUpdateServiceSettingsAsyncHelper(LicenseManagerClient const * const clientThis, const UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServiceSettings(request), context);
}

void LicenseManagerClient::UpdateServiceSettingsAsync(const UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LicenseManagerClientUpdateServiceSettingsAsyncHelper( this, request, handler, context ); } );
}

