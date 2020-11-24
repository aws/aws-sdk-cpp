/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/BatchAssociateProjectAssetsResult.h>
#include <aws/iotsitewise/model/BatchDisassociateProjectAssetsResult.h>
#include <aws/iotsitewise/model/BatchPutAssetPropertyValueResult.h>
#include <aws/iotsitewise/model/CreateAccessPolicyResult.h>
#include <aws/iotsitewise/model/CreateAssetResult.h>
#include <aws/iotsitewise/model/CreateAssetModelResult.h>
#include <aws/iotsitewise/model/CreateDashboardResult.h>
#include <aws/iotsitewise/model/CreateGatewayResult.h>
#include <aws/iotsitewise/model/CreatePortalResult.h>
#include <aws/iotsitewise/model/CreatePresignedPortalUrlResult.h>
#include <aws/iotsitewise/model/CreateProjectResult.h>
#include <aws/iotsitewise/model/DeleteAccessPolicyResult.h>
#include <aws/iotsitewise/model/DeleteAssetResult.h>
#include <aws/iotsitewise/model/DeleteAssetModelResult.h>
#include <aws/iotsitewise/model/DeleteDashboardResult.h>
#include <aws/iotsitewise/model/DeletePortalResult.h>
#include <aws/iotsitewise/model/DeleteProjectResult.h>
#include <aws/iotsitewise/model/DescribeAccessPolicyResult.h>
#include <aws/iotsitewise/model/DescribeAssetResult.h>
#include <aws/iotsitewise/model/DescribeAssetModelResult.h>
#include <aws/iotsitewise/model/DescribeAssetPropertyResult.h>
#include <aws/iotsitewise/model/DescribeDashboardResult.h>
#include <aws/iotsitewise/model/DescribeDefaultEncryptionConfigurationResult.h>
#include <aws/iotsitewise/model/DescribeGatewayResult.h>
#include <aws/iotsitewise/model/DescribeGatewayCapabilityConfigurationResult.h>
#include <aws/iotsitewise/model/DescribeLoggingOptionsResult.h>
#include <aws/iotsitewise/model/DescribePortalResult.h>
#include <aws/iotsitewise/model/DescribeProjectResult.h>
#include <aws/iotsitewise/model/GetAssetPropertyAggregatesResult.h>
#include <aws/iotsitewise/model/GetAssetPropertyValueResult.h>
#include <aws/iotsitewise/model/GetAssetPropertyValueHistoryResult.h>
#include <aws/iotsitewise/model/ListAccessPoliciesResult.h>
#include <aws/iotsitewise/model/ListAssetModelsResult.h>
#include <aws/iotsitewise/model/ListAssetsResult.h>
#include <aws/iotsitewise/model/ListAssociatedAssetsResult.h>
#include <aws/iotsitewise/model/ListDashboardsResult.h>
#include <aws/iotsitewise/model/ListGatewaysResult.h>
#include <aws/iotsitewise/model/ListPortalsResult.h>
#include <aws/iotsitewise/model/ListProjectAssetsResult.h>
#include <aws/iotsitewise/model/ListProjectsResult.h>
#include <aws/iotsitewise/model/ListTagsForResourceResult.h>
#include <aws/iotsitewise/model/PutDefaultEncryptionConfigurationResult.h>
#include <aws/iotsitewise/model/PutLoggingOptionsResult.h>
#include <aws/iotsitewise/model/TagResourceResult.h>
#include <aws/iotsitewise/model/UntagResourceResult.h>
#include <aws/iotsitewise/model/UpdateAccessPolicyResult.h>
#include <aws/iotsitewise/model/UpdateAssetResult.h>
#include <aws/iotsitewise/model/UpdateAssetModelResult.h>
#include <aws/iotsitewise/model/UpdateDashboardResult.h>
#include <aws/iotsitewise/model/UpdateGatewayCapabilityConfigurationResult.h>
#include <aws/iotsitewise/model/UpdatePortalResult.h>
#include <aws/iotsitewise/model/UpdateProjectResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace IoTSiteWise
{

namespace Model
{
        class AssociateAssetsRequest;
        class BatchAssociateProjectAssetsRequest;
        class BatchDisassociateProjectAssetsRequest;
        class BatchPutAssetPropertyValueRequest;
        class CreateAccessPolicyRequest;
        class CreateAssetRequest;
        class CreateAssetModelRequest;
        class CreateDashboardRequest;
        class CreateGatewayRequest;
        class CreatePortalRequest;
        class CreatePresignedPortalUrlRequest;
        class CreateProjectRequest;
        class DeleteAccessPolicyRequest;
        class DeleteAssetRequest;
        class DeleteAssetModelRequest;
        class DeleteDashboardRequest;
        class DeleteGatewayRequest;
        class DeletePortalRequest;
        class DeleteProjectRequest;
        class DescribeAccessPolicyRequest;
        class DescribeAssetRequest;
        class DescribeAssetModelRequest;
        class DescribeAssetPropertyRequest;
        class DescribeDashboardRequest;
        class DescribeDefaultEncryptionConfigurationRequest;
        class DescribeGatewayRequest;
        class DescribeGatewayCapabilityConfigurationRequest;
        class DescribeLoggingOptionsRequest;
        class DescribePortalRequest;
        class DescribeProjectRequest;
        class DisassociateAssetsRequest;
        class GetAssetPropertyAggregatesRequest;
        class GetAssetPropertyValueRequest;
        class GetAssetPropertyValueHistoryRequest;
        class ListAccessPoliciesRequest;
        class ListAssetModelsRequest;
        class ListAssetsRequest;
        class ListAssociatedAssetsRequest;
        class ListDashboardsRequest;
        class ListGatewaysRequest;
        class ListPortalsRequest;
        class ListProjectAssetsRequest;
        class ListProjectsRequest;
        class ListTagsForResourceRequest;
        class PutDefaultEncryptionConfigurationRequest;
        class PutLoggingOptionsRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAccessPolicyRequest;
        class UpdateAssetRequest;
        class UpdateAssetModelRequest;
        class UpdateAssetPropertyRequest;
        class UpdateDashboardRequest;
        class UpdateGatewayRequest;
        class UpdateGatewayCapabilityConfigurationRequest;
        class UpdatePortalRequest;
        class UpdateProjectRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, IoTSiteWiseError> AssociateAssetsOutcome;
        typedef Aws::Utils::Outcome<BatchAssociateProjectAssetsResult, IoTSiteWiseError> BatchAssociateProjectAssetsOutcome;
        typedef Aws::Utils::Outcome<BatchDisassociateProjectAssetsResult, IoTSiteWiseError> BatchDisassociateProjectAssetsOutcome;
        typedef Aws::Utils::Outcome<BatchPutAssetPropertyValueResult, IoTSiteWiseError> BatchPutAssetPropertyValueOutcome;
        typedef Aws::Utils::Outcome<CreateAccessPolicyResult, IoTSiteWiseError> CreateAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<CreateAssetResult, IoTSiteWiseError> CreateAssetOutcome;
        typedef Aws::Utils::Outcome<CreateAssetModelResult, IoTSiteWiseError> CreateAssetModelOutcome;
        typedef Aws::Utils::Outcome<CreateDashboardResult, IoTSiteWiseError> CreateDashboardOutcome;
        typedef Aws::Utils::Outcome<CreateGatewayResult, IoTSiteWiseError> CreateGatewayOutcome;
        typedef Aws::Utils::Outcome<CreatePortalResult, IoTSiteWiseError> CreatePortalOutcome;
        typedef Aws::Utils::Outcome<CreatePresignedPortalUrlResult, IoTSiteWiseError> CreatePresignedPortalUrlOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, IoTSiteWiseError> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteAccessPolicyResult, IoTSiteWiseError> DeleteAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteAssetResult, IoTSiteWiseError> DeleteAssetOutcome;
        typedef Aws::Utils::Outcome<DeleteAssetModelResult, IoTSiteWiseError> DeleteAssetModelOutcome;
        typedef Aws::Utils::Outcome<DeleteDashboardResult, IoTSiteWiseError> DeleteDashboardOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IoTSiteWiseError> DeleteGatewayOutcome;
        typedef Aws::Utils::Outcome<DeletePortalResult, IoTSiteWiseError> DeletePortalOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, IoTSiteWiseError> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DescribeAccessPolicyResult, IoTSiteWiseError> DescribeAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeAssetResult, IoTSiteWiseError> DescribeAssetOutcome;
        typedef Aws::Utils::Outcome<DescribeAssetModelResult, IoTSiteWiseError> DescribeAssetModelOutcome;
        typedef Aws::Utils::Outcome<DescribeAssetPropertyResult, IoTSiteWiseError> DescribeAssetPropertyOutcome;
        typedef Aws::Utils::Outcome<DescribeDashboardResult, IoTSiteWiseError> DescribeDashboardOutcome;
        typedef Aws::Utils::Outcome<DescribeDefaultEncryptionConfigurationResult, IoTSiteWiseError> DescribeDefaultEncryptionConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeGatewayResult, IoTSiteWiseError> DescribeGatewayOutcome;
        typedef Aws::Utils::Outcome<DescribeGatewayCapabilityConfigurationResult, IoTSiteWiseError> DescribeGatewayCapabilityConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeLoggingOptionsResult, IoTSiteWiseError> DescribeLoggingOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribePortalResult, IoTSiteWiseError> DescribePortalOutcome;
        typedef Aws::Utils::Outcome<DescribeProjectResult, IoTSiteWiseError> DescribeProjectOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IoTSiteWiseError> DisassociateAssetsOutcome;
        typedef Aws::Utils::Outcome<GetAssetPropertyAggregatesResult, IoTSiteWiseError> GetAssetPropertyAggregatesOutcome;
        typedef Aws::Utils::Outcome<GetAssetPropertyValueResult, IoTSiteWiseError> GetAssetPropertyValueOutcome;
        typedef Aws::Utils::Outcome<GetAssetPropertyValueHistoryResult, IoTSiteWiseError> GetAssetPropertyValueHistoryOutcome;
        typedef Aws::Utils::Outcome<ListAccessPoliciesResult, IoTSiteWiseError> ListAccessPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListAssetModelsResult, IoTSiteWiseError> ListAssetModelsOutcome;
        typedef Aws::Utils::Outcome<ListAssetsResult, IoTSiteWiseError> ListAssetsOutcome;
        typedef Aws::Utils::Outcome<ListAssociatedAssetsResult, IoTSiteWiseError> ListAssociatedAssetsOutcome;
        typedef Aws::Utils::Outcome<ListDashboardsResult, IoTSiteWiseError> ListDashboardsOutcome;
        typedef Aws::Utils::Outcome<ListGatewaysResult, IoTSiteWiseError> ListGatewaysOutcome;
        typedef Aws::Utils::Outcome<ListPortalsResult, IoTSiteWiseError> ListPortalsOutcome;
        typedef Aws::Utils::Outcome<ListProjectAssetsResult, IoTSiteWiseError> ListProjectAssetsOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, IoTSiteWiseError> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTSiteWiseError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutDefaultEncryptionConfigurationResult, IoTSiteWiseError> PutDefaultEncryptionConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutLoggingOptionsResult, IoTSiteWiseError> PutLoggingOptionsOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, IoTSiteWiseError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, IoTSiteWiseError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAccessPolicyResult, IoTSiteWiseError> UpdateAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<UpdateAssetResult, IoTSiteWiseError> UpdateAssetOutcome;
        typedef Aws::Utils::Outcome<UpdateAssetModelResult, IoTSiteWiseError> UpdateAssetModelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IoTSiteWiseError> UpdateAssetPropertyOutcome;
        typedef Aws::Utils::Outcome<UpdateDashboardResult, IoTSiteWiseError> UpdateDashboardOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IoTSiteWiseError> UpdateGatewayOutcome;
        typedef Aws::Utils::Outcome<UpdateGatewayCapabilityConfigurationResult, IoTSiteWiseError> UpdateGatewayCapabilityConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdatePortalResult, IoTSiteWiseError> UpdatePortalOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, IoTSiteWiseError> UpdateProjectOutcome;

        typedef std::future<AssociateAssetsOutcome> AssociateAssetsOutcomeCallable;
        typedef std::future<BatchAssociateProjectAssetsOutcome> BatchAssociateProjectAssetsOutcomeCallable;
        typedef std::future<BatchDisassociateProjectAssetsOutcome> BatchDisassociateProjectAssetsOutcomeCallable;
        typedef std::future<BatchPutAssetPropertyValueOutcome> BatchPutAssetPropertyValueOutcomeCallable;
        typedef std::future<CreateAccessPolicyOutcome> CreateAccessPolicyOutcomeCallable;
        typedef std::future<CreateAssetOutcome> CreateAssetOutcomeCallable;
        typedef std::future<CreateAssetModelOutcome> CreateAssetModelOutcomeCallable;
        typedef std::future<CreateDashboardOutcome> CreateDashboardOutcomeCallable;
        typedef std::future<CreateGatewayOutcome> CreateGatewayOutcomeCallable;
        typedef std::future<CreatePortalOutcome> CreatePortalOutcomeCallable;
        typedef std::future<CreatePresignedPortalUrlOutcome> CreatePresignedPortalUrlOutcomeCallable;
        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<DeleteAccessPolicyOutcome> DeleteAccessPolicyOutcomeCallable;
        typedef std::future<DeleteAssetOutcome> DeleteAssetOutcomeCallable;
        typedef std::future<DeleteAssetModelOutcome> DeleteAssetModelOutcomeCallable;
        typedef std::future<DeleteDashboardOutcome> DeleteDashboardOutcomeCallable;
        typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
        typedef std::future<DeletePortalOutcome> DeletePortalOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<DescribeAccessPolicyOutcome> DescribeAccessPolicyOutcomeCallable;
        typedef std::future<DescribeAssetOutcome> DescribeAssetOutcomeCallable;
        typedef std::future<DescribeAssetModelOutcome> DescribeAssetModelOutcomeCallable;
        typedef std::future<DescribeAssetPropertyOutcome> DescribeAssetPropertyOutcomeCallable;
        typedef std::future<DescribeDashboardOutcome> DescribeDashboardOutcomeCallable;
        typedef std::future<DescribeDefaultEncryptionConfigurationOutcome> DescribeDefaultEncryptionConfigurationOutcomeCallable;
        typedef std::future<DescribeGatewayOutcome> DescribeGatewayOutcomeCallable;
        typedef std::future<DescribeGatewayCapabilityConfigurationOutcome> DescribeGatewayCapabilityConfigurationOutcomeCallable;
        typedef std::future<DescribeLoggingOptionsOutcome> DescribeLoggingOptionsOutcomeCallable;
        typedef std::future<DescribePortalOutcome> DescribePortalOutcomeCallable;
        typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
        typedef std::future<DisassociateAssetsOutcome> DisassociateAssetsOutcomeCallable;
        typedef std::future<GetAssetPropertyAggregatesOutcome> GetAssetPropertyAggregatesOutcomeCallable;
        typedef std::future<GetAssetPropertyValueOutcome> GetAssetPropertyValueOutcomeCallable;
        typedef std::future<GetAssetPropertyValueHistoryOutcome> GetAssetPropertyValueHistoryOutcomeCallable;
        typedef std::future<ListAccessPoliciesOutcome> ListAccessPoliciesOutcomeCallable;
        typedef std::future<ListAssetModelsOutcome> ListAssetModelsOutcomeCallable;
        typedef std::future<ListAssetsOutcome> ListAssetsOutcomeCallable;
        typedef std::future<ListAssociatedAssetsOutcome> ListAssociatedAssetsOutcomeCallable;
        typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
        typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
        typedef std::future<ListPortalsOutcome> ListPortalsOutcomeCallable;
        typedef std::future<ListProjectAssetsOutcome> ListProjectAssetsOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutDefaultEncryptionConfigurationOutcome> PutDefaultEncryptionConfigurationOutcomeCallable;
        typedef std::future<PutLoggingOptionsOutcome> PutLoggingOptionsOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAccessPolicyOutcome> UpdateAccessPolicyOutcomeCallable;
        typedef std::future<UpdateAssetOutcome> UpdateAssetOutcomeCallable;
        typedef std::future<UpdateAssetModelOutcome> UpdateAssetModelOutcomeCallable;
        typedef std::future<UpdateAssetPropertyOutcome> UpdateAssetPropertyOutcomeCallable;
        typedef std::future<UpdateDashboardOutcome> UpdateDashboardOutcomeCallable;
        typedef std::future<UpdateGatewayOutcome> UpdateGatewayOutcomeCallable;
        typedef std::future<UpdateGatewayCapabilityConfigurationOutcome> UpdateGatewayCapabilityConfigurationOutcomeCallable;
        typedef std::future<UpdatePortalOutcome> UpdatePortalOutcomeCallable;
        typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
} // namespace Model

  class IoTSiteWiseClient;

    typedef std::function<void(const IoTSiteWiseClient*, const Model::AssociateAssetsRequest&, const Model::AssociateAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAssetsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::BatchAssociateProjectAssetsRequest&, const Model::BatchAssociateProjectAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateProjectAssetsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::BatchDisassociateProjectAssetsRequest&, const Model::BatchDisassociateProjectAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateProjectAssetsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::BatchPutAssetPropertyValueRequest&, const Model::BatchPutAssetPropertyValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutAssetPropertyValueResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::CreateAccessPolicyRequest&, const Model::CreateAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::CreateAssetRequest&, const Model::CreateAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::CreateAssetModelRequest&, const Model::CreateAssetModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetModelResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::CreateDashboardRequest&, const Model::CreateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDashboardResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::CreateGatewayRequest&, const Model::CreateGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::CreatePortalRequest&, const Model::CreatePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortalResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::CreatePresignedPortalUrlRequest&, const Model::CreatePresignedPortalUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresignedPortalUrlResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DeleteAccessPolicyRequest&, const Model::DeleteAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DeleteAssetRequest&, const Model::DeleteAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DeleteAssetModelRequest&, const Model::DeleteAssetModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetModelResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DeleteDashboardRequest&, const Model::DeleteDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDashboardResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DeleteGatewayRequest&, const Model::DeleteGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DeletePortalRequest&, const Model::DeletePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortalResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeAccessPolicyRequest&, const Model::DescribeAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeAssetRequest&, const Model::DescribeAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssetResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeAssetModelRequest&, const Model::DescribeAssetModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssetModelResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeAssetPropertyRequest&, const Model::DescribeAssetPropertyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssetPropertyResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeDashboardRequest&, const Model::DescribeDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeDefaultEncryptionConfigurationRequest&, const Model::DescribeDefaultEncryptionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDefaultEncryptionConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeGatewayRequest&, const Model::DescribeGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeGatewayCapabilityConfigurationRequest&, const Model::DescribeGatewayCapabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGatewayCapabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeLoggingOptionsRequest&, const Model::DescribeLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribePortalRequest&, const Model::DescribePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePortalResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::DisassociateAssetsRequest&, const Model::DisassociateAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAssetsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::GetAssetPropertyAggregatesRequest&, const Model::GetAssetPropertyAggregatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetPropertyAggregatesResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::GetAssetPropertyValueRequest&, const Model::GetAssetPropertyValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetPropertyValueResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::GetAssetPropertyValueHistoryRequest&, const Model::GetAssetPropertyValueHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetPropertyValueHistoryResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListAccessPoliciesRequest&, const Model::ListAccessPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPoliciesResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListAssetModelsRequest&, const Model::ListAssetModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetModelsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListAssetsRequest&, const Model::ListAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListAssociatedAssetsRequest&, const Model::ListAssociatedAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedAssetsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListGatewaysRequest&, const Model::ListGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewaysResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListPortalsRequest&, const Model::ListPortalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortalsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListProjectAssetsRequest&, const Model::ListProjectAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectAssetsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::PutDefaultEncryptionConfigurationRequest&, const Model::PutDefaultEncryptionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDefaultEncryptionConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::PutLoggingOptionsRequest&, const Model::PutLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdateAccessPolicyRequest&, const Model::UpdateAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdateAssetRequest&, const Model::UpdateAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssetResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdateAssetModelRequest&, const Model::UpdateAssetModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssetModelResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdateAssetPropertyRequest&, const Model::UpdateAssetPropertyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssetPropertyResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdateDashboardRequest&, const Model::UpdateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdateGatewayRequest&, const Model::UpdateGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdateGatewayCapabilityConfigurationRequest&, const Model::UpdateGatewayCapabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayCapabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdatePortalRequest&, const Model::UpdatePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePortalResponseReceivedHandler;
    typedef std::function<void(const IoTSiteWiseClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;

  /**
   * <p>Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS
   * service that connects <a
   * href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial
   * Internet of Things (IIoT)</a> devices to the power of the AWS Cloud. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT
   * SiteWise User Guide</a>. For information about AWS IoT SiteWise quotas, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
   * in the <i>AWS IoT SiteWise User Guide</i>.</p>
   */
  class AWS_IOTSITEWISE_API IoTSiteWiseClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSiteWiseClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSiteWiseClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTSiteWiseClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTSiteWiseClient();


        /**
         * <p>Associates a child asset with the given parent asset through a hierarchy
         * defined in the parent asset's model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/add-associated-assets.html">Associating
         * assets</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociateAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAssetsOutcome AssociateAssets(const Model::AssociateAssetsRequest& request) const;

        /**
         * <p>Associates a child asset with the given parent asset through a hierarchy
         * defined in the parent asset's model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/add-associated-assets.html">Associating
         * assets</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociateAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAssetsOutcomeCallable AssociateAssetsCallable(const Model::AssociateAssetsRequest& request) const;

        /**
         * <p>Associates a child asset with the given parent asset through a hierarchy
         * defined in the parent asset's model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/add-associated-assets.html">Associating
         * assets</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociateAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAssetsAsync(const Model::AssociateAssetsRequest& request, const AssociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a group (batch) of assets with an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchAssociateProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateProjectAssetsOutcome BatchAssociateProjectAssets(const Model::BatchAssociateProjectAssetsRequest& request) const;

        /**
         * <p>Associates a group (batch) of assets with an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchAssociateProjectAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateProjectAssetsOutcomeCallable BatchAssociateProjectAssetsCallable(const Model::BatchAssociateProjectAssetsRequest& request) const;

        /**
         * <p>Associates a group (batch) of assets with an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchAssociateProjectAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateProjectAssetsAsync(const Model::BatchAssociateProjectAssetsRequest& request, const BatchAssociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a group (batch) of assets from an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchDisassociateProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateProjectAssetsOutcome BatchDisassociateProjectAssets(const Model::BatchDisassociateProjectAssetsRequest& request) const;

        /**
         * <p>Disassociates a group (batch) of assets from an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchDisassociateProjectAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateProjectAssetsOutcomeCallable BatchDisassociateProjectAssetsCallable(const Model::BatchDisassociateProjectAssetsRequest& request) const;

        /**
         * <p>Disassociates a group (batch) of assets from an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchDisassociateProjectAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateProjectAssetsAsync(const Model::BatchDisassociateProjectAssetsRequest& request, const BatchDisassociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a list of asset property values to AWS IoT SiteWise. Each value is a
         * timestamp-quality-value (TQV) data point. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ingest-api.html">Ingesting
         * data using the API</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To
         * identify an asset property, you must specify one of the following:</p> <ul> <li>
         * <p>The <code>assetId</code> and <code>propertyId</code> of an asset
         * property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a data stream
         * alias (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). To
         * define an asset property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul>  <p>With respect to Unix epoch time, AWS IoT SiteWise
         * accepts only TQVs that have a timestamp of no more than 15 minutes in the past
         * and no more than 5 minutes in the future. AWS IoT SiteWise rejects timestamps
         * outside of the inclusive range of [-15, +5] minutes and returns a
         * <code>TimestampOutOfRangeException</code> error.</p> <p>For each asset property,
         * AWS IoT SiteWise overwrites TQVs with duplicate timestamps unless the newer TQV
         * has a different quality. For example, if you store a TQV <code>{T1, GOOD,
         * V1}</code>, then storing <code>{T1, GOOD, V2}</code> replaces the existing
         * TQV.</p>  <p>AWS IoT SiteWise authorizes access to each
         * <code>BatchPutAssetPropertyValue</code> entry individually. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-batchputassetpropertyvalue-action">BatchPutAssetPropertyValue
         * authorization</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchPutAssetPropertyValue">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutAssetPropertyValueOutcome BatchPutAssetPropertyValue(const Model::BatchPutAssetPropertyValueRequest& request) const;

        /**
         * <p>Sends a list of asset property values to AWS IoT SiteWise. Each value is a
         * timestamp-quality-value (TQV) data point. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ingest-api.html">Ingesting
         * data using the API</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To
         * identify an asset property, you must specify one of the following:</p> <ul> <li>
         * <p>The <code>assetId</code> and <code>propertyId</code> of an asset
         * property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a data stream
         * alias (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). To
         * define an asset property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul>  <p>With respect to Unix epoch time, AWS IoT SiteWise
         * accepts only TQVs that have a timestamp of no more than 15 minutes in the past
         * and no more than 5 minutes in the future. AWS IoT SiteWise rejects timestamps
         * outside of the inclusive range of [-15, +5] minutes and returns a
         * <code>TimestampOutOfRangeException</code> error.</p> <p>For each asset property,
         * AWS IoT SiteWise overwrites TQVs with duplicate timestamps unless the newer TQV
         * has a different quality. For example, if you store a TQV <code>{T1, GOOD,
         * V1}</code>, then storing <code>{T1, GOOD, V2}</code> replaces the existing
         * TQV.</p>  <p>AWS IoT SiteWise authorizes access to each
         * <code>BatchPutAssetPropertyValue</code> entry individually. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-batchputassetpropertyvalue-action">BatchPutAssetPropertyValue
         * authorization</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchPutAssetPropertyValue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutAssetPropertyValueOutcomeCallable BatchPutAssetPropertyValueCallable(const Model::BatchPutAssetPropertyValueRequest& request) const;

        /**
         * <p>Sends a list of asset property values to AWS IoT SiteWise. Each value is a
         * timestamp-quality-value (TQV) data point. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ingest-api.html">Ingesting
         * data using the API</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To
         * identify an asset property, you must specify one of the following:</p> <ul> <li>
         * <p>The <code>assetId</code> and <code>propertyId</code> of an asset
         * property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a data stream
         * alias (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). To
         * define an asset property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul>  <p>With respect to Unix epoch time, AWS IoT SiteWise
         * accepts only TQVs that have a timestamp of no more than 15 minutes in the past
         * and no more than 5 minutes in the future. AWS IoT SiteWise rejects timestamps
         * outside of the inclusive range of [-15, +5] minutes and returns a
         * <code>TimestampOutOfRangeException</code> error.</p> <p>For each asset property,
         * AWS IoT SiteWise overwrites TQVs with duplicate timestamps unless the newer TQV
         * has a different quality. For example, if you store a TQV <code>{T1, GOOD,
         * V1}</code>, then storing <code>{T1, GOOD, V2}</code> replaces the existing
         * TQV.</p>  <p>AWS IoT SiteWise authorizes access to each
         * <code>BatchPutAssetPropertyValue</code> entry individually. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-batchputassetpropertyvalue-action">BatchPutAssetPropertyValue
         * authorization</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchPutAssetPropertyValue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutAssetPropertyValueAsync(const Model::BatchPutAssetPropertyValueRequest& request, const BatchPutAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an access policy that grants the specified identity (AWS SSO user,
         * AWS SSO group, or IAM user) access to the specified AWS IoT SiteWise Monitor
         * portal or project resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPolicyOutcome CreateAccessPolicy(const Model::CreateAccessPolicyRequest& request) const;

        /**
         * <p>Creates an access policy that grants the specified identity (AWS SSO user,
         * AWS SSO group, or IAM user) access to the specified AWS IoT SiteWise Monitor
         * portal or project resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAccessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPolicyOutcomeCallable CreateAccessPolicyCallable(const Model::CreateAccessPolicyRequest& request) const;

        /**
         * <p>Creates an access policy that grants the specified identity (AWS SSO user,
         * AWS SSO group, or IAM user) access to the specified AWS IoT SiteWise Monitor
         * portal or project resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAccessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPolicyAsync(const Model::CreateAccessPolicyRequest& request, const CreateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an asset from an existing asset model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-assets.html">Creating
         * assets</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest& request) const;

        /**
         * <p>Creates an asset from an existing asset model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-assets.html">Creating
         * assets</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAsset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssetOutcomeCallable CreateAssetCallable(const Model::CreateAssetRequest& request) const;

        /**
         * <p>Creates an asset from an existing asset model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-assets.html">Creating
         * assets</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAsset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssetAsync(const Model::CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an asset model from specified property and hierarchy definitions. You
         * create assets from asset models. With asset models, you can easily create assets
         * of the same type that have standardized definitions. Each asset created from a
         * model inherits the asset model's property and hierarchy definitions. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/define-models.html">Defining
         * asset models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetModelOutcome CreateAssetModel(const Model::CreateAssetModelRequest& request) const;

        /**
         * <p>Creates an asset model from specified property and hierarchy definitions. You
         * create assets from asset models. With asset models, you can easily create assets
         * of the same type that have standardized definitions. Each asset created from a
         * model inherits the asset model's property and hierarchy definitions. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/define-models.html">Defining
         * asset models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAssetModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssetModelOutcomeCallable CreateAssetModelCallable(const Model::CreateAssetModelRequest& request) const;

        /**
         * <p>Creates an asset model from specified property and hierarchy definitions. You
         * create assets from asset models. With asset models, you can easily create assets
         * of the same type that have standardized definitions. Each asset created from a
         * model inherits the asset model's property and hierarchy definitions. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/define-models.html">Defining
         * asset models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAssetModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssetModelAsync(const Model::CreateAssetModelRequest& request, const CreateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dashboard in an AWS IoT SiteWise Monitor project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;

        /**
         * <p>Creates a dashboard in an AWS IoT SiteWise Monitor project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDashboardOutcomeCallable CreateDashboardCallable(const Model::CreateDashboardRequest& request) const;

        /**
         * <p>Creates a dashboard in an AWS IoT SiteWise Monitor project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDashboardAsync(const Model::CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a gateway, which is a virtual or edge device that delivers industrial
         * data streams from local servers to AWS IoT SiteWise. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gateway-connector.html">Ingesting
         * data using a gateway</a> in the <i>AWS IoT SiteWise User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayOutcome CreateGateway(const Model::CreateGatewayRequest& request) const;

        /**
         * <p>Creates a gateway, which is a virtual or edge device that delivers industrial
         * data streams from local servers to AWS IoT SiteWise. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gateway-connector.html">Ingesting
         * data using a gateway</a> in the <i>AWS IoT SiteWise User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const Model::CreateGatewayRequest& request) const;

        /**
         * <p>Creates a gateway, which is a virtual or edge device that delivers industrial
         * data streams from local servers to AWS IoT SiteWise. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gateway-connector.html">Ingesting
         * data using a gateway</a> in the <i>AWS IoT SiteWise User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGatewayAsync(const Model::CreateGatewayRequest& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a portal, which can contain projects and dashboards. AWS IoT SiteWise
         * Monitor uses AWS SSO or IAM to authenticate portal users and manage user
         * permissions.</p>  <p>Before you can sign in to a new portal, you must add
         * at least one identity to that portal. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/administer-portals.html#portal-change-admins">Adding
         * or removing portal administrators</a> in the <i>AWS IoT SiteWise User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortalOutcome CreatePortal(const Model::CreatePortalRequest& request) const;

        /**
         * <p>Creates a portal, which can contain projects and dashboards. AWS IoT SiteWise
         * Monitor uses AWS SSO or IAM to authenticate portal users and manage user
         * permissions.</p>  <p>Before you can sign in to a new portal, you must add
         * at least one identity to that portal. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/administer-portals.html#portal-change-admins">Adding
         * or removing portal administrators</a> in the <i>AWS IoT SiteWise User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePortal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortalOutcomeCallable CreatePortalCallable(const Model::CreatePortalRequest& request) const;

        /**
         * <p>Creates a portal, which can contain projects and dashboards. AWS IoT SiteWise
         * Monitor uses AWS SSO or IAM to authenticate portal users and manage user
         * permissions.</p>  <p>Before you can sign in to a new portal, you must add
         * at least one identity to that portal. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/administer-portals.html#portal-change-admins">Adding
         * or removing portal administrators</a> in the <i>AWS IoT SiteWise User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePortal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortalAsync(const Model::CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a pre-signed URL to a portal. Use this operation to create URLs to
         * portals that use AWS Identity and Access Management (IAM) to authenticate users.
         * An IAM user with access to a portal can call this API to get a URL to that
         * portal. The URL contains an authentication token that lets the IAM user access
         * the portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePresignedPortalUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedPortalUrlOutcome CreatePresignedPortalUrl(const Model::CreatePresignedPortalUrlRequest& request) const;

        /**
         * <p>Creates a pre-signed URL to a portal. Use this operation to create URLs to
         * portals that use AWS Identity and Access Management (IAM) to authenticate users.
         * An IAM user with access to a portal can call this API to get a URL to that
         * portal. The URL contains an authentication token that lets the IAM user access
         * the portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePresignedPortalUrl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresignedPortalUrlOutcomeCallable CreatePresignedPortalUrlCallable(const Model::CreatePresignedPortalUrlRequest& request) const;

        /**
         * <p>Creates a pre-signed URL to a portal. Use this operation to create URLs to
         * portals that use AWS Identity and Access Management (IAM) to authenticate users.
         * An IAM user with access to a portal can call this API to get a URL to that
         * portal. The URL contains an authentication token that lets the IAM user access
         * the portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePresignedPortalUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresignedPortalUrlAsync(const Model::CreatePresignedPortalUrlRequest& request, const CreatePresignedPortalUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a project in the specified portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a project in the specified portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a project in the specified portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an access policy that grants the specified identity access to the
         * specified AWS IoT SiteWise Monitor resource. You can use this operation to
         * revoke access to an AWS IoT SiteWise Monitor resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPolicyOutcome DeleteAccessPolicy(const Model::DeleteAccessPolicyRequest& request) const;

        /**
         * <p>Deletes an access policy that grants the specified identity access to the
         * specified AWS IoT SiteWise Monitor resource. You can use this operation to
         * revoke access to an AWS IoT SiteWise Monitor resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAccessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPolicyOutcomeCallable DeleteAccessPolicyCallable(const Model::DeleteAccessPolicyRequest& request) const;

        /**
         * <p>Deletes an access policy that grants the specified identity access to the
         * specified AWS IoT SiteWise Monitor resource. You can use this operation to
         * revoke access to an AWS IoT SiteWise Monitor resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAccessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPolicyAsync(const Model::DeleteAccessPolicyRequest& request, const DeleteAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an asset. This action can't be undone. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>. </p> 
         * <p>You can't delete an asset that's associated to another asset. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DisassociateAssets.html">DisassociateAssets</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;

        /**
         * <p>Deletes an asset. This action can't be undone. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>. </p> 
         * <p>You can't delete an asset that's associated to another asset. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DisassociateAssets.html">DisassociateAssets</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAsset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const Model::DeleteAssetRequest& request) const;

        /**
         * <p>Deletes an asset. This action can't be undone. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>. </p> 
         * <p>You can't delete an asset that's associated to another asset. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DisassociateAssets.html">DisassociateAssets</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAsset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssetAsync(const Model::DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an asset model. This action can't be undone. You must delete all
         * assets created from an asset model before you can delete the model. Also, you
         * can't delete an asset model if a parent asset model exists that contains a
         * property formula expression that depends on the asset model that you want to
         * delete. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetModelOutcome DeleteAssetModel(const Model::DeleteAssetModelRequest& request) const;

        /**
         * <p>Deletes an asset model. This action can't be undone. You must delete all
         * assets created from an asset model before you can delete the model. Also, you
         * can't delete an asset model if a parent asset model exists that contains a
         * property formula expression that depends on the asset model that you want to
         * delete. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAssetModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssetModelOutcomeCallable DeleteAssetModelCallable(const Model::DeleteAssetModelRequest& request) const;

        /**
         * <p>Deletes an asset model. This action can't be undone. You must delete all
         * assets created from an asset model before you can delete the model. Also, you
         * can't delete an asset model if a parent asset model exists that contains a
         * property formula expression that depends on the asset model that you want to
         * delete. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAssetModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssetModelAsync(const Model::DeleteAssetModelRequest& request, const DeleteAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dashboard from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;

        /**
         * <p>Deletes a dashboard from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDashboardOutcomeCallable DeleteDashboardCallable(const Model::DeleteDashboardRequest& request) const;

        /**
         * <p>Deletes a dashboard from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDashboardAsync(const Model::DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a gateway from AWS IoT SiteWise. When you delete a gateway, some of
         * the gateway's files remain in your gateway's file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

        /**
         * <p>Deletes a gateway from AWS IoT SiteWise. When you delete a gateway, some of
         * the gateway's files remain in your gateway's file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;

        /**
         * <p>Deletes a gateway from AWS IoT SiteWise. When you delete a gateway, some of
         * the gateway's files remain in your gateway's file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a portal from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeletePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortalOutcome DeletePortal(const Model::DeletePortalRequest& request) const;

        /**
         * <p>Deletes a portal from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeletePortal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortalOutcomeCallable DeletePortalCallable(const Model::DeletePortalRequest& request) const;

        /**
         * <p>Deletes a portal from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeletePortal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortalAsync(const Model::DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a project from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes a project from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes a project from AWS IoT SiteWise Monitor.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an access policy, which specifies an identity's access to an AWS
         * IoT SiteWise Monitor portal or project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccessPolicyOutcome DescribeAccessPolicy(const Model::DescribeAccessPolicyRequest& request) const;

        /**
         * <p>Describes an access policy, which specifies an identity's access to an AWS
         * IoT SiteWise Monitor portal or project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAccessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccessPolicyOutcomeCallable DescribeAccessPolicyCallable(const Model::DescribeAccessPolicyRequest& request) const;

        /**
         * <p>Describes an access policy, which specifies an identity's access to an AWS
         * IoT SiteWise Monitor portal or project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAccessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccessPolicyAsync(const Model::DescribeAccessPolicyRequest& request, const DescribeAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest& request) const;

        /**
         * <p>Retrieves information about an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAsset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssetOutcomeCallable DescribeAssetCallable(const Model::DescribeAssetRequest& request) const;

        /**
         * <p>Retrieves information about an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAsset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssetAsync(const Model::DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an asset model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetModelOutcome DescribeAssetModel(const Model::DescribeAssetModelRequest& request) const;

        /**
         * <p>Retrieves information about an asset model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssetModelOutcomeCallable DescribeAssetModelCallable(const Model::DescribeAssetModelRequest& request) const;

        /**
         * <p>Retrieves information about an asset model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssetModelAsync(const Model::DescribeAssetModelRequest& request, const DescribeAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an asset property.</p>  <p>When you call
         * this operation for an attribute property, this response includes the default
         * attribute value that you define in the asset model. If you update the default
         * value in the model, this operation's response includes the new default
         * value.</p>  <p>This operation doesn't return the value of the asset
         * property. To get the value of an asset property, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_GetAssetPropertyValue.html">GetAssetPropertyValue</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetProperty">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetPropertyOutcome DescribeAssetProperty(const Model::DescribeAssetPropertyRequest& request) const;

        /**
         * <p>Retrieves information about an asset property.</p>  <p>When you call
         * this operation for an attribute property, this response includes the default
         * attribute value that you define in the asset model. If you update the default
         * value in the model, this operation's response includes the new default
         * value.</p>  <p>This operation doesn't return the value of the asset
         * property. To get the value of an asset property, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_GetAssetPropertyValue.html">GetAssetPropertyValue</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetProperty">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssetPropertyOutcomeCallable DescribeAssetPropertyCallable(const Model::DescribeAssetPropertyRequest& request) const;

        /**
         * <p>Retrieves information about an asset property.</p>  <p>When you call
         * this operation for an attribute property, this response includes the default
         * attribute value that you define in the asset model. If you update the default
         * value in the model, this operation's response includes the new default
         * value.</p>  <p>This operation doesn't return the value of the asset
         * property. To get the value of an asset property, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_GetAssetPropertyValue.html">GetAssetPropertyValue</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetProperty">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssetPropertyAsync(const Model::DescribeAssetPropertyRequest& request, const DescribeAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest& request) const;

        /**
         * <p>Retrieves information about a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDashboardOutcomeCallable DescribeDashboardCallable(const Model::DescribeDashboardRequest& request) const;

        /**
         * <p>Retrieves information about a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDashboardAsync(const Model::DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the default encryption configuration for the AWS
         * account in the default or specified region. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDefaultEncryptionConfigurationOutcome DescribeDefaultEncryptionConfiguration(const Model::DescribeDefaultEncryptionConfigurationRequest& request) const;

        /**
         * <p>Retrieves information about the default encryption configuration for the AWS
         * account in the default or specified region. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDefaultEncryptionConfigurationOutcomeCallable DescribeDefaultEncryptionConfigurationCallable(const Model::DescribeDefaultEncryptionConfigurationRequest& request) const;

        /**
         * <p>Retrieves information about the default encryption configuration for the AWS
         * account in the default or specified region. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDefaultEncryptionConfigurationAsync(const Model::DescribeDefaultEncryptionConfigurationRequest& request, const DescribeDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayOutcome DescribeGateway(const Model::DescribeGatewayRequest& request) const;

        /**
         * <p>Retrieves information about a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGatewayOutcomeCallable DescribeGatewayCallable(const Model::DescribeGatewayRequest& request) const;

        /**
         * <p>Retrieves information about a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGatewayAsync(const Model::DescribeGatewayRequest& request, const DescribeGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a gateway capability configuration. Each gateway
         * capability defines data sources for a gateway. A capability configuration can
         * contain multiple data source configurations. If you define OPC-UA sources for a
         * gateway in the AWS IoT SiteWise console, all of your OPC-UA sources are stored
         * in one capability configuration. To list all capability configurations for a
         * gateway, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGateway.html">DescribeGateway</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGatewayCapabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayCapabilityConfigurationOutcome DescribeGatewayCapabilityConfiguration(const Model::DescribeGatewayCapabilityConfigurationRequest& request) const;

        /**
         * <p>Retrieves information about a gateway capability configuration. Each gateway
         * capability defines data sources for a gateway. A capability configuration can
         * contain multiple data source configurations. If you define OPC-UA sources for a
         * gateway in the AWS IoT SiteWise console, all of your OPC-UA sources are stored
         * in one capability configuration. To list all capability configurations for a
         * gateway, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGateway.html">DescribeGateway</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGatewayCapabilityConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGatewayCapabilityConfigurationOutcomeCallable DescribeGatewayCapabilityConfigurationCallable(const Model::DescribeGatewayCapabilityConfigurationRequest& request) const;

        /**
         * <p>Retrieves information about a gateway capability configuration. Each gateway
         * capability defines data sources for a gateway. A capability configuration can
         * contain multiple data source configurations. If you define OPC-UA sources for a
         * gateway in the AWS IoT SiteWise console, all of your OPC-UA sources are stored
         * in one capability configuration. To list all capability configurations for a
         * gateway, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGateway.html">DescribeGateway</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGatewayCapabilityConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGatewayCapabilityConfigurationAsync(const Model::DescribeGatewayCapabilityConfigurationRequest& request, const DescribeGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current AWS IoT SiteWise logging options.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * <p>Retrieves the current AWS IoT SiteWise logging options.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoggingOptionsOutcomeCallable DescribeLoggingOptionsCallable(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * <p>Retrieves the current AWS IoT SiteWise logging options.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingOptionsAsync(const Model::DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortalOutcome DescribePortal(const Model::DescribePortalRequest& request) const;

        /**
         * <p>Retrieves information about a portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePortal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePortalOutcomeCallable DescribePortalCallable(const Model::DescribePortalRequest& request) const;

        /**
         * <p>Retrieves information about a portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePortal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePortalAsync(const Model::DescribePortalRequest& request, const DescribePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * <p>Retrieves information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * <p>Retrieves information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a child asset from the given parent asset through a hierarchy
         * defined in the parent asset's model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAssetsOutcome DisassociateAssets(const Model::DisassociateAssetsRequest& request) const;

        /**
         * <p>Disassociates a child asset from the given parent asset through a hierarchy
         * defined in the parent asset's model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAssetsOutcomeCallable DisassociateAssetsCallable(const Model::DisassociateAssetsRequest& request) const;

        /**
         * <p>Disassociates a child asset from the given parent asset through a hierarchy
         * defined in the parent asset's model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAssetsAsync(const Model::DisassociateAssetsRequest& request, const DisassociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets aggregated values for an asset property. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
         * aggregates</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To identify an
         * asset property, you must specify one of the following:</p> <ul> <li> <p>The
         * <code>assetId</code> and <code>propertyId</code> of an asset property.</p> </li>
         * <li> <p>A <code>propertyAlias</code>, which is a data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyAggregates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetPropertyAggregatesOutcome GetAssetPropertyAggregates(const Model::GetAssetPropertyAggregatesRequest& request) const;

        /**
         * <p>Gets aggregated values for an asset property. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
         * aggregates</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To identify an
         * asset property, you must specify one of the following:</p> <ul> <li> <p>The
         * <code>assetId</code> and <code>propertyId</code> of an asset property.</p> </li>
         * <li> <p>A <code>propertyAlias</code>, which is a data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyAggregates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssetPropertyAggregatesOutcomeCallable GetAssetPropertyAggregatesCallable(const Model::GetAssetPropertyAggregatesRequest& request) const;

        /**
         * <p>Gets aggregated values for an asset property. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
         * aggregates</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To identify an
         * asset property, you must specify one of the following:</p> <ul> <li> <p>The
         * <code>assetId</code> and <code>propertyId</code> of an asset property.</p> </li>
         * <li> <p>A <code>propertyAlias</code>, which is a data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyAggregates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssetPropertyAggregatesAsync(const Model::GetAssetPropertyAggregatesRequest& request, const GetAssetPropertyAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an asset property's current value. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#current-values">Querying
         * current values</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To identify
         * an asset property, you must specify one of the following:</p> <ul> <li> <p>The
         * <code>assetId</code> and <code>propertyId</code> of an asset property.</p> </li>
         * <li> <p>A <code>propertyAlias</code>, which is a data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyValue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetPropertyValueOutcome GetAssetPropertyValue(const Model::GetAssetPropertyValueRequest& request) const;

        /**
         * <p>Gets an asset property's current value. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#current-values">Querying
         * current values</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To identify
         * an asset property, you must specify one of the following:</p> <ul> <li> <p>The
         * <code>assetId</code> and <code>propertyId</code> of an asset property.</p> </li>
         * <li> <p>A <code>propertyAlias</code>, which is a data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyValue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssetPropertyValueOutcomeCallable GetAssetPropertyValueCallable(const Model::GetAssetPropertyValueRequest& request) const;

        /**
         * <p>Gets an asset property's current value. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#current-values">Querying
         * current values</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To identify
         * an asset property, you must specify one of the following:</p> <ul> <li> <p>The
         * <code>assetId</code> and <code>propertyId</code> of an asset property.</p> </li>
         * <li> <p>A <code>propertyAlias</code>, which is a data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyValue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssetPropertyValueAsync(const Model::GetAssetPropertyValueRequest& request, const GetAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the history of an asset property's values. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#historical-values">Querying
         * historical values</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To
         * identify an asset property, you must specify one of the following:</p> <ul> <li>
         * <p>The <code>assetId</code> and <code>propertyId</code> of an asset
         * property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a data stream
         * alias (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). To
         * define an asset property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyValueHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetPropertyValueHistoryOutcome GetAssetPropertyValueHistory(const Model::GetAssetPropertyValueHistoryRequest& request) const;

        /**
         * <p>Gets the history of an asset property's values. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#historical-values">Querying
         * historical values</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To
         * identify an asset property, you must specify one of the following:</p> <ul> <li>
         * <p>The <code>assetId</code> and <code>propertyId</code> of an asset
         * property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a data stream
         * alias (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). To
         * define an asset property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyValueHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssetPropertyValueHistoryOutcomeCallable GetAssetPropertyValueHistoryCallable(const Model::GetAssetPropertyValueHistoryRequest& request) const;

        /**
         * <p>Gets the history of an asset property's values. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#historical-values">Querying
         * historical values</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>To
         * identify an asset property, you must specify one of the following:</p> <ul> <li>
         * <p>The <code>assetId</code> and <code>propertyId</code> of an asset
         * property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a data stream
         * alias (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). To
         * define an asset property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyValueHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssetPropertyValueHistoryAsync(const Model::GetAssetPropertyValueHistoryRequest& request, const GetAssetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of access policies for an identity (an AWS SSO
         * user, an AWS SSO group, or an IAM user) or an AWS IoT SiteWise Monitor resource
         * (a portal or project).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAccessPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPoliciesOutcome ListAccessPolicies(const Model::ListAccessPoliciesRequest& request) const;

        /**
         * <p>Retrieves a paginated list of access policies for an identity (an AWS SSO
         * user, an AWS SSO group, or an IAM user) or an AWS IoT SiteWise Monitor resource
         * (a portal or project).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAccessPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPoliciesOutcomeCallable ListAccessPoliciesCallable(const Model::ListAccessPoliciesRequest& request) const;

        /**
         * <p>Retrieves a paginated list of access policies for an identity (an AWS SSO
         * user, an AWS SSO group, or an IAM user) or an AWS IoT SiteWise Monitor resource
         * (a portal or project).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAccessPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPoliciesAsync(const Model::ListAccessPoliciesRequest& request, const ListAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of summaries of all asset models.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetModelsOutcome ListAssetModels(const Model::ListAssetModelsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of summaries of all asset models.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetModelsOutcomeCallable ListAssetModelsCallable(const Model::ListAssetModelsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of summaries of all asset models.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssetModelsAsync(const Model::ListAssetModelsRequest& request, const ListAssetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of asset summaries.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p>List assets based on a specific
         * asset model.</p> </li> <li> <p>List top-level assets.</p> </li> </ul> <p>You
         * can't use this operation to list all assets. To retrieve summaries for all of
         * your assets, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_ListAssetModels.html">ListAssetModels</a>
         * to get all of your asset model IDs. Then, use ListAssets to get all assets for
         * each asset model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetsOutcome ListAssets(const Model::ListAssetsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of asset summaries.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p>List assets based on a specific
         * asset model.</p> </li> <li> <p>List top-level assets.</p> </li> </ul> <p>You
         * can't use this operation to list all assets. To retrieve summaries for all of
         * your assets, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_ListAssetModels.html">ListAssetModels</a>
         * to get all of your asset model IDs. Then, use ListAssets to get all assets for
         * each asset model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetsOutcomeCallable ListAssetsCallable(const Model::ListAssetsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of asset summaries.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p>List assets based on a specific
         * asset model.</p> </li> <li> <p>List top-level assets.</p> </li> </ul> <p>You
         * can't use this operation to list all assets. To retrieve summaries for all of
         * your assets, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_ListAssetModels.html">ListAssetModels</a>
         * to get all of your asset model IDs. Then, use ListAssets to get all assets for
         * each asset model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssetsAsync(const Model::ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of associated assets.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p>List child assets associated to
         * a parent asset by a hierarchy that you specify.</p> </li> <li> <p>List an
         * asset's parent asset.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssociatedAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedAssetsOutcome ListAssociatedAssets(const Model::ListAssociatedAssetsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of associated assets.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p>List child assets associated to
         * a parent asset by a hierarchy that you specify.</p> </li> <li> <p>List an
         * asset's parent asset.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssociatedAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedAssetsOutcomeCallable ListAssociatedAssetsCallable(const Model::ListAssociatedAssetsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of associated assets.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p>List child assets associated to
         * a parent asset by a hierarchy that you specify.</p> </li> <li> <p>List an
         * asset's parent asset.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssociatedAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedAssetsAsync(const Model::ListAssociatedAssetsRequest& request, const ListAssociatedAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of dashboards for an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of dashboards for an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDashboards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const Model::ListDashboardsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of dashboards for an AWS IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDashboards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDashboardsAsync(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;

        /**
         * <p>Retrieves a paginated list of gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const Model::ListGatewaysRequest& request) const;

        /**
         * <p>Retrieves a paginated list of gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of AWS IoT SiteWise Monitor portals.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPortals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortalsOutcome ListPortals(const Model::ListPortalsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of AWS IoT SiteWise Monitor portals.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPortals">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortalsOutcomeCallable ListPortalsCallable(const Model::ListPortalsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of AWS IoT SiteWise Monitor portals.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPortals">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortalsAsync(const Model::ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of assets associated with an AWS IoT SiteWise
         * Monitor project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectAssetsOutcome ListProjectAssets(const Model::ListProjectAssetsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of assets associated with an AWS IoT SiteWise
         * Monitor project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjectAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectAssetsOutcomeCallable ListProjectAssetsCallable(const Model::ListProjectAssetsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of assets associated with an AWS IoT SiteWise
         * Monitor project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjectAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectAssetsAsync(const Model::ListProjectAssetsRequest& request, const ListProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of projects for an AWS IoT SiteWise Monitor
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of projects for an AWS IoT SiteWise Monitor
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Retrieves a paginated list of projects for an AWS IoT SiteWise Monitor
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of tags for an AWS IoT SiteWise resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of tags for an AWS IoT SiteWise resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of tags for an AWS IoT SiteWise resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the default encryption configuration for the AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDefaultEncryptionConfigurationOutcome PutDefaultEncryptionConfiguration(const Model::PutDefaultEncryptionConfigurationRequest& request) const;

        /**
         * <p>Sets the default encryption configuration for the AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDefaultEncryptionConfigurationOutcomeCallable PutDefaultEncryptionConfigurationCallable(const Model::PutDefaultEncryptionConfigurationRequest& request) const;

        /**
         * <p>Sets the default encryption configuration for the AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDefaultEncryptionConfigurationAsync(const Model::PutDefaultEncryptionConfigurationRequest& request, const PutDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets logging options for AWS IoT SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * <p>Sets logging options for AWS IoT SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutLoggingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * <p>Sets logging options for AWS IoT SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutLoggingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLoggingOptionsAsync(const Model::PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to an AWS IoT SiteWise resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to an AWS IoT SiteWise resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to an AWS IoT SiteWise resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from an AWS IoT SiteWise resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an AWS IoT SiteWise resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an AWS IoT SiteWise resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing access policy that specifies an identity's access to an
         * AWS IoT SiteWise Monitor portal or project resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessPolicyOutcome UpdateAccessPolicy(const Model::UpdateAccessPolicyRequest& request) const;

        /**
         * <p>Updates an existing access policy that specifies an identity's access to an
         * AWS IoT SiteWise Monitor portal or project resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAccessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccessPolicyOutcomeCallable UpdateAccessPolicyCallable(const Model::UpdateAccessPolicyRequest& request) const;

        /**
         * <p>Updates an existing access policy that specifies an identity's access to an
         * AWS IoT SiteWise Monitor portal or project resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAccessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccessPolicyAsync(const Model::UpdateAccessPolicyRequest& request, const UpdateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an asset's name. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetOutcome UpdateAsset(const Model::UpdateAssetRequest& request) const;

        /**
         * <p>Updates an asset's name. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAsset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssetOutcomeCallable UpdateAssetCallable(const Model::UpdateAssetRequest& request) const;

        /**
         * <p>Updates an asset's name. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAsset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssetAsync(const Model::UpdateAssetRequest& request, const UpdateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an asset model and all of the assets that were created from the
         * model. Each asset created from the model inherits the updated asset model's
         * property and hierarchy definitions. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> 
         * <p>This operation overwrites the existing model with the provided model. To
         * avoid deleting your asset model's properties or hierarchies, you must include
         * their IDs and definitions in the updated asset model payload. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>.</p>
         * <p>If you remove a property from an asset model, AWS IoT SiteWise deletes all
         * previous data for that property. If you remove a hierarchy definition from an
         * asset model, AWS IoT SiteWise disassociates every asset associated with that
         * hierarchy. You can't change the type or data type of an existing property.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetModelOutcome UpdateAssetModel(const Model::UpdateAssetModelRequest& request) const;

        /**
         * <p>Updates an asset model and all of the assets that were created from the
         * model. Each asset created from the model inherits the updated asset model's
         * property and hierarchy definitions. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> 
         * <p>This operation overwrites the existing model with the provided model. To
         * avoid deleting your asset model's properties or hierarchies, you must include
         * their IDs and definitions in the updated asset model payload. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>.</p>
         * <p>If you remove a property from an asset model, AWS IoT SiteWise deletes all
         * previous data for that property. If you remove a hierarchy definition from an
         * asset model, AWS IoT SiteWise disassociates every asset associated with that
         * hierarchy. You can't change the type or data type of an existing property.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssetModelOutcomeCallable UpdateAssetModelCallable(const Model::UpdateAssetModelRequest& request) const;

        /**
         * <p>Updates an asset model and all of the assets that were created from the
         * model. Each asset created from the model inherits the updated asset model's
         * property and hierarchy definitions. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
         * assets and models</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> 
         * <p>This operation overwrites the existing model with the provided model. To
         * avoid deleting your asset model's properties or hierarchies, you must include
         * their IDs and definitions in the updated asset model payload. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>.</p>
         * <p>If you remove a property from an asset model, AWS IoT SiteWise deletes all
         * previous data for that property. If you remove a hierarchy definition from an
         * asset model, AWS IoT SiteWise disassociates every asset associated with that
         * hierarchy. You can't change the type or data type of an existing property.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssetModelAsync(const Model::UpdateAssetModelRequest& request, const UpdateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an asset property's alias and notification state.</p> 
         * <p>This operation overwrites the property's existing alias and notification
         * state. To keep your existing property's alias or notification state, you must
         * include the existing values in the UpdateAssetProperty request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetProperty.html">DescribeAssetProperty</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetProperty">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetPropertyOutcome UpdateAssetProperty(const Model::UpdateAssetPropertyRequest& request) const;

        /**
         * <p>Updates an asset property's alias and notification state.</p> 
         * <p>This operation overwrites the property's existing alias and notification
         * state. To keep your existing property's alias or notification state, you must
         * include the existing values in the UpdateAssetProperty request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetProperty.html">DescribeAssetProperty</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetProperty">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssetPropertyOutcomeCallable UpdateAssetPropertyCallable(const Model::UpdateAssetPropertyRequest& request) const;

        /**
         * <p>Updates an asset property's alias and notification state.</p> 
         * <p>This operation overwrites the property's existing alias and notification
         * state. To keep your existing property's alias or notification state, you must
         * include the existing values in the UpdateAssetProperty request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetProperty.html">DescribeAssetProperty</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetProperty">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssetPropertyAsync(const Model::UpdateAssetPropertyRequest& request, const UpdateAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDashboardOutcomeCallable UpdateDashboardCallable(const Model::UpdateDashboardRequest& request) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDashboardAsync(const Model::UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a gateway's name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;

        /**
         * <p>Updates a gateway's name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayOutcomeCallable UpdateGatewayCallable(const Model::UpdateGatewayRequest& request) const;

        /**
         * <p>Updates a gateway's name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayAsync(const Model::UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a gateway capability configuration or defines a new capability
         * configuration. Each gateway capability defines data sources for a gateway. A
         * capability configuration can contain multiple data source configurations. If you
         * define OPC-UA sources for a gateway in the AWS IoT SiteWise console, all of your
         * OPC-UA sources are stored in one capability configuration. To list all
         * capability configurations for a gateway, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGateway.html">DescribeGateway</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGatewayCapabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayCapabilityConfigurationOutcome UpdateGatewayCapabilityConfiguration(const Model::UpdateGatewayCapabilityConfigurationRequest& request) const;

        /**
         * <p>Updates a gateway capability configuration or defines a new capability
         * configuration. Each gateway capability defines data sources for a gateway. A
         * capability configuration can contain multiple data source configurations. If you
         * define OPC-UA sources for a gateway in the AWS IoT SiteWise console, all of your
         * OPC-UA sources are stored in one capability configuration. To list all
         * capability configurations for a gateway, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGateway.html">DescribeGateway</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGatewayCapabilityConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayCapabilityConfigurationOutcomeCallable UpdateGatewayCapabilityConfigurationCallable(const Model::UpdateGatewayCapabilityConfigurationRequest& request) const;

        /**
         * <p>Updates a gateway capability configuration or defines a new capability
         * configuration. Each gateway capability defines data sources for a gateway. A
         * capability configuration can contain multiple data source configurations. If you
         * define OPC-UA sources for a gateway in the AWS IoT SiteWise console, all of your
         * OPC-UA sources are stored in one capability configuration. To list all
         * capability configurations for a gateway, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGateway.html">DescribeGateway</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGatewayCapabilityConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayCapabilityConfigurationAsync(const Model::UpdateGatewayCapabilityConfigurationRequest& request, const UpdateGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortalOutcome UpdatePortal(const Model::UpdatePortalRequest& request) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdatePortal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePortalOutcomeCallable UpdatePortalCallable(const Model::UpdatePortalRequest& request) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdatePortal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePortalAsync(const Model::UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Updates an AWS IoT SiteWise Monitor project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateAssetsAsyncHelper(const Model::AssociateAssetsRequest& request, const AssociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchAssociateProjectAssetsAsyncHelper(const Model::BatchAssociateProjectAssetsRequest& request, const BatchAssociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisassociateProjectAssetsAsyncHelper(const Model::BatchDisassociateProjectAssetsRequest& request, const BatchDisassociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchPutAssetPropertyValueAsyncHelper(const Model::BatchPutAssetPropertyValueRequest& request, const BatchPutAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccessPolicyAsyncHelper(const Model::CreateAccessPolicyRequest& request, const CreateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssetAsyncHelper(const Model::CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssetModelAsyncHelper(const Model::CreateAssetModelRequest& request, const CreateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDashboardAsyncHelper(const Model::CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGatewayAsyncHelper(const Model::CreateGatewayRequest& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePortalAsyncHelper(const Model::CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePresignedPortalUrlAsyncHelper(const Model::CreatePresignedPortalUrlRequest& request, const CreatePresignedPortalUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessPolicyAsyncHelper(const Model::DeleteAccessPolicyRequest& request, const DeleteAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssetAsyncHelper(const Model::DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssetModelAsyncHelper(const Model::DeleteAssetModelRequest& request, const DeleteAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDashboardAsyncHelper(const Model::DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGatewayAsyncHelper(const Model::DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePortalAsyncHelper(const Model::DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccessPolicyAsyncHelper(const Model::DescribeAccessPolicyRequest& request, const DescribeAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssetAsyncHelper(const Model::DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssetModelAsyncHelper(const Model::DescribeAssetModelRequest& request, const DescribeAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssetPropertyAsyncHelper(const Model::DescribeAssetPropertyRequest& request, const DescribeAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDashboardAsyncHelper(const Model::DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDefaultEncryptionConfigurationAsyncHelper(const Model::DescribeDefaultEncryptionConfigurationRequest& request, const DescribeDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGatewayAsyncHelper(const Model::DescribeGatewayRequest& request, const DescribeGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGatewayCapabilityConfigurationAsyncHelper(const Model::DescribeGatewayCapabilityConfigurationRequest& request, const DescribeGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoggingOptionsAsyncHelper(const Model::DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePortalAsyncHelper(const Model::DescribePortalRequest& request, const DescribePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProjectAsyncHelper(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateAssetsAsyncHelper(const Model::DisassociateAssetsRequest& request, const DisassociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAssetPropertyAggregatesAsyncHelper(const Model::GetAssetPropertyAggregatesRequest& request, const GetAssetPropertyAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAssetPropertyValueAsyncHelper(const Model::GetAssetPropertyValueRequest& request, const GetAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAssetPropertyValueHistoryAsyncHelper(const Model::GetAssetPropertyValueHistoryRequest& request, const GetAssetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccessPoliciesAsyncHelper(const Model::ListAccessPoliciesRequest& request, const ListAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssetModelsAsyncHelper(const Model::ListAssetModelsRequest& request, const ListAssetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssetsAsyncHelper(const Model::ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociatedAssetsAsyncHelper(const Model::ListAssociatedAssetsRequest& request, const ListAssociatedAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDashboardsAsyncHelper(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGatewaysAsyncHelper(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortalsAsyncHelper(const Model::ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectAssetsAsyncHelper(const Model::ListProjectAssetsRequest& request, const ListProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDefaultEncryptionConfigurationAsyncHelper(const Model::PutDefaultEncryptionConfigurationRequest& request, const PutDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLoggingOptionsAsyncHelper(const Model::PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccessPolicyAsyncHelper(const Model::UpdateAccessPolicyRequest& request, const UpdateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssetAsyncHelper(const Model::UpdateAssetRequest& request, const UpdateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssetModelAsyncHelper(const Model::UpdateAssetModelRequest& request, const UpdateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssetPropertyAsyncHelper(const Model::UpdateAssetPropertyRequest& request, const UpdateAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDashboardAsyncHelper(const Model::UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGatewayAsyncHelper(const Model::UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGatewayCapabilityConfigurationAsyncHelper(const Model::UpdateGatewayCapabilityConfigurationRequest& request, const UpdateGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePortalAsyncHelper(const Model::UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_baseUri;
      Aws::String m_scheme;
      bool m_enableHostPrefixInjection;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTSiteWise
} // namespace Aws
