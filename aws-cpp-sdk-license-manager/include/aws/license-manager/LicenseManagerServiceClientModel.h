/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/license-manager/LicenseManagerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/license-manager/LicenseManagerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LicenseManagerClient header */
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
#include <aws/license-manager/model/ListReceivedGrantsForOrganizationResult.h>
#include <aws/license-manager/model/ListReceivedLicensesResult.h>
#include <aws/license-manager/model/ListReceivedLicensesForOrganizationResult.h>
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
/* End of service model headers required in LicenseManagerClient header */

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
    using LicenseManagerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LicenseManagerEndpointProviderBase = Aws::LicenseManager::Endpoint::LicenseManagerEndpointProviderBase;
    using LicenseManagerEndpointProvider = Aws::LicenseManager::Endpoint::LicenseManagerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LicenseManagerClient header */
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
      class ListReceivedGrantsForOrganizationRequest;
      class ListReceivedLicensesRequest;
      class ListReceivedLicensesForOrganizationRequest;
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
      /* End of service model forward declarations required in LicenseManagerClient header */

      /* Service model Outcome class definitions */
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
      typedef Aws::Utils::Outcome<ListReceivedGrantsForOrganizationResult, LicenseManagerError> ListReceivedGrantsForOrganizationOutcome;
      typedef Aws::Utils::Outcome<ListReceivedLicensesResult, LicenseManagerError> ListReceivedLicensesOutcome;
      typedef Aws::Utils::Outcome<ListReceivedLicensesForOrganizationResult, LicenseManagerError> ListReceivedLicensesForOrganizationOutcome;
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<ListReceivedGrantsForOrganizationOutcome> ListReceivedGrantsForOrganizationOutcomeCallable;
      typedef std::future<ListReceivedLicensesOutcome> ListReceivedLicensesOutcomeCallable;
      typedef std::future<ListReceivedLicensesForOrganizationOutcome> ListReceivedLicensesForOrganizationOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LicenseManagerClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const LicenseManagerClient*, const Model::ListReceivedGrantsForOrganizationRequest&, const Model::ListReceivedGrantsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceivedGrantsForOrganizationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListReceivedLicensesRequest&, const Model::ListReceivedLicensesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceivedLicensesResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListReceivedLicensesForOrganizationRequest&, const Model::ListReceivedLicensesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceivedLicensesForOrganizationResponseReceivedHandler;
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
    /* End of service model async handlers definitions */
  } // namespace LicenseManager
} // namespace Aws
