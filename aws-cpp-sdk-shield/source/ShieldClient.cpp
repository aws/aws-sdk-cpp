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

#include <aws/shield/ShieldClient.h>
#include <aws/shield/ShieldEndpoint.h>
#include <aws/shield/ShieldErrorMarshaller.h>
#include <aws/shield/model/AssociateDRTLogBucketRequest.h>
#include <aws/shield/model/AssociateDRTRoleRequest.h>
#include <aws/shield/model/AssociateHealthCheckRequest.h>
#include <aws/shield/model/AssociateProactiveEngagementDetailsRequest.h>
#include <aws/shield/model/CreateProtectionRequest.h>
#include <aws/shield/model/CreateProtectionGroupRequest.h>
#include <aws/shield/model/CreateSubscriptionRequest.h>
#include <aws/shield/model/DeleteProtectionRequest.h>
#include <aws/shield/model/DeleteProtectionGroupRequest.h>
#include <aws/shield/model/DescribeAttackRequest.h>
#include <aws/shield/model/DescribeAttackStatisticsRequest.h>
#include <aws/shield/model/DescribeDRTAccessRequest.h>
#include <aws/shield/model/DescribeEmergencyContactSettingsRequest.h>
#include <aws/shield/model/DescribeProtectionRequest.h>
#include <aws/shield/model/DescribeProtectionGroupRequest.h>
#include <aws/shield/model/DescribeSubscriptionRequest.h>
#include <aws/shield/model/DisableApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/DisableProactiveEngagementRequest.h>
#include <aws/shield/model/DisassociateDRTLogBucketRequest.h>
#include <aws/shield/model/DisassociateDRTRoleRequest.h>
#include <aws/shield/model/DisassociateHealthCheckRequest.h>
#include <aws/shield/model/EnableApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/EnableProactiveEngagementRequest.h>
#include <aws/shield/model/GetSubscriptionStateRequest.h>
#include <aws/shield/model/ListAttacksRequest.h>
#include <aws/shield/model/ListProtectionGroupsRequest.h>
#include <aws/shield/model/ListProtectionsRequest.h>
#include <aws/shield/model/ListResourcesInProtectionGroupRequest.h>
#include <aws/shield/model/ListTagsForResourceRequest.h>
#include <aws/shield/model/TagResourceRequest.h>
#include <aws/shield/model/UntagResourceRequest.h>
#include <aws/shield/model/UpdateApplicationLayerAutomaticResponseRequest.h>
#include <aws/shield/model/UpdateEmergencyContactSettingsRequest.h>
#include <aws/shield/model/UpdateProtectionGroupRequest.h>
#include <aws/shield/model/UpdateSubscriptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Shield;
using namespace Aws::Shield::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "shield";
static const char* ALLOCATION_TAG = "ShieldClient";

ShieldClient::ShieldClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ShieldClient::ShieldClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ShieldClient::ShieldClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ShieldClient::~ShieldClient()
{
}

void ShieldClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Shield");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ShieldEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ShieldClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateDRTLogBucketOutcome ShieldClient::AssociateDRTLogBucket(const AssociateDRTLogBucketRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateDRTLogBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDRTLogBucketOutcomeCallable ShieldClient::AssociateDRTLogBucketCallable(const AssociateDRTLogBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDRTLogBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDRTLogBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientAssociateDRTLogBucketAsyncHelper(ShieldClient const * const clientThis, const AssociateDRTLogBucketRequest& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateDRTLogBucket(request), context);
}

void ShieldClient::AssociateDRTLogBucketAsync(const AssociateDRTLogBucketRequest& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientAssociateDRTLogBucketAsyncHelper( this, request, handler, context ); } );
}

AssociateDRTRoleOutcome ShieldClient::AssociateDRTRole(const AssociateDRTRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateDRTRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDRTRoleOutcomeCallable ShieldClient::AssociateDRTRoleCallable(const AssociateDRTRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDRTRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDRTRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientAssociateDRTRoleAsyncHelper(ShieldClient const * const clientThis, const AssociateDRTRoleRequest& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateDRTRole(request), context);
}

void ShieldClient::AssociateDRTRoleAsync(const AssociateDRTRoleRequest& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientAssociateDRTRoleAsyncHelper( this, request, handler, context ); } );
}

AssociateHealthCheckOutcome ShieldClient::AssociateHealthCheck(const AssociateHealthCheckRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateHealthCheckOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateHealthCheckOutcomeCallable ShieldClient::AssociateHealthCheckCallable(const AssociateHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientAssociateHealthCheckAsyncHelper(ShieldClient const * const clientThis, const AssociateHealthCheckRequest& request, const AssociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateHealthCheck(request), context);
}

void ShieldClient::AssociateHealthCheckAsync(const AssociateHealthCheckRequest& request, const AssociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientAssociateHealthCheckAsyncHelper( this, request, handler, context ); } );
}

AssociateProactiveEngagementDetailsOutcome ShieldClient::AssociateProactiveEngagementDetails(const AssociateProactiveEngagementDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateProactiveEngagementDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateProactiveEngagementDetailsOutcomeCallable ShieldClient::AssociateProactiveEngagementDetailsCallable(const AssociateProactiveEngagementDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateProactiveEngagementDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateProactiveEngagementDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientAssociateProactiveEngagementDetailsAsyncHelper(ShieldClient const * const clientThis, const AssociateProactiveEngagementDetailsRequest& request, const AssociateProactiveEngagementDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateProactiveEngagementDetails(request), context);
}

void ShieldClient::AssociateProactiveEngagementDetailsAsync(const AssociateProactiveEngagementDetailsRequest& request, const AssociateProactiveEngagementDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientAssociateProactiveEngagementDetailsAsyncHelper( this, request, handler, context ); } );
}

CreateProtectionOutcome ShieldClient::CreateProtection(const CreateProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProtectionOutcomeCallable ShieldClient::CreateProtectionCallable(const CreateProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientCreateProtectionAsyncHelper(ShieldClient const * const clientThis, const CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProtection(request), context);
}

void ShieldClient::CreateProtectionAsync(const CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientCreateProtectionAsyncHelper( this, request, handler, context ); } );
}

CreateProtectionGroupOutcome ShieldClient::CreateProtectionGroup(const CreateProtectionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProtectionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProtectionGroupOutcomeCallable ShieldClient::CreateProtectionGroupCallable(const CreateProtectionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProtectionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProtectionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientCreateProtectionGroupAsyncHelper(ShieldClient const * const clientThis, const CreateProtectionGroupRequest& request, const CreateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProtectionGroup(request), context);
}

void ShieldClient::CreateProtectionGroupAsync(const CreateProtectionGroupRequest& request, const CreateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientCreateProtectionGroupAsyncHelper( this, request, handler, context ); } );
}

CreateSubscriptionOutcome ShieldClient::CreateSubscription(const CreateSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriptionOutcomeCallable ShieldClient::CreateSubscriptionCallable(const CreateSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientCreateSubscriptionAsyncHelper(ShieldClient const * const clientThis, const CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSubscription(request), context);
}

void ShieldClient::CreateSubscriptionAsync(const CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientCreateSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DeleteProtectionOutcome ShieldClient::DeleteProtection(const DeleteProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProtectionOutcomeCallable ShieldClient::DeleteProtectionCallable(const DeleteProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDeleteProtectionAsyncHelper(ShieldClient const * const clientThis, const DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProtection(request), context);
}

void ShieldClient::DeleteProtectionAsync(const DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDeleteProtectionAsyncHelper( this, request, handler, context ); } );
}

DeleteProtectionGroupOutcome ShieldClient::DeleteProtectionGroup(const DeleteProtectionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProtectionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProtectionGroupOutcomeCallable ShieldClient::DeleteProtectionGroupCallable(const DeleteProtectionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProtectionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProtectionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDeleteProtectionGroupAsyncHelper(ShieldClient const * const clientThis, const DeleteProtectionGroupRequest& request, const DeleteProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProtectionGroup(request), context);
}

void ShieldClient::DeleteProtectionGroupAsync(const DeleteProtectionGroupRequest& request, const DeleteProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDeleteProtectionGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeAttackOutcome ShieldClient::DescribeAttack(const DescribeAttackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAttackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAttackOutcomeCallable ShieldClient::DescribeAttackCallable(const DescribeAttackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAttackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAttack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDescribeAttackAsyncHelper(ShieldClient const * const clientThis, const DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAttack(request), context);
}

void ShieldClient::DescribeAttackAsync(const DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDescribeAttackAsyncHelper( this, request, handler, context ); } );
}

DescribeAttackStatisticsOutcome ShieldClient::DescribeAttackStatistics(const DescribeAttackStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAttackStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAttackStatisticsOutcomeCallable ShieldClient::DescribeAttackStatisticsCallable(const DescribeAttackStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAttackStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAttackStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDescribeAttackStatisticsAsyncHelper(ShieldClient const * const clientThis, const DescribeAttackStatisticsRequest& request, const DescribeAttackStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAttackStatistics(request), context);
}

void ShieldClient::DescribeAttackStatisticsAsync(const DescribeAttackStatisticsRequest& request, const DescribeAttackStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDescribeAttackStatisticsAsyncHelper( this, request, handler, context ); } );
}

DescribeDRTAccessOutcome ShieldClient::DescribeDRTAccess(const DescribeDRTAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDRTAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDRTAccessOutcomeCallable ShieldClient::DescribeDRTAccessCallable(const DescribeDRTAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDRTAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDRTAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDescribeDRTAccessAsyncHelper(ShieldClient const * const clientThis, const DescribeDRTAccessRequest& request, const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDRTAccess(request), context);
}

void ShieldClient::DescribeDRTAccessAsync(const DescribeDRTAccessRequest& request, const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDescribeDRTAccessAsyncHelper( this, request, handler, context ); } );
}

DescribeEmergencyContactSettingsOutcome ShieldClient::DescribeEmergencyContactSettings(const DescribeEmergencyContactSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEmergencyContactSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEmergencyContactSettingsOutcomeCallable ShieldClient::DescribeEmergencyContactSettingsCallable(const DescribeEmergencyContactSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEmergencyContactSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEmergencyContactSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDescribeEmergencyContactSettingsAsyncHelper(ShieldClient const * const clientThis, const DescribeEmergencyContactSettingsRequest& request, const DescribeEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEmergencyContactSettings(request), context);
}

void ShieldClient::DescribeEmergencyContactSettingsAsync(const DescribeEmergencyContactSettingsRequest& request, const DescribeEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDescribeEmergencyContactSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeProtectionOutcome ShieldClient::DescribeProtection(const DescribeProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProtectionOutcomeCallable ShieldClient::DescribeProtectionCallable(const DescribeProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDescribeProtectionAsyncHelper(ShieldClient const * const clientThis, const DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProtection(request), context);
}

void ShieldClient::DescribeProtectionAsync(const DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDescribeProtectionAsyncHelper( this, request, handler, context ); } );
}

DescribeProtectionGroupOutcome ShieldClient::DescribeProtectionGroup(const DescribeProtectionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProtectionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProtectionGroupOutcomeCallable ShieldClient::DescribeProtectionGroupCallable(const DescribeProtectionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProtectionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProtectionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDescribeProtectionGroupAsyncHelper(ShieldClient const * const clientThis, const DescribeProtectionGroupRequest& request, const DescribeProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProtectionGroup(request), context);
}

void ShieldClient::DescribeProtectionGroupAsync(const DescribeProtectionGroupRequest& request, const DescribeProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDescribeProtectionGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeSubscriptionOutcome ShieldClient::DescribeSubscription(const DescribeSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSubscriptionOutcomeCallable ShieldClient::DescribeSubscriptionCallable(const DescribeSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDescribeSubscriptionAsyncHelper(ShieldClient const * const clientThis, const DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSubscription(request), context);
}

void ShieldClient::DescribeSubscriptionAsync(const DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDescribeSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DisableApplicationLayerAutomaticResponseOutcome ShieldClient::DisableApplicationLayerAutomaticResponse(const DisableApplicationLayerAutomaticResponseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableApplicationLayerAutomaticResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableApplicationLayerAutomaticResponseOutcomeCallable ShieldClient::DisableApplicationLayerAutomaticResponseCallable(const DisableApplicationLayerAutomaticResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableApplicationLayerAutomaticResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableApplicationLayerAutomaticResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDisableApplicationLayerAutomaticResponseAsyncHelper(ShieldClient const * const clientThis, const DisableApplicationLayerAutomaticResponseRequest& request, const DisableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableApplicationLayerAutomaticResponse(request), context);
}

void ShieldClient::DisableApplicationLayerAutomaticResponseAsync(const DisableApplicationLayerAutomaticResponseRequest& request, const DisableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDisableApplicationLayerAutomaticResponseAsyncHelper( this, request, handler, context ); } );
}

DisableProactiveEngagementOutcome ShieldClient::DisableProactiveEngagement(const DisableProactiveEngagementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableProactiveEngagementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableProactiveEngagementOutcomeCallable ShieldClient::DisableProactiveEngagementCallable(const DisableProactiveEngagementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableProactiveEngagementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableProactiveEngagement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDisableProactiveEngagementAsyncHelper(ShieldClient const * const clientThis, const DisableProactiveEngagementRequest& request, const DisableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableProactiveEngagement(request), context);
}

void ShieldClient::DisableProactiveEngagementAsync(const DisableProactiveEngagementRequest& request, const DisableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDisableProactiveEngagementAsyncHelper( this, request, handler, context ); } );
}

DisassociateDRTLogBucketOutcome ShieldClient::DisassociateDRTLogBucket(const DisassociateDRTLogBucketRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateDRTLogBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDRTLogBucketOutcomeCallable ShieldClient::DisassociateDRTLogBucketCallable(const DisassociateDRTLogBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDRTLogBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDRTLogBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDisassociateDRTLogBucketAsyncHelper(ShieldClient const * const clientThis, const DisassociateDRTLogBucketRequest& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateDRTLogBucket(request), context);
}

void ShieldClient::DisassociateDRTLogBucketAsync(const DisassociateDRTLogBucketRequest& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDisassociateDRTLogBucketAsyncHelper( this, request, handler, context ); } );
}

DisassociateDRTRoleOutcome ShieldClient::DisassociateDRTRole(const DisassociateDRTRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateDRTRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDRTRoleOutcomeCallable ShieldClient::DisassociateDRTRoleCallable(const DisassociateDRTRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDRTRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDRTRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDisassociateDRTRoleAsyncHelper(ShieldClient const * const clientThis, const DisassociateDRTRoleRequest& request, const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateDRTRole(request), context);
}

void ShieldClient::DisassociateDRTRoleAsync(const DisassociateDRTRoleRequest& request, const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDisassociateDRTRoleAsyncHelper( this, request, handler, context ); } );
}

DisassociateHealthCheckOutcome ShieldClient::DisassociateHealthCheck(const DisassociateHealthCheckRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateHealthCheckOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateHealthCheckOutcomeCallable ShieldClient::DisassociateHealthCheckCallable(const DisassociateHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientDisassociateHealthCheckAsyncHelper(ShieldClient const * const clientThis, const DisassociateHealthCheckRequest& request, const DisassociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateHealthCheck(request), context);
}

void ShieldClient::DisassociateHealthCheckAsync(const DisassociateHealthCheckRequest& request, const DisassociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientDisassociateHealthCheckAsyncHelper( this, request, handler, context ); } );
}

EnableApplicationLayerAutomaticResponseOutcome ShieldClient::EnableApplicationLayerAutomaticResponse(const EnableApplicationLayerAutomaticResponseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableApplicationLayerAutomaticResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableApplicationLayerAutomaticResponseOutcomeCallable ShieldClient::EnableApplicationLayerAutomaticResponseCallable(const EnableApplicationLayerAutomaticResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableApplicationLayerAutomaticResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableApplicationLayerAutomaticResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientEnableApplicationLayerAutomaticResponseAsyncHelper(ShieldClient const * const clientThis, const EnableApplicationLayerAutomaticResponseRequest& request, const EnableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableApplicationLayerAutomaticResponse(request), context);
}

void ShieldClient::EnableApplicationLayerAutomaticResponseAsync(const EnableApplicationLayerAutomaticResponseRequest& request, const EnableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientEnableApplicationLayerAutomaticResponseAsyncHelper( this, request, handler, context ); } );
}

EnableProactiveEngagementOutcome ShieldClient::EnableProactiveEngagement(const EnableProactiveEngagementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableProactiveEngagementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableProactiveEngagementOutcomeCallable ShieldClient::EnableProactiveEngagementCallable(const EnableProactiveEngagementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableProactiveEngagementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableProactiveEngagement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientEnableProactiveEngagementAsyncHelper(ShieldClient const * const clientThis, const EnableProactiveEngagementRequest& request, const EnableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableProactiveEngagement(request), context);
}

void ShieldClient::EnableProactiveEngagementAsync(const EnableProactiveEngagementRequest& request, const EnableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientEnableProactiveEngagementAsyncHelper( this, request, handler, context ); } );
}

GetSubscriptionStateOutcome ShieldClient::GetSubscriptionState(const GetSubscriptionStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSubscriptionStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSubscriptionStateOutcomeCallable ShieldClient::GetSubscriptionStateCallable(const GetSubscriptionStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriptionStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriptionState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientGetSubscriptionStateAsyncHelper(ShieldClient const * const clientThis, const GetSubscriptionStateRequest& request, const GetSubscriptionStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSubscriptionState(request), context);
}

void ShieldClient::GetSubscriptionStateAsync(const GetSubscriptionStateRequest& request, const GetSubscriptionStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientGetSubscriptionStateAsyncHelper( this, request, handler, context ); } );
}

ListAttacksOutcome ShieldClient::ListAttacks(const ListAttacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAttacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAttacksOutcomeCallable ShieldClient::ListAttacksCallable(const ListAttacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientListAttacksAsyncHelper(ShieldClient const * const clientThis, const ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAttacks(request), context);
}

void ShieldClient::ListAttacksAsync(const ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientListAttacksAsyncHelper( this, request, handler, context ); } );
}

ListProtectionGroupsOutcome ShieldClient::ListProtectionGroups(const ListProtectionGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProtectionGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProtectionGroupsOutcomeCallable ShieldClient::ListProtectionGroupsCallable(const ListProtectionGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProtectionGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProtectionGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientListProtectionGroupsAsyncHelper(ShieldClient const * const clientThis, const ListProtectionGroupsRequest& request, const ListProtectionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProtectionGroups(request), context);
}

void ShieldClient::ListProtectionGroupsAsync(const ListProtectionGroupsRequest& request, const ListProtectionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientListProtectionGroupsAsyncHelper( this, request, handler, context ); } );
}

ListProtectionsOutcome ShieldClient::ListProtections(const ListProtectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProtectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProtectionsOutcomeCallable ShieldClient::ListProtectionsCallable(const ListProtectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProtectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProtections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientListProtectionsAsyncHelper(ShieldClient const * const clientThis, const ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProtections(request), context);
}

void ShieldClient::ListProtectionsAsync(const ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientListProtectionsAsyncHelper( this, request, handler, context ); } );
}

ListResourcesInProtectionGroupOutcome ShieldClient::ListResourcesInProtectionGroup(const ListResourcesInProtectionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourcesInProtectionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesInProtectionGroupOutcomeCallable ShieldClient::ListResourcesInProtectionGroupCallable(const ListResourcesInProtectionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesInProtectionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesInProtectionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientListResourcesInProtectionGroupAsyncHelper(ShieldClient const * const clientThis, const ListResourcesInProtectionGroupRequest& request, const ListResourcesInProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourcesInProtectionGroup(request), context);
}

void ShieldClient::ListResourcesInProtectionGroupAsync(const ListResourcesInProtectionGroupRequest& request, const ListResourcesInProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientListResourcesInProtectionGroupAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ShieldClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ShieldClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientListTagsForResourceAsyncHelper(ShieldClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ShieldClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ShieldClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ShieldClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientTagResourceAsyncHelper(ShieldClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ShieldClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ShieldClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ShieldClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientUntagResourceAsyncHelper(ShieldClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ShieldClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationLayerAutomaticResponseOutcome ShieldClient::UpdateApplicationLayerAutomaticResponse(const UpdateApplicationLayerAutomaticResponseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationLayerAutomaticResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationLayerAutomaticResponseOutcomeCallable ShieldClient::UpdateApplicationLayerAutomaticResponseCallable(const UpdateApplicationLayerAutomaticResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationLayerAutomaticResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationLayerAutomaticResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientUpdateApplicationLayerAutomaticResponseAsyncHelper(ShieldClient const * const clientThis, const UpdateApplicationLayerAutomaticResponseRequest& request, const UpdateApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplicationLayerAutomaticResponse(request), context);
}

void ShieldClient::UpdateApplicationLayerAutomaticResponseAsync(const UpdateApplicationLayerAutomaticResponseRequest& request, const UpdateApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientUpdateApplicationLayerAutomaticResponseAsyncHelper( this, request, handler, context ); } );
}

UpdateEmergencyContactSettingsOutcome ShieldClient::UpdateEmergencyContactSettings(const UpdateEmergencyContactSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEmergencyContactSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEmergencyContactSettingsOutcomeCallable ShieldClient::UpdateEmergencyContactSettingsCallable(const UpdateEmergencyContactSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmergencyContactSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmergencyContactSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientUpdateEmergencyContactSettingsAsyncHelper(ShieldClient const * const clientThis, const UpdateEmergencyContactSettingsRequest& request, const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEmergencyContactSettings(request), context);
}

void ShieldClient::UpdateEmergencyContactSettingsAsync(const UpdateEmergencyContactSettingsRequest& request, const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientUpdateEmergencyContactSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateProtectionGroupOutcome ShieldClient::UpdateProtectionGroup(const UpdateProtectionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProtectionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProtectionGroupOutcomeCallable ShieldClient::UpdateProtectionGroupCallable(const UpdateProtectionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProtectionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProtectionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientUpdateProtectionGroupAsyncHelper(ShieldClient const * const clientThis, const UpdateProtectionGroupRequest& request, const UpdateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProtectionGroup(request), context);
}

void ShieldClient::UpdateProtectionGroupAsync(const UpdateProtectionGroupRequest& request, const UpdateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientUpdateProtectionGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateSubscriptionOutcome ShieldClient::UpdateSubscription(const UpdateSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriptionOutcomeCallable ShieldClient::UpdateSubscriptionCallable(const UpdateSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClientUpdateSubscriptionAsyncHelper(ShieldClient const * const clientThis, const UpdateSubscriptionRequest& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSubscription(request), context);
}

void ShieldClient::UpdateSubscriptionAsync(const UpdateSubscriptionRequest& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ShieldClientUpdateSubscriptionAsyncHelper( this, request, handler, context ); } );
}

