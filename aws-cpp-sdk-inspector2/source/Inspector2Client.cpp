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

#include <aws/inspector2/Inspector2Client.h>
#include <aws/inspector2/Inspector2Endpoint.h>
#include <aws/inspector2/Inspector2ErrorMarshaller.h>
#include <aws/inspector2/model/AssociateMemberRequest.h>
#include <aws/inspector2/model/BatchGetAccountStatusRequest.h>
#include <aws/inspector2/model/BatchGetFreeTrialInfoRequest.h>
#include <aws/inspector2/model/CancelFindingsReportRequest.h>
#include <aws/inspector2/model/CreateFilterRequest.h>
#include <aws/inspector2/model/CreateFindingsReportRequest.h>
#include <aws/inspector2/model/DeleteFilterRequest.h>
#include <aws/inspector2/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/inspector2/model/DisableRequest.h>
#include <aws/inspector2/model/DisableDelegatedAdminAccountRequest.h>
#include <aws/inspector2/model/DisassociateMemberRequest.h>
#include <aws/inspector2/model/EnableRequest.h>
#include <aws/inspector2/model/EnableDelegatedAdminAccountRequest.h>
#include <aws/inspector2/model/GetConfigurationRequest.h>
#include <aws/inspector2/model/GetDelegatedAdminAccountRequest.h>
#include <aws/inspector2/model/GetFindingsReportStatusRequest.h>
#include <aws/inspector2/model/GetMemberRequest.h>
#include <aws/inspector2/model/ListAccountPermissionsRequest.h>
#include <aws/inspector2/model/ListCoverageRequest.h>
#include <aws/inspector2/model/ListCoverageStatisticsRequest.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsRequest.h>
#include <aws/inspector2/model/ListFiltersRequest.h>
#include <aws/inspector2/model/ListFindingAggregationsRequest.h>
#include <aws/inspector2/model/ListFindingsRequest.h>
#include <aws/inspector2/model/ListMembersRequest.h>
#include <aws/inspector2/model/ListTagsForResourceRequest.h>
#include <aws/inspector2/model/ListUsageTotalsRequest.h>
#include <aws/inspector2/model/TagResourceRequest.h>
#include <aws/inspector2/model/UntagResourceRequest.h>
#include <aws/inspector2/model/UpdateConfigurationRequest.h>
#include <aws/inspector2/model/UpdateFilterRequest.h>
#include <aws/inspector2/model/UpdateOrganizationConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Inspector2;
using namespace Aws::Inspector2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "inspector2";
static const char* ALLOCATION_TAG = "Inspector2Client";

Inspector2Client::Inspector2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Inspector2Client::Inspector2Client(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Inspector2Client::Inspector2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Inspector2Client::~Inspector2Client()
{
}

void Inspector2Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Inspector2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + Inspector2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void Inspector2Client::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateMemberOutcome Inspector2Client::AssociateMember(const AssociateMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members/associate");
  return AssociateMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateMemberOutcomeCallable Inspector2Client::AssociateMemberCallable(const AssociateMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientAssociateMemberAsyncHelper(Inspector2Client const * const clientThis, const AssociateMemberRequest& request, const AssociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateMember(request), context);
}

void Inspector2Client::AssociateMemberAsync(const AssociateMemberRequest& request, const AssociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientAssociateMemberAsyncHelper( this, request, handler, context ); } );
}

BatchGetAccountStatusOutcome Inspector2Client::BatchGetAccountStatus(const BatchGetAccountStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/status/batch/get");
  return BatchGetAccountStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetAccountStatusOutcomeCallable Inspector2Client::BatchGetAccountStatusCallable(const BatchGetAccountStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetAccountStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetAccountStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientBatchGetAccountStatusAsyncHelper(Inspector2Client const * const clientThis, const BatchGetAccountStatusRequest& request, const BatchGetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetAccountStatus(request), context);
}

void Inspector2Client::BatchGetAccountStatusAsync(const BatchGetAccountStatusRequest& request, const BatchGetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientBatchGetAccountStatusAsyncHelper( this, request, handler, context ); } );
}

BatchGetFreeTrialInfoOutcome Inspector2Client::BatchGetFreeTrialInfo(const BatchGetFreeTrialInfoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/freetrialinfo/batchget");
  return BatchGetFreeTrialInfoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetFreeTrialInfoOutcomeCallable Inspector2Client::BatchGetFreeTrialInfoCallable(const BatchGetFreeTrialInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetFreeTrialInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetFreeTrialInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientBatchGetFreeTrialInfoAsyncHelper(Inspector2Client const * const clientThis, const BatchGetFreeTrialInfoRequest& request, const BatchGetFreeTrialInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetFreeTrialInfo(request), context);
}

void Inspector2Client::BatchGetFreeTrialInfoAsync(const BatchGetFreeTrialInfoRequest& request, const BatchGetFreeTrialInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientBatchGetFreeTrialInfoAsyncHelper( this, request, handler, context ); } );
}

CancelFindingsReportOutcome Inspector2Client::CancelFindingsReport(const CancelFindingsReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reporting/cancel");
  return CancelFindingsReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelFindingsReportOutcomeCallable Inspector2Client::CancelFindingsReportCallable(const CancelFindingsReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelFindingsReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelFindingsReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientCancelFindingsReportAsyncHelper(Inspector2Client const * const clientThis, const CancelFindingsReportRequest& request, const CancelFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelFindingsReport(request), context);
}

void Inspector2Client::CancelFindingsReportAsync(const CancelFindingsReportRequest& request, const CancelFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientCancelFindingsReportAsyncHelper( this, request, handler, context ); } );
}

CreateFilterOutcome Inspector2Client::CreateFilter(const CreateFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/filters/create");
  return CreateFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFilterOutcomeCallable Inspector2Client::CreateFilterCallable(const CreateFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientCreateFilterAsyncHelper(Inspector2Client const * const clientThis, const CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFilter(request), context);
}

void Inspector2Client::CreateFilterAsync(const CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientCreateFilterAsyncHelper( this, request, handler, context ); } );
}

CreateFindingsReportOutcome Inspector2Client::CreateFindingsReport(const CreateFindingsReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reporting/create");
  return CreateFindingsReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFindingsReportOutcomeCallable Inspector2Client::CreateFindingsReportCallable(const CreateFindingsReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFindingsReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFindingsReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientCreateFindingsReportAsyncHelper(Inspector2Client const * const clientThis, const CreateFindingsReportRequest& request, const CreateFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFindingsReport(request), context);
}

void Inspector2Client::CreateFindingsReportAsync(const CreateFindingsReportRequest& request, const CreateFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientCreateFindingsReportAsyncHelper( this, request, handler, context ); } );
}

DeleteFilterOutcome Inspector2Client::DeleteFilter(const DeleteFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/filters/delete");
  return DeleteFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFilterOutcomeCallable Inspector2Client::DeleteFilterCallable(const DeleteFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientDeleteFilterAsyncHelper(Inspector2Client const * const clientThis, const DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFilter(request), context);
}

void Inspector2Client::DeleteFilterAsync(const DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientDeleteFilterAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationConfigurationOutcome Inspector2Client::DescribeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organizationconfiguration/describe");
  return DescribeOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigurationOutcomeCallable Inspector2Client::DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientDescribeOrganizationConfigurationAsyncHelper(Inspector2Client const * const clientThis, const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationConfiguration(request), context);
}

void Inspector2Client::DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientDescribeOrganizationConfigurationAsyncHelper( this, request, handler, context ); } );
}

DisableOutcome Inspector2Client::Disable(const DisableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/disable");
  return DisableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableOutcomeCallable Inspector2Client::DisableCallable(const DisableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Disable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientDisableAsyncHelper(Inspector2Client const * const clientThis, const DisableRequest& request, const DisableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Disable(request), context);
}

void Inspector2Client::DisableAsync(const DisableRequest& request, const DisableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientDisableAsyncHelper( this, request, handler, context ); } );
}

DisableDelegatedAdminAccountOutcome Inspector2Client::DisableDelegatedAdminAccount(const DisableDelegatedAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delegatedadminaccounts/disable");
  return DisableDelegatedAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableDelegatedAdminAccountOutcomeCallable Inspector2Client::DisableDelegatedAdminAccountCallable(const DisableDelegatedAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableDelegatedAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableDelegatedAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientDisableDelegatedAdminAccountAsyncHelper(Inspector2Client const * const clientThis, const DisableDelegatedAdminAccountRequest& request, const DisableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableDelegatedAdminAccount(request), context);
}

void Inspector2Client::DisableDelegatedAdminAccountAsync(const DisableDelegatedAdminAccountRequest& request, const DisableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientDisableDelegatedAdminAccountAsyncHelper( this, request, handler, context ); } );
}

DisassociateMemberOutcome Inspector2Client::DisassociateMember(const DisassociateMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members/disassociate");
  return DisassociateMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMemberOutcomeCallable Inspector2Client::DisassociateMemberCallable(const DisassociateMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientDisassociateMemberAsyncHelper(Inspector2Client const * const clientThis, const DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateMember(request), context);
}

void Inspector2Client::DisassociateMemberAsync(const DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientDisassociateMemberAsyncHelper( this, request, handler, context ); } );
}

EnableOutcome Inspector2Client::Enable(const EnableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/enable");
  return EnableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableOutcomeCallable Inspector2Client::EnableCallable(const EnableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Enable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientEnableAsyncHelper(Inspector2Client const * const clientThis, const EnableRequest& request, const EnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Enable(request), context);
}

void Inspector2Client::EnableAsync(const EnableRequest& request, const EnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientEnableAsyncHelper( this, request, handler, context ); } );
}

EnableDelegatedAdminAccountOutcome Inspector2Client::EnableDelegatedAdminAccount(const EnableDelegatedAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delegatedadminaccounts/enable");
  return EnableDelegatedAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableDelegatedAdminAccountOutcomeCallable Inspector2Client::EnableDelegatedAdminAccountCallable(const EnableDelegatedAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableDelegatedAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableDelegatedAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientEnableDelegatedAdminAccountAsyncHelper(Inspector2Client const * const clientThis, const EnableDelegatedAdminAccountRequest& request, const EnableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableDelegatedAdminAccount(request), context);
}

void Inspector2Client::EnableDelegatedAdminAccountAsync(const EnableDelegatedAdminAccountRequest& request, const EnableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientEnableDelegatedAdminAccountAsyncHelper( this, request, handler, context ); } );
}

GetConfigurationOutcome Inspector2Client::GetConfiguration(const GetConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/configuration/get");
  return GetConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationOutcomeCallable Inspector2Client::GetConfigurationCallable(const GetConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientGetConfigurationAsyncHelper(Inspector2Client const * const clientThis, const GetConfigurationRequest& request, const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConfiguration(request), context);
}

void Inspector2Client::GetConfigurationAsync(const GetConfigurationRequest& request, const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientGetConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetDelegatedAdminAccountOutcome Inspector2Client::GetDelegatedAdminAccount(const GetDelegatedAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delegatedadminaccounts/get");
  return GetDelegatedAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDelegatedAdminAccountOutcomeCallable Inspector2Client::GetDelegatedAdminAccountCallable(const GetDelegatedAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDelegatedAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDelegatedAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientGetDelegatedAdminAccountAsyncHelper(Inspector2Client const * const clientThis, const GetDelegatedAdminAccountRequest& request, const GetDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDelegatedAdminAccount(request), context);
}

void Inspector2Client::GetDelegatedAdminAccountAsync(const GetDelegatedAdminAccountRequest& request, const GetDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientGetDelegatedAdminAccountAsyncHelper( this, request, handler, context ); } );
}

GetFindingsReportStatusOutcome Inspector2Client::GetFindingsReportStatus(const GetFindingsReportStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reporting/status/get");
  return GetFindingsReportStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsReportStatusOutcomeCallable Inspector2Client::GetFindingsReportStatusCallable(const GetFindingsReportStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsReportStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingsReportStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientGetFindingsReportStatusAsyncHelper(Inspector2Client const * const clientThis, const GetFindingsReportStatusRequest& request, const GetFindingsReportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFindingsReportStatus(request), context);
}

void Inspector2Client::GetFindingsReportStatusAsync(const GetFindingsReportStatusRequest& request, const GetFindingsReportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientGetFindingsReportStatusAsyncHelper( this, request, handler, context ); } );
}

GetMemberOutcome Inspector2Client::GetMember(const GetMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members/get");
  return GetMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMemberOutcomeCallable Inspector2Client::GetMemberCallable(const GetMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientGetMemberAsyncHelper(Inspector2Client const * const clientThis, const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMember(request), context);
}

void Inspector2Client::GetMemberAsync(const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientGetMemberAsyncHelper( this, request, handler, context ); } );
}

ListAccountPermissionsOutcome Inspector2Client::ListAccountPermissions(const ListAccountPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accountpermissions/list");
  return ListAccountPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountPermissionsOutcomeCallable Inspector2Client::ListAccountPermissionsCallable(const ListAccountPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListAccountPermissionsAsyncHelper(Inspector2Client const * const clientThis, const ListAccountPermissionsRequest& request, const ListAccountPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountPermissions(request), context);
}

void Inspector2Client::ListAccountPermissionsAsync(const ListAccountPermissionsRequest& request, const ListAccountPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListAccountPermissionsAsyncHelper( this, request, handler, context ); } );
}

ListCoverageOutcome Inspector2Client::ListCoverage(const ListCoverageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/coverage/list");
  return ListCoverageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCoverageOutcomeCallable Inspector2Client::ListCoverageCallable(const ListCoverageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoverageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoverage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListCoverageAsyncHelper(Inspector2Client const * const clientThis, const ListCoverageRequest& request, const ListCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCoverage(request), context);
}

void Inspector2Client::ListCoverageAsync(const ListCoverageRequest& request, const ListCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListCoverageAsyncHelper( this, request, handler, context ); } );
}

ListCoverageStatisticsOutcome Inspector2Client::ListCoverageStatistics(const ListCoverageStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/coverage/statistics/list");
  return ListCoverageStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCoverageStatisticsOutcomeCallable Inspector2Client::ListCoverageStatisticsCallable(const ListCoverageStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoverageStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoverageStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListCoverageStatisticsAsyncHelper(Inspector2Client const * const clientThis, const ListCoverageStatisticsRequest& request, const ListCoverageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCoverageStatistics(request), context);
}

void Inspector2Client::ListCoverageStatisticsAsync(const ListCoverageStatisticsRequest& request, const ListCoverageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListCoverageStatisticsAsyncHelper( this, request, handler, context ); } );
}

ListDelegatedAdminAccountsOutcome Inspector2Client::ListDelegatedAdminAccounts(const ListDelegatedAdminAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delegatedadminaccounts/list");
  return ListDelegatedAdminAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDelegatedAdminAccountsOutcomeCallable Inspector2Client::ListDelegatedAdminAccountsCallable(const ListDelegatedAdminAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDelegatedAdminAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDelegatedAdminAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListDelegatedAdminAccountsAsyncHelper(Inspector2Client const * const clientThis, const ListDelegatedAdminAccountsRequest& request, const ListDelegatedAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDelegatedAdminAccounts(request), context);
}

void Inspector2Client::ListDelegatedAdminAccountsAsync(const ListDelegatedAdminAccountsRequest& request, const ListDelegatedAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListDelegatedAdminAccountsAsyncHelper( this, request, handler, context ); } );
}

ListFiltersOutcome Inspector2Client::ListFilters(const ListFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/filters/list");
  return ListFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFiltersOutcomeCallable Inspector2Client::ListFiltersCallable(const ListFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListFiltersAsyncHelper(Inspector2Client const * const clientThis, const ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFilters(request), context);
}

void Inspector2Client::ListFiltersAsync(const ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListFiltersAsyncHelper( this, request, handler, context ); } );
}

ListFindingAggregationsOutcome Inspector2Client::ListFindingAggregations(const ListFindingAggregationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings/aggregation/list");
  return ListFindingAggregationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFindingAggregationsOutcomeCallable Inspector2Client::ListFindingAggregationsCallable(const ListFindingAggregationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingAggregationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindingAggregations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListFindingAggregationsAsyncHelper(Inspector2Client const * const clientThis, const ListFindingAggregationsRequest& request, const ListFindingAggregationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFindingAggregations(request), context);
}

void Inspector2Client::ListFindingAggregationsAsync(const ListFindingAggregationsRequest& request, const ListFindingAggregationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListFindingAggregationsAsyncHelper( this, request, handler, context ); } );
}

ListFindingsOutcome Inspector2Client::ListFindings(const ListFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings/list");
  return ListFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsOutcomeCallable Inspector2Client::ListFindingsCallable(const ListFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListFindingsAsyncHelper(Inspector2Client const * const clientThis, const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFindings(request), context);
}

void Inspector2Client::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListFindingsAsyncHelper( this, request, handler, context ); } );
}

ListMembersOutcome Inspector2Client::ListMembers(const ListMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members/list");
  return ListMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMembersOutcomeCallable Inspector2Client::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListMembersAsyncHelper(Inspector2Client const * const clientThis, const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMembers(request), context);
}

void Inspector2Client::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListMembersAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome Inspector2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable Inspector2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListTagsForResourceAsyncHelper(Inspector2Client const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void Inspector2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListUsageTotalsOutcome Inspector2Client::ListUsageTotals(const ListUsageTotalsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usage/list");
  return ListUsageTotalsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsageTotalsOutcomeCallable Inspector2Client::ListUsageTotalsCallable(const ListUsageTotalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsageTotalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsageTotals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientListUsageTotalsAsyncHelper(Inspector2Client const * const clientThis, const ListUsageTotalsRequest& request, const ListUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUsageTotals(request), context);
}

void Inspector2Client::ListUsageTotalsAsync(const ListUsageTotalsRequest& request, const ListUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientListUsageTotalsAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome Inspector2Client::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable Inspector2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientTagResourceAsyncHelper(Inspector2Client const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void Inspector2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome Inspector2Client::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable Inspector2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientUntagResourceAsyncHelper(Inspector2Client const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void Inspector2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationOutcome Inspector2Client::UpdateConfiguration(const UpdateConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/configuration/update");
  return UpdateConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigurationOutcomeCallable Inspector2Client::UpdateConfigurationCallable(const UpdateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientUpdateConfigurationAsyncHelper(Inspector2Client const * const clientThis, const UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfiguration(request), context);
}

void Inspector2Client::UpdateConfigurationAsync(const UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientUpdateConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateFilterOutcome Inspector2Client::UpdateFilter(const UpdateFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/filters/update");
  return UpdateFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFilterOutcomeCallable Inspector2Client::UpdateFilterCallable(const UpdateFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientUpdateFilterAsyncHelper(Inspector2Client const * const clientThis, const UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFilter(request), context);
}

void Inspector2Client::UpdateFilterAsync(const UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientUpdateFilterAsyncHelper( this, request, handler, context ); } );
}

UpdateOrganizationConfigurationOutcome Inspector2Client::UpdateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organizationconfiguration/update");
  return UpdateOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationConfigurationOutcomeCallable Inspector2Client::UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Inspector2ClientUpdateOrganizationConfigurationAsyncHelper(Inspector2Client const * const clientThis, const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateOrganizationConfiguration(request), context);
}

void Inspector2Client::UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Inspector2ClientUpdateOrganizationConfigurationAsyncHelper( this, request, handler, context ); } );
}

