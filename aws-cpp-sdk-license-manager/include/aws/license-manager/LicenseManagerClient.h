/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/AcceptGrantResult.h>
#include <aws/license-manager/model/CheckInLicenseResult.h>
#include <aws/license-manager/model/CheckoutBorrowLicenseResult.h>
#include <aws/license-manager/model/CheckoutLicenseResult.h>
#include <aws/license-manager/model/CreateGrantResult.h>
#include <aws/license-manager/model/CreateGrantVersionResult.h>
#include <aws/license-manager/model/CreateLicenseResult.h>
#include <aws/license-manager/model/CreateLicenseConfigurationResult.h>
#include <aws/license-manager/model/CreateLicenseConversionTaskForResourceResult.h>
#include <aws/license-manager/model/CreateLicenseManagerReportGeneratorResult.h>
#include <aws/license-manager/model/CreateLicenseVersionResult.h>
#include <aws/license-manager/model/CreateTokenResult.h>
#include <aws/license-manager/model/DeleteGrantResult.h>
#include <aws/license-manager/model/DeleteLicenseResult.h>
#include <aws/license-manager/model/DeleteLicenseConfigurationResult.h>
#include <aws/license-manager/model/DeleteLicenseManagerReportGeneratorResult.h>
#include <aws/license-manager/model/DeleteTokenResult.h>
#include <aws/license-manager/model/ExtendLicenseConsumptionResult.h>
#include <aws/license-manager/model/GetAccessTokenResult.h>
#include <aws/license-manager/model/GetGrantResult.h>
#include <aws/license-manager/model/GetLicenseResult.h>
#include <aws/license-manager/model/GetLicenseConfigurationResult.h>
#include <aws/license-manager/model/GetLicenseConversionTaskResult.h>
#include <aws/license-manager/model/GetLicenseManagerReportGeneratorResult.h>
#include <aws/license-manager/model/GetLicenseUsageResult.h>
#include <aws/license-manager/model/GetServiceSettingsResult.h>
#include <aws/license-manager/model/ListAssociationsForLicenseConfigurationResult.h>
#include <aws/license-manager/model/ListDistributedGrantsResult.h>
#include <aws/license-manager/model/ListFailuresForLicenseConfigurationOperationsResult.h>
#include <aws/license-manager/model/ListLicenseConfigurationsResult.h>
#include <aws/license-manager/model/ListLicenseConversionTasksResult.h>
#include <aws/license-manager/model/ListLicenseManagerReportGeneratorsResult.h>
#include <aws/license-manager/model/ListLicenseSpecificationsForResourceResult.h>
#include <aws/license-manager/model/ListLicenseVersionsResult.h>
#include <aws/license-manager/model/ListLicensesResult.h>
#include <aws/license-manager/model/ListReceivedGrantsResult.h>
#include <aws/license-manager/model/ListReceivedLicensesResult.h>
#include <aws/license-manager/model/ListResourceInventoryResult.h>
#include <aws/license-manager/model/ListTagsForResourceResult.h>
#include <aws/license-manager/model/ListTokensResult.h>
#include <aws/license-manager/model/ListUsageForLicenseConfigurationResult.h>
#include <aws/license-manager/model/RejectGrantResult.h>
#include <aws/license-manager/model/TagResourceResult.h>
#include <aws/license-manager/model/UntagResourceResult.h>
#include <aws/license-manager/model/UpdateLicenseConfigurationResult.h>
#include <aws/license-manager/model/UpdateLicenseManagerReportGeneratorResult.h>
#include <aws/license-manager/model/UpdateLicenseSpecificationsForResourceResult.h>
#include <aws/license-manager/model/UpdateServiceSettingsResult.h>
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

namespace LicenseManager
{

namespace Model
{
        class AcceptGrantRequest;
        class CheckInLicenseRequest;
        class CheckoutBorrowLicenseRequest;
        class CheckoutLicenseRequest;
        class CreateGrantRequest;
        class CreateGrantVersionRequest;
        class CreateLicenseRequest;
        class CreateLicenseConfigurationRequest;
        class CreateLicenseConversionTaskForResourceRequest;
        class CreateLicenseManagerReportGeneratorRequest;
        class CreateLicenseVersionRequest;
        class CreateTokenRequest;
        class DeleteGrantRequest;
        class DeleteLicenseRequest;
        class DeleteLicenseConfigurationRequest;
        class DeleteLicenseManagerReportGeneratorRequest;
        class DeleteTokenRequest;
        class ExtendLicenseConsumptionRequest;
        class GetAccessTokenRequest;
        class GetGrantRequest;
        class GetLicenseRequest;
        class GetLicenseConfigurationRequest;
        class GetLicenseConversionTaskRequest;
        class GetLicenseManagerReportGeneratorRequest;
        class GetLicenseUsageRequest;
        class GetServiceSettingsRequest;
        class ListAssociationsForLicenseConfigurationRequest;
        class ListDistributedGrantsRequest;
        class ListFailuresForLicenseConfigurationOperationsRequest;
        class ListLicenseConfigurationsRequest;
        class ListLicenseConversionTasksRequest;
        class ListLicenseManagerReportGeneratorsRequest;
        class ListLicenseSpecificationsForResourceRequest;
        class ListLicenseVersionsRequest;
        class ListLicensesRequest;
        class ListReceivedGrantsRequest;
        class ListReceivedLicensesRequest;
        class ListResourceInventoryRequest;
        class ListTagsForResourceRequest;
        class ListTokensRequest;
        class ListUsageForLicenseConfigurationRequest;
        class RejectGrantRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateLicenseConfigurationRequest;
        class UpdateLicenseManagerReportGeneratorRequest;
        class UpdateLicenseSpecificationsForResourceRequest;
        class UpdateServiceSettingsRequest;

        typedef Aws::Utils::Outcome<AcceptGrantResult, LicenseManagerError> AcceptGrantOutcome;
        typedef Aws::Utils::Outcome<CheckInLicenseResult, LicenseManagerError> CheckInLicenseOutcome;
        typedef Aws::Utils::Outcome<CheckoutBorrowLicenseResult, LicenseManagerError> CheckoutBorrowLicenseOutcome;
        typedef Aws::Utils::Outcome<CheckoutLicenseResult, LicenseManagerError> CheckoutLicenseOutcome;
        typedef Aws::Utils::Outcome<CreateGrantResult, LicenseManagerError> CreateGrantOutcome;
        typedef Aws::Utils::Outcome<CreateGrantVersionResult, LicenseManagerError> CreateGrantVersionOutcome;
        typedef Aws::Utils::Outcome<CreateLicenseResult, LicenseManagerError> CreateLicenseOutcome;
        typedef Aws::Utils::Outcome<CreateLicenseConfigurationResult, LicenseManagerError> CreateLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateLicenseConversionTaskForResourceResult, LicenseManagerError> CreateLicenseConversionTaskForResourceOutcome;
        typedef Aws::Utils::Outcome<CreateLicenseManagerReportGeneratorResult, LicenseManagerError> CreateLicenseManagerReportGeneratorOutcome;
        typedef Aws::Utils::Outcome<CreateLicenseVersionResult, LicenseManagerError> CreateLicenseVersionOutcome;
        typedef Aws::Utils::Outcome<CreateTokenResult, LicenseManagerError> CreateTokenOutcome;
        typedef Aws::Utils::Outcome<DeleteGrantResult, LicenseManagerError> DeleteGrantOutcome;
        typedef Aws::Utils::Outcome<DeleteLicenseResult, LicenseManagerError> DeleteLicenseOutcome;
        typedef Aws::Utils::Outcome<DeleteLicenseConfigurationResult, LicenseManagerError> DeleteLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteLicenseManagerReportGeneratorResult, LicenseManagerError> DeleteLicenseManagerReportGeneratorOutcome;
        typedef Aws::Utils::Outcome<DeleteTokenResult, LicenseManagerError> DeleteTokenOutcome;
        typedef Aws::Utils::Outcome<ExtendLicenseConsumptionResult, LicenseManagerError> ExtendLicenseConsumptionOutcome;
        typedef Aws::Utils::Outcome<GetAccessTokenResult, LicenseManagerError> GetAccessTokenOutcome;
        typedef Aws::Utils::Outcome<GetGrantResult, LicenseManagerError> GetGrantOutcome;
        typedef Aws::Utils::Outcome<GetLicenseResult, LicenseManagerError> GetLicenseOutcome;
        typedef Aws::Utils::Outcome<GetLicenseConfigurationResult, LicenseManagerError> GetLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetLicenseConversionTaskResult, LicenseManagerError> GetLicenseConversionTaskOutcome;
        typedef Aws::Utils::Outcome<GetLicenseManagerReportGeneratorResult, LicenseManagerError> GetLicenseManagerReportGeneratorOutcome;
        typedef Aws::Utils::Outcome<GetLicenseUsageResult, LicenseManagerError> GetLicenseUsageOutcome;
        typedef Aws::Utils::Outcome<GetServiceSettingsResult, LicenseManagerError> GetServiceSettingsOutcome;
        typedef Aws::Utils::Outcome<ListAssociationsForLicenseConfigurationResult, LicenseManagerError> ListAssociationsForLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<ListDistributedGrantsResult, LicenseManagerError> ListDistributedGrantsOutcome;
        typedef Aws::Utils::Outcome<ListFailuresForLicenseConfigurationOperationsResult, LicenseManagerError> ListFailuresForLicenseConfigurationOperationsOutcome;
        typedef Aws::Utils::Outcome<ListLicenseConfigurationsResult, LicenseManagerError> ListLicenseConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListLicenseConversionTasksResult, LicenseManagerError> ListLicenseConversionTasksOutcome;
        typedef Aws::Utils::Outcome<ListLicenseManagerReportGeneratorsResult, LicenseManagerError> ListLicenseManagerReportGeneratorsOutcome;
        typedef Aws::Utils::Outcome<ListLicenseSpecificationsForResourceResult, LicenseManagerError> ListLicenseSpecificationsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListLicenseVersionsResult, LicenseManagerError> ListLicenseVersionsOutcome;
        typedef Aws::Utils::Outcome<ListLicensesResult, LicenseManagerError> ListLicensesOutcome;
        typedef Aws::Utils::Outcome<ListReceivedGrantsResult, LicenseManagerError> ListReceivedGrantsOutcome;
        typedef Aws::Utils::Outcome<ListReceivedLicensesResult, LicenseManagerError> ListReceivedLicensesOutcome;
        typedef Aws::Utils::Outcome<ListResourceInventoryResult, LicenseManagerError> ListResourceInventoryOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, LicenseManagerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTokensResult, LicenseManagerError> ListTokensOutcome;
        typedef Aws::Utils::Outcome<ListUsageForLicenseConfigurationResult, LicenseManagerError> ListUsageForLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<RejectGrantResult, LicenseManagerError> RejectGrantOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LicenseManagerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LicenseManagerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateLicenseConfigurationResult, LicenseManagerError> UpdateLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateLicenseManagerReportGeneratorResult, LicenseManagerError> UpdateLicenseManagerReportGeneratorOutcome;
        typedef Aws::Utils::Outcome<UpdateLicenseSpecificationsForResourceResult, LicenseManagerError> UpdateLicenseSpecificationsForResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceSettingsResult, LicenseManagerError> UpdateServiceSettingsOutcome;

        typedef std::future<AcceptGrantOutcome> AcceptGrantOutcomeCallable;
        typedef std::future<CheckInLicenseOutcome> CheckInLicenseOutcomeCallable;
        typedef std::future<CheckoutBorrowLicenseOutcome> CheckoutBorrowLicenseOutcomeCallable;
        typedef std::future<CheckoutLicenseOutcome> CheckoutLicenseOutcomeCallable;
        typedef std::future<CreateGrantOutcome> CreateGrantOutcomeCallable;
        typedef std::future<CreateGrantVersionOutcome> CreateGrantVersionOutcomeCallable;
        typedef std::future<CreateLicenseOutcome> CreateLicenseOutcomeCallable;
        typedef std::future<CreateLicenseConfigurationOutcome> CreateLicenseConfigurationOutcomeCallable;
        typedef std::future<CreateLicenseConversionTaskForResourceOutcome> CreateLicenseConversionTaskForResourceOutcomeCallable;
        typedef std::future<CreateLicenseManagerReportGeneratorOutcome> CreateLicenseManagerReportGeneratorOutcomeCallable;
        typedef std::future<CreateLicenseVersionOutcome> CreateLicenseVersionOutcomeCallable;
        typedef std::future<CreateTokenOutcome> CreateTokenOutcomeCallable;
        typedef std::future<DeleteGrantOutcome> DeleteGrantOutcomeCallable;
        typedef std::future<DeleteLicenseOutcome> DeleteLicenseOutcomeCallable;
        typedef std::future<DeleteLicenseConfigurationOutcome> DeleteLicenseConfigurationOutcomeCallable;
        typedef std::future<DeleteLicenseManagerReportGeneratorOutcome> DeleteLicenseManagerReportGeneratorOutcomeCallable;
        typedef std::future<DeleteTokenOutcome> DeleteTokenOutcomeCallable;
        typedef std::future<ExtendLicenseConsumptionOutcome> ExtendLicenseConsumptionOutcomeCallable;
        typedef std::future<GetAccessTokenOutcome> GetAccessTokenOutcomeCallable;
        typedef std::future<GetGrantOutcome> GetGrantOutcomeCallable;
        typedef std::future<GetLicenseOutcome> GetLicenseOutcomeCallable;
        typedef std::future<GetLicenseConfigurationOutcome> GetLicenseConfigurationOutcomeCallable;
        typedef std::future<GetLicenseConversionTaskOutcome> GetLicenseConversionTaskOutcomeCallable;
        typedef std::future<GetLicenseManagerReportGeneratorOutcome> GetLicenseManagerReportGeneratorOutcomeCallable;
        typedef std::future<GetLicenseUsageOutcome> GetLicenseUsageOutcomeCallable;
        typedef std::future<GetServiceSettingsOutcome> GetServiceSettingsOutcomeCallable;
        typedef std::future<ListAssociationsForLicenseConfigurationOutcome> ListAssociationsForLicenseConfigurationOutcomeCallable;
        typedef std::future<ListDistributedGrantsOutcome> ListDistributedGrantsOutcomeCallable;
        typedef std::future<ListFailuresForLicenseConfigurationOperationsOutcome> ListFailuresForLicenseConfigurationOperationsOutcomeCallable;
        typedef std::future<ListLicenseConfigurationsOutcome> ListLicenseConfigurationsOutcomeCallable;
        typedef std::future<ListLicenseConversionTasksOutcome> ListLicenseConversionTasksOutcomeCallable;
        typedef std::future<ListLicenseManagerReportGeneratorsOutcome> ListLicenseManagerReportGeneratorsOutcomeCallable;
        typedef std::future<ListLicenseSpecificationsForResourceOutcome> ListLicenseSpecificationsForResourceOutcomeCallable;
        typedef std::future<ListLicenseVersionsOutcome> ListLicenseVersionsOutcomeCallable;
        typedef std::future<ListLicensesOutcome> ListLicensesOutcomeCallable;
        typedef std::future<ListReceivedGrantsOutcome> ListReceivedGrantsOutcomeCallable;
        typedef std::future<ListReceivedLicensesOutcome> ListReceivedLicensesOutcomeCallable;
        typedef std::future<ListResourceInventoryOutcome> ListResourceInventoryOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTokensOutcome> ListTokensOutcomeCallable;
        typedef std::future<ListUsageForLicenseConfigurationOutcome> ListUsageForLicenseConfigurationOutcomeCallable;
        typedef std::future<RejectGrantOutcome> RejectGrantOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateLicenseConfigurationOutcome> UpdateLicenseConfigurationOutcomeCallable;
        typedef std::future<UpdateLicenseManagerReportGeneratorOutcome> UpdateLicenseManagerReportGeneratorOutcomeCallable;
        typedef std::future<UpdateLicenseSpecificationsForResourceOutcome> UpdateLicenseSpecificationsForResourceOutcomeCallable;
        typedef std::future<UpdateServiceSettingsOutcome> UpdateServiceSettingsOutcomeCallable;
} // namespace Model

  class LicenseManagerClient;

    typedef std::function<void(const LicenseManagerClient*, const Model::AcceptGrantRequest&, const Model::AcceptGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptGrantResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CheckInLicenseRequest&, const Model::CheckInLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckInLicenseResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CheckoutBorrowLicenseRequest&, const Model::CheckoutBorrowLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckoutBorrowLicenseResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CheckoutLicenseRequest&, const Model::CheckoutLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckoutLicenseResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateGrantRequest&, const Model::CreateGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGrantResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateGrantVersionRequest&, const Model::CreateGrantVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGrantVersionResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateLicenseRequest&, const Model::CreateLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLicenseResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateLicenseConfigurationRequest&, const Model::CreateLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateLicenseConversionTaskForResourceRequest&, const Model::CreateLicenseConversionTaskForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLicenseConversionTaskForResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateLicenseManagerReportGeneratorRequest&, const Model::CreateLicenseManagerReportGeneratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLicenseManagerReportGeneratorResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateLicenseVersionRequest&, const Model::CreateLicenseVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLicenseVersionResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateTokenRequest&, const Model::CreateTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTokenResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteGrantRequest&, const Model::DeleteGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGrantResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteLicenseRequest&, const Model::DeleteLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLicenseResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteLicenseConfigurationRequest&, const Model::DeleteLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteLicenseManagerReportGeneratorRequest&, const Model::DeleteLicenseManagerReportGeneratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLicenseManagerReportGeneratorResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteTokenRequest&, const Model::DeleteTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTokenResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ExtendLicenseConsumptionRequest&, const Model::ExtendLicenseConsumptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExtendLicenseConsumptionResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetAccessTokenRequest&, const Model::GetAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessTokenResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetGrantRequest&, const Model::GetGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGrantResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseRequest&, const Model::GetLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseConfigurationRequest&, const Model::GetLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseConversionTaskRequest&, const Model::GetLicenseConversionTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseConversionTaskResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseManagerReportGeneratorRequest&, const Model::GetLicenseManagerReportGeneratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseManagerReportGeneratorResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseUsageRequest&, const Model::GetLicenseUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseUsageResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetServiceSettingsRequest&, const Model::GetServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceSettingsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListAssociationsForLicenseConfigurationRequest&, const Model::ListAssociationsForLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsForLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListDistributedGrantsRequest&, const Model::ListDistributedGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributedGrantsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListFailuresForLicenseConfigurationOperationsRequest&, const Model::ListFailuresForLicenseConfigurationOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicenseConfigurationsRequest&, const Model::ListLicenseConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseConfigurationsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicenseConversionTasksRequest&, const Model::ListLicenseConversionTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseConversionTasksResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicenseManagerReportGeneratorsRequest&, const Model::ListLicenseManagerReportGeneratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseManagerReportGeneratorsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicenseSpecificationsForResourceRequest&, const Model::ListLicenseSpecificationsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseSpecificationsForResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicenseVersionsRequest&, const Model::ListLicenseVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseVersionsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicensesRequest&, const Model::ListLicensesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicensesResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListReceivedGrantsRequest&, const Model::ListReceivedGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceivedGrantsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListReceivedLicensesRequest&, const Model::ListReceivedLicensesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceivedLicensesResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListResourceInventoryRequest&, const Model::ListResourceInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceInventoryResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListTokensRequest&, const Model::ListTokensOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTokensResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListUsageForLicenseConfigurationRequest&, const Model::ListUsageForLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsageForLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::RejectGrantRequest&, const Model::RejectGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectGrantResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::UpdateLicenseConfigurationRequest&, const Model::UpdateLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::UpdateLicenseManagerReportGeneratorRequest&, const Model::UpdateLicenseManagerReportGeneratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLicenseManagerReportGeneratorResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::UpdateLicenseSpecificationsForResourceRequest&, const Model::UpdateLicenseSpecificationsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLicenseSpecificationsForResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::UpdateServiceSettingsRequest&, const Model::UpdateServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceSettingsResponseReceivedHandler;

  /**
   * <p>License Manager makes it easier to manage licenses from software vendors
   * across multiple Amazon Web Services accounts and on-premises servers.</p>
   */
  class AWS_LICENSEMANAGER_API LicenseManagerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LicenseManagerClient();


        /**
         * <p>Accepts the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/AcceptGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptGrantOutcome AcceptGrant(const Model::AcceptGrantRequest& request) const;

        /**
         * A Callable wrapper for AcceptGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptGrantOutcomeCallable AcceptGrantCallable(const Model::AcceptGrantRequest& request) const;

        /**
         * An Async wrapper for AcceptGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptGrantAsync(const Model::AcceptGrantRequest& request, const AcceptGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks in the specified license. Check in a license when it is no longer in
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckInLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckInLicenseOutcome CheckInLicense(const Model::CheckInLicenseRequest& request) const;

        /**
         * A Callable wrapper for CheckInLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckInLicenseOutcomeCallable CheckInLicenseCallable(const Model::CheckInLicenseRequest& request) const;

        /**
         * An Async wrapper for CheckInLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckInLicenseAsync(const Model::CheckInLicenseRequest& request, const CheckInLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks out the specified license for offline use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutBorrowLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckoutBorrowLicenseOutcome CheckoutBorrowLicense(const Model::CheckoutBorrowLicenseRequest& request) const;

        /**
         * A Callable wrapper for CheckoutBorrowLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckoutBorrowLicenseOutcomeCallable CheckoutBorrowLicenseCallable(const Model::CheckoutBorrowLicenseRequest& request) const;

        /**
         * An Async wrapper for CheckoutBorrowLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckoutBorrowLicenseAsync(const Model::CheckoutBorrowLicenseRequest& request, const CheckoutBorrowLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks out the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckoutLicenseOutcome CheckoutLicense(const Model::CheckoutLicenseRequest& request) const;

        /**
         * A Callable wrapper for CheckoutLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckoutLicenseOutcomeCallable CheckoutLicenseCallable(const Model::CheckoutLicenseRequest& request) const;

        /**
         * An Async wrapper for CheckoutLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckoutLicenseAsync(const Model::CheckoutLicenseRequest& request, const CheckoutLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a grant for the specified license. A grant shares the use of license
         * entitlements with specific Amazon Web Services accounts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGrantOutcome CreateGrant(const Model::CreateGrantRequest& request) const;

        /**
         * A Callable wrapper for CreateGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGrantOutcomeCallable CreateGrantCallable(const Model::CreateGrantRequest& request) const;

        /**
         * An Async wrapper for CreateGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGrantAsync(const Model::CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrantVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGrantVersionOutcome CreateGrantVersion(const Model::CreateGrantVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateGrantVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGrantVersionOutcomeCallable CreateGrantVersionCallable(const Model::CreateGrantVersionRequest& request) const;

        /**
         * An Async wrapper for CreateGrantVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGrantVersionAsync(const Model::CreateGrantVersionRequest& request, const CreateGrantVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseOutcome CreateLicense(const Model::CreateLicenseRequest& request) const;

        /**
         * A Callable wrapper for CreateLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLicenseOutcomeCallable CreateLicenseCallable(const Model::CreateLicenseRequest& request) const;

        /**
         * An Async wrapper for CreateLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLicenseAsync(const Model::CreateLicenseRequest& request, const CreateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a license configuration.</p> <p>A license configuration is an
         * abstraction of a customer license agreement that can be consumed and enforced by
         * License Manager. Components include specifications for the license type
         * (licensing by instance, socket, CPU, or vCPU), allowed tenancy (shared tenancy,
         * Dedicated Instance, Dedicated Host, or all of these), license affinity to host
         * (how long a license must be associated with a host), and the number of licenses
         * purchased and used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseConfigurationOutcome CreateLicenseConfiguration(const Model::CreateLicenseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLicenseConfigurationOutcomeCallable CreateLicenseConfigurationCallable(const Model::CreateLicenseConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLicenseConfigurationAsync(const Model::CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new license conversion task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseConversionTaskForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseConversionTaskForResourceOutcome CreateLicenseConversionTaskForResource(const Model::CreateLicenseConversionTaskForResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseConversionTaskForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLicenseConversionTaskForResourceOutcomeCallable CreateLicenseConversionTaskForResourceCallable(const Model::CreateLicenseConversionTaskForResourceRequest& request) const;

        /**
         * An Async wrapper for CreateLicenseConversionTaskForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLicenseConversionTaskForResourceAsync(const Model::CreateLicenseConversionTaskForResourceRequest& request, const CreateLicenseConversionTaskForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a report generator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseManagerReportGenerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseManagerReportGeneratorOutcome CreateLicenseManagerReportGenerator(const Model::CreateLicenseManagerReportGeneratorRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseManagerReportGenerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLicenseManagerReportGeneratorOutcomeCallable CreateLicenseManagerReportGeneratorCallable(const Model::CreateLicenseManagerReportGeneratorRequest& request) const;

        /**
         * An Async wrapper for CreateLicenseManagerReportGenerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLicenseManagerReportGeneratorAsync(const Model::CreateLicenseManagerReportGeneratorRequest& request, const CreateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseVersionOutcome CreateLicenseVersion(const Model::CreateLicenseVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLicenseVersionOutcomeCallable CreateLicenseVersionCallable(const Model::CreateLicenseVersionRequest& request) const;

        /**
         * An Async wrapper for CreateLicenseVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLicenseVersionAsync(const Model::CreateLicenseVersionRequest& request, const CreateLicenseVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a long-lived token.</p> <p>A refresh token is a JWT token used to get
         * an access token. With an access token, you can call AssumeRoleWithWebIdentity to
         * get role credentials that you can use to call License Manager to manage the
         * specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTokenOutcome CreateToken(const Model::CreateTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTokenOutcomeCallable CreateTokenCallable(const Model::CreateTokenRequest& request) const;

        /**
         * An Async wrapper for CreateToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTokenAsync(const Model::CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGrantOutcome DeleteGrant(const Model::DeleteGrantRequest& request) const;

        /**
         * A Callable wrapper for DeleteGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGrantOutcomeCallable DeleteGrantCallable(const Model::DeleteGrantRequest& request) const;

        /**
         * An Async wrapper for DeleteGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGrantAsync(const Model::DeleteGrantRequest& request, const DeleteGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseOutcome DeleteLicense(const Model::DeleteLicenseRequest& request) const;

        /**
         * A Callable wrapper for DeleteLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLicenseOutcomeCallable DeleteLicenseCallable(const Model::DeleteLicenseRequest& request) const;

        /**
         * An Async wrapper for DeleteLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLicenseAsync(const Model::DeleteLicenseRequest& request, const DeleteLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified license configuration.</p> <p>You cannot delete a
         * license configuration that is in use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseConfigurationOutcome DeleteLicenseConfiguration(const Model::DeleteLicenseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLicenseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLicenseConfigurationOutcomeCallable DeleteLicenseConfigurationCallable(const Model::DeleteLicenseConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLicenseConfigurationAsync(const Model::DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified report generator.</p> <p>This action deletes the report
         * generator, which stops it from generating future reports. The action cannot be
         * reversed. It has no effect on the previous reports from this
         * generator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicenseManagerReportGenerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseManagerReportGeneratorOutcome DeleteLicenseManagerReportGenerator(const Model::DeleteLicenseManagerReportGeneratorRequest& request) const;

        /**
         * A Callable wrapper for DeleteLicenseManagerReportGenerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLicenseManagerReportGeneratorOutcomeCallable DeleteLicenseManagerReportGeneratorCallable(const Model::DeleteLicenseManagerReportGeneratorRequest& request) const;

        /**
         * An Async wrapper for DeleteLicenseManagerReportGenerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLicenseManagerReportGeneratorAsync(const Model::DeleteLicenseManagerReportGeneratorRequest& request, const DeleteLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified token. Must be called in the license home
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteToken">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTokenOutcome DeleteToken(const Model::DeleteTokenRequest& request) const;

        /**
         * A Callable wrapper for DeleteToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTokenOutcomeCallable DeleteTokenCallable(const Model::DeleteTokenRequest& request) const;

        /**
         * An Async wrapper for DeleteToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTokenAsync(const Model::DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Extends the expiration date for license consumption.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ExtendLicenseConsumption">AWS
         * API Reference</a></p>
         */
        virtual Model::ExtendLicenseConsumptionOutcome ExtendLicenseConsumption(const Model::ExtendLicenseConsumptionRequest& request) const;

        /**
         * A Callable wrapper for ExtendLicenseConsumption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExtendLicenseConsumptionOutcomeCallable ExtendLicenseConsumptionCallable(const Model::ExtendLicenseConsumptionRequest& request) const;

        /**
         * An Async wrapper for ExtendLicenseConsumption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExtendLicenseConsumptionAsync(const Model::ExtendLicenseConsumptionRequest& request, const ExtendLicenseConsumptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a temporary access token to use with AssumeRoleWithWebIdentity. Access
         * tokens are valid for one hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetAccessToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessTokenOutcome GetAccessToken(const Model::GetAccessTokenRequest& request) const;

        /**
         * A Callable wrapper for GetAccessToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessTokenOutcomeCallable GetAccessTokenCallable(const Model::GetAccessTokenRequest& request) const;

        /**
         * An Async wrapper for GetAccessToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessTokenAsync(const Model::GetAccessTokenRequest& request, const GetAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about the specified grant.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGrantOutcome GetGrant(const Model::GetGrantRequest& request) const;

        /**
         * A Callable wrapper for GetGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGrantOutcomeCallable GetGrantCallable(const Model::GetGrantRequest& request) const;

        /**
         * An Async wrapper for GetGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGrantAsync(const Model::GetGrantRequest& request, const GetGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about the specified license.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseOutcome GetLicense(const Model::GetLicenseRequest& request) const;

        /**
         * A Callable wrapper for GetLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLicenseOutcomeCallable GetLicenseCallable(const Model::GetLicenseRequest& request) const;

        /**
         * An Async wrapper for GetLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLicenseAsync(const Model::GetLicenseRequest& request, const GetLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about the specified license
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseConfigurationOutcome GetLicenseConfiguration(const Model::GetLicenseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetLicenseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLicenseConfigurationOutcomeCallable GetLicenseConfigurationCallable(const Model::GetLicenseConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLicenseConfigurationAsync(const Model::GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified license type conversion
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseConversionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseConversionTaskOutcome GetLicenseConversionTask(const Model::GetLicenseConversionTaskRequest& request) const;

        /**
         * A Callable wrapper for GetLicenseConversionTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLicenseConversionTaskOutcomeCallable GetLicenseConversionTaskCallable(const Model::GetLicenseConversionTaskRequest& request) const;

        /**
         * An Async wrapper for GetLicenseConversionTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLicenseConversionTaskAsync(const Model::GetLicenseConversionTaskRequest& request, const GetLicenseConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified report generator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseManagerReportGenerator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseManagerReportGeneratorOutcome GetLicenseManagerReportGenerator(const Model::GetLicenseManagerReportGeneratorRequest& request) const;

        /**
         * A Callable wrapper for GetLicenseManagerReportGenerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLicenseManagerReportGeneratorOutcomeCallable GetLicenseManagerReportGeneratorCallable(const Model::GetLicenseManagerReportGeneratorRequest& request) const;

        /**
         * An Async wrapper for GetLicenseManagerReportGenerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLicenseManagerReportGeneratorAsync(const Model::GetLicenseManagerReportGeneratorRequest& request, const GetLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about the usage of the specified
         * license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseUsageOutcome GetLicenseUsage(const Model::GetLicenseUsageRequest& request) const;

        /**
         * A Callable wrapper for GetLicenseUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLicenseUsageOutcomeCallable GetLicenseUsageCallable(const Model::GetLicenseUsageRequest& request) const;

        /**
         * An Async wrapper for GetLicenseUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLicenseUsageAsync(const Model::GetLicenseUsageRequest& request, const GetLicenseUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the License Manager settings for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingsOutcome GetServiceSettings(const Model::GetServiceSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetServiceSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceSettingsOutcomeCallable GetServiceSettingsCallable(const Model::GetServiceSettingsRequest& request) const;

        /**
         * An Async wrapper for GetServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceSettingsAsync(const Model::GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource associations for the specified license configuration.</p>
         * <p>Resource associations need not consume licenses from a license configuration.
         * For example, an AMI or a stopped instance might not consume a license (depending
         * on the license rules).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListAssociationsForLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationsForLicenseConfigurationOutcome ListAssociationsForLicenseConfiguration(const Model::ListAssociationsForLicenseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ListAssociationsForLicenseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociationsForLicenseConfigurationOutcomeCallable ListAssociationsForLicenseConfigurationCallable(const Model::ListAssociationsForLicenseConfigurationRequest& request) const;

        /**
         * An Async wrapper for ListAssociationsForLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociationsForLicenseConfigurationAsync(const Model::ListAssociationsForLicenseConfigurationRequest& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the grants distributed for the specified license.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListDistributedGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributedGrantsOutcome ListDistributedGrants(const Model::ListDistributedGrantsRequest& request) const;

        /**
         * A Callable wrapper for ListDistributedGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributedGrantsOutcomeCallable ListDistributedGrantsCallable(const Model::ListDistributedGrantsRequest& request) const;

        /**
         * An Async wrapper for ListDistributedGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributedGrantsAsync(const Model::ListDistributedGrantsRequest& request, const ListDistributedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the license configuration operations that failed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListFailuresForLicenseConfigurationOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFailuresForLicenseConfigurationOperationsOutcome ListFailuresForLicenseConfigurationOperations(const Model::ListFailuresForLicenseConfigurationOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListFailuresForLicenseConfigurationOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFailuresForLicenseConfigurationOperationsOutcomeCallable ListFailuresForLicenseConfigurationOperationsCallable(const Model::ListFailuresForLicenseConfigurationOperationsRequest& request) const;

        /**
         * An Async wrapper for ListFailuresForLicenseConfigurationOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFailuresForLicenseConfigurationOperationsAsync(const Model::ListFailuresForLicenseConfigurationOperationsRequest& request, const ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the license configurations for your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseConfigurationsOutcome ListLicenseConfigurations(const Model::ListLicenseConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListLicenseConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicenseConfigurationsOutcomeCallable ListLicenseConfigurationsCallable(const Model::ListLicenseConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListLicenseConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicenseConfigurationsAsync(const Model::ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the license type conversion tasks for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseConversionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseConversionTasksOutcome ListLicenseConversionTasks(const Model::ListLicenseConversionTasksRequest& request) const;

        /**
         * A Callable wrapper for ListLicenseConversionTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicenseConversionTasksOutcomeCallable ListLicenseConversionTasksCallable(const Model::ListLicenseConversionTasksRequest& request) const;

        /**
         * An Async wrapper for ListLicenseConversionTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicenseConversionTasksAsync(const Model::ListLicenseConversionTasksRequest& request, const ListLicenseConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the report generators for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseManagerReportGenerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseManagerReportGeneratorsOutcome ListLicenseManagerReportGenerators(const Model::ListLicenseManagerReportGeneratorsRequest& request) const;

        /**
         * A Callable wrapper for ListLicenseManagerReportGenerators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicenseManagerReportGeneratorsOutcomeCallable ListLicenseManagerReportGeneratorsCallable(const Model::ListLicenseManagerReportGeneratorsRequest& request) const;

        /**
         * An Async wrapper for ListLicenseManagerReportGenerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicenseManagerReportGeneratorsAsync(const Model::ListLicenseManagerReportGeneratorsRequest& request, const ListLicenseManagerReportGeneratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the license configurations for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseSpecificationsForResourceOutcome ListLicenseSpecificationsForResource(const Model::ListLicenseSpecificationsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListLicenseSpecificationsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicenseSpecificationsForResourceOutcomeCallable ListLicenseSpecificationsForResourceCallable(const Model::ListLicenseSpecificationsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListLicenseSpecificationsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicenseSpecificationsForResourceAsync(const Model::ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all versions of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseVersionsOutcome ListLicenseVersions(const Model::ListLicenseVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListLicenseVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicenseVersionsOutcomeCallable ListLicenseVersionsCallable(const Model::ListLicenseVersionsRequest& request) const;

        /**
         * An Async wrapper for ListLicenseVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicenseVersionsAsync(const Model::ListLicenseVersionsRequest& request, const ListLicenseVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the licenses for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicensesOutcome ListLicenses(const Model::ListLicensesRequest& request) const;

        /**
         * A Callable wrapper for ListLicenses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicensesOutcomeCallable ListLicensesCallable(const Model::ListLicensesRequest& request) const;

        /**
         * An Async wrapper for ListLicenses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicensesAsync(const Model::ListLicensesRequest& request, const ListLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists grants that are received but not accepted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedGrantsOutcome ListReceivedGrants(const Model::ListReceivedGrantsRequest& request) const;

        /**
         * A Callable wrapper for ListReceivedGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceivedGrantsOutcomeCallable ListReceivedGrantsCallable(const Model::ListReceivedGrantsRequest& request) const;

        /**
         * An Async wrapper for ListReceivedGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceivedGrantsAsync(const Model::ListReceivedGrantsRequest& request, const ListReceivedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists received licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedLicenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedLicensesOutcome ListReceivedLicenses(const Model::ListReceivedLicensesRequest& request) const;

        /**
         * A Callable wrapper for ListReceivedLicenses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceivedLicensesOutcomeCallable ListReceivedLicensesCallable(const Model::ListReceivedLicensesRequest& request) const;

        /**
         * An Async wrapper for ListReceivedLicenses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceivedLicensesAsync(const Model::ListReceivedLicensesRequest& request, const ListReceivedLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists resources managed using Systems Manager inventory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListResourceInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceInventoryOutcome ListResourceInventory(const Model::ListResourceInventoryRequest& request) const;

        /**
         * A Callable wrapper for ListResourceInventory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceInventoryOutcomeCallable ListResourceInventoryCallable(const Model::ListResourceInventoryRequest& request) const;

        /**
         * An Async wrapper for ListResourceInventory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceInventoryAsync(const Model::ListResourceInventoryRequest& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your tokens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTokens">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTokensOutcome ListTokens(const Model::ListTokensRequest& request) const;

        /**
         * A Callable wrapper for ListTokens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTokensOutcomeCallable ListTokensCallable(const Model::ListTokensRequest& request) const;

        /**
         * An Async wrapper for ListTokens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTokensAsync(const Model::ListTokensRequest& request, const ListTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all license usage records for a license configuration, displaying
         * license consumption details by resource at a selected point in time. Use this
         * action to audit the current license consumption for any license inventory and
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListUsageForLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsageForLicenseConfigurationOutcome ListUsageForLicenseConfiguration(const Model::ListUsageForLicenseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ListUsageForLicenseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsageForLicenseConfigurationOutcomeCallable ListUsageForLicenseConfigurationCallable(const Model::ListUsageForLicenseConfigurationRequest& request) const;

        /**
         * An Async wrapper for ListUsageForLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsageForLicenseConfigurationAsync(const Model::ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/RejectGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectGrantOutcome RejectGrant(const Model::RejectGrantRequest& request) const;

        /**
         * A Callable wrapper for RejectGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectGrantOutcomeCallable RejectGrantCallable(const Model::RejectGrantRequest& request) const;

        /**
         * An Async wrapper for RejectGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectGrantAsync(const Model::RejectGrantRequest& request, const RejectGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified license
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the attributes of an existing license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLicenseConfigurationOutcome UpdateLicenseConfiguration(const Model::UpdateLicenseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateLicenseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLicenseConfigurationOutcomeCallable UpdateLicenseConfigurationCallable(const Model::UpdateLicenseConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLicenseConfigurationAsync(const Model::UpdateLicenseConfigurationRequest& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a report generator.</p> <p>After you make changes to a report
         * generator, it starts generating new reports within 60 minutes of being
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseManagerReportGenerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLicenseManagerReportGeneratorOutcome UpdateLicenseManagerReportGenerator(const Model::UpdateLicenseManagerReportGeneratorRequest& request) const;

        /**
         * A Callable wrapper for UpdateLicenseManagerReportGenerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLicenseManagerReportGeneratorOutcomeCallable UpdateLicenseManagerReportGeneratorCallable(const Model::UpdateLicenseManagerReportGeneratorRequest& request) const;

        /**
         * An Async wrapper for UpdateLicenseManagerReportGenerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLicenseManagerReportGeneratorAsync(const Model::UpdateLicenseManagerReportGeneratorRequest& request, const UpdateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or removes the specified license configurations for the specified Amazon
         * Web Services resource.</p> <p>You can update the license specifications of AMIs,
         * instances, and hosts. You cannot update the license specifications for launch
         * templates and CloudFormation templates, as they send license configurations to
         * the operation that creates the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLicenseSpecificationsForResourceOutcome UpdateLicenseSpecificationsForResource(const Model::UpdateLicenseSpecificationsForResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateLicenseSpecificationsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLicenseSpecificationsForResourceOutcomeCallable UpdateLicenseSpecificationsForResourceCallable(const Model::UpdateLicenseSpecificationsForResourceRequest& request) const;

        /**
         * An Async wrapper for UpdateLicenseSpecificationsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLicenseSpecificationsForResourceAsync(const Model::UpdateLicenseSpecificationsForResourceRequest& request, const UpdateLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates License Manager settings for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSettingsOutcome UpdateServiceSettings(const Model::UpdateServiceSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceSettingsOutcomeCallable UpdateServiceSettingsCallable(const Model::UpdateServiceSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceSettingsAsync(const Model::UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LicenseManager
} // namespace Aws
