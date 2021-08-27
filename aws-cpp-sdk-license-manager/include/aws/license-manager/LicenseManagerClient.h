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
#include <aws/license-manager/model/CreateLicenseVersionResult.h>
#include <aws/license-manager/model/CreateTokenResult.h>
#include <aws/license-manager/model/DeleteGrantResult.h>
#include <aws/license-manager/model/DeleteLicenseResult.h>
#include <aws/license-manager/model/DeleteLicenseConfigurationResult.h>
#include <aws/license-manager/model/DeleteTokenResult.h>
#include <aws/license-manager/model/ExtendLicenseConsumptionResult.h>
#include <aws/license-manager/model/GetAccessTokenResult.h>
#include <aws/license-manager/model/GetGrantResult.h>
#include <aws/license-manager/model/GetLicenseResult.h>
#include <aws/license-manager/model/GetLicenseConfigurationResult.h>
#include <aws/license-manager/model/GetLicenseUsageResult.h>
#include <aws/license-manager/model/GetServiceSettingsResult.h>
#include <aws/license-manager/model/ListAssociationsForLicenseConfigurationResult.h>
#include <aws/license-manager/model/ListDistributedGrantsResult.h>
#include <aws/license-manager/model/ListFailuresForLicenseConfigurationOperationsResult.h>
#include <aws/license-manager/model/ListLicenseConfigurationsResult.h>
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
        class CreateLicenseVersionRequest;
        class CreateTokenRequest;
        class DeleteGrantRequest;
        class DeleteLicenseRequest;
        class DeleteLicenseConfigurationRequest;
        class DeleteTokenRequest;
        class ExtendLicenseConsumptionRequest;
        class GetAccessTokenRequest;
        class GetGrantRequest;
        class GetLicenseRequest;
        class GetLicenseConfigurationRequest;
        class GetLicenseUsageRequest;
        class GetServiceSettingsRequest;
        class ListAssociationsForLicenseConfigurationRequest;
        class ListDistributedGrantsRequest;
        class ListFailuresForLicenseConfigurationOperationsRequest;
        class ListLicenseConfigurationsRequest;
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
        typedef Aws::Utils::Outcome<CreateLicenseVersionResult, LicenseManagerError> CreateLicenseVersionOutcome;
        typedef Aws::Utils::Outcome<CreateTokenResult, LicenseManagerError> CreateTokenOutcome;
        typedef Aws::Utils::Outcome<DeleteGrantResult, LicenseManagerError> DeleteGrantOutcome;
        typedef Aws::Utils::Outcome<DeleteLicenseResult, LicenseManagerError> DeleteLicenseOutcome;
        typedef Aws::Utils::Outcome<DeleteLicenseConfigurationResult, LicenseManagerError> DeleteLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteTokenResult, LicenseManagerError> DeleteTokenOutcome;
        typedef Aws::Utils::Outcome<ExtendLicenseConsumptionResult, LicenseManagerError> ExtendLicenseConsumptionOutcome;
        typedef Aws::Utils::Outcome<GetAccessTokenResult, LicenseManagerError> GetAccessTokenOutcome;
        typedef Aws::Utils::Outcome<GetGrantResult, LicenseManagerError> GetGrantOutcome;
        typedef Aws::Utils::Outcome<GetLicenseResult, LicenseManagerError> GetLicenseOutcome;
        typedef Aws::Utils::Outcome<GetLicenseConfigurationResult, LicenseManagerError> GetLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetLicenseUsageResult, LicenseManagerError> GetLicenseUsageOutcome;
        typedef Aws::Utils::Outcome<GetServiceSettingsResult, LicenseManagerError> GetServiceSettingsOutcome;
        typedef Aws::Utils::Outcome<ListAssociationsForLicenseConfigurationResult, LicenseManagerError> ListAssociationsForLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<ListDistributedGrantsResult, LicenseManagerError> ListDistributedGrantsOutcome;
        typedef Aws::Utils::Outcome<ListFailuresForLicenseConfigurationOperationsResult, LicenseManagerError> ListFailuresForLicenseConfigurationOperationsOutcome;
        typedef Aws::Utils::Outcome<ListLicenseConfigurationsResult, LicenseManagerError> ListLicenseConfigurationsOutcome;
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
        typedef std::future<CreateLicenseVersionOutcome> CreateLicenseVersionOutcomeCallable;
        typedef std::future<CreateTokenOutcome> CreateTokenOutcomeCallable;
        typedef std::future<DeleteGrantOutcome> DeleteGrantOutcomeCallable;
        typedef std::future<DeleteLicenseOutcome> DeleteLicenseOutcomeCallable;
        typedef std::future<DeleteLicenseConfigurationOutcome> DeleteLicenseConfigurationOutcomeCallable;
        typedef std::future<DeleteTokenOutcome> DeleteTokenOutcomeCallable;
        typedef std::future<ExtendLicenseConsumptionOutcome> ExtendLicenseConsumptionOutcomeCallable;
        typedef std::future<GetAccessTokenOutcome> GetAccessTokenOutcomeCallable;
        typedef std::future<GetGrantOutcome> GetGrantOutcomeCallable;
        typedef std::future<GetLicenseOutcome> GetLicenseOutcomeCallable;
        typedef std::future<GetLicenseConfigurationOutcome> GetLicenseConfigurationOutcomeCallable;
        typedef std::future<GetLicenseUsageOutcome> GetLicenseUsageOutcomeCallable;
        typedef std::future<GetServiceSettingsOutcome> GetServiceSettingsOutcomeCallable;
        typedef std::future<ListAssociationsForLicenseConfigurationOutcome> ListAssociationsForLicenseConfigurationOutcomeCallable;
        typedef std::future<ListDistributedGrantsOutcome> ListDistributedGrantsOutcomeCallable;
        typedef std::future<ListFailuresForLicenseConfigurationOperationsOutcome> ListFailuresForLicenseConfigurationOperationsOutcomeCallable;
        typedef std::future<ListLicenseConfigurationsOutcome> ListLicenseConfigurationsOutcomeCallable;
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
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateLicenseVersionRequest&, const Model::CreateLicenseVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLicenseVersionResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::CreateTokenRequest&, const Model::CreateTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTokenResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteGrantRequest&, const Model::DeleteGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGrantResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteLicenseRequest&, const Model::DeleteLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLicenseResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteLicenseConfigurationRequest&, const Model::DeleteLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteTokenRequest&, const Model::DeleteTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTokenResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ExtendLicenseConsumptionRequest&, const Model::ExtendLicenseConsumptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExtendLicenseConsumptionResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetAccessTokenRequest&, const Model::GetAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessTokenResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetGrantRequest&, const Model::GetGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGrantResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseRequest&, const Model::GetLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseConfigurationRequest&, const Model::GetLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseUsageRequest&, const Model::GetLicenseUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseUsageResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetServiceSettingsRequest&, const Model::GetServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceSettingsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListAssociationsForLicenseConfigurationRequest&, const Model::ListAssociationsForLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsForLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListDistributedGrantsRequest&, const Model::ListDistributedGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributedGrantsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListFailuresForLicenseConfigurationOperationsRequest&, const Model::ListFailuresForLicenseConfigurationOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicenseConfigurationsRequest&, const Model::ListLicenseConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseConfigurationsResponseReceivedHandler;
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
    typedef std::function<void(const LicenseManagerClient*, const Model::UpdateLicenseSpecificationsForResourceRequest&, const Model::UpdateLicenseSpecificationsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLicenseSpecificationsForResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::UpdateServiceSettingsRequest&, const Model::UpdateServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceSettingsResponseReceivedHandler;

  /**
   * <fullname> AWS License Manager </fullname> <p>AWS License Manager makes it
   * easier to manage licenses from software vendors across multiple AWS accounts and
   * on-premises servers.</p>
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
        LicenseManagerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Accepts the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/AcceptGrant">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptGrantOutcomeCallable AcceptGrantCallable(const Model::AcceptGrantRequest& request) const;

        /**
         * <p>Accepts the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/AcceptGrant">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Checks in the specified license. Check in a license when it is no longer in
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckInLicense">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckInLicenseOutcomeCallable CheckInLicenseCallable(const Model::CheckInLicenseRequest& request) const;

        /**
         * <p>Checks in the specified license. Check in a license when it is no longer in
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckInLicense">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Checks out the specified license for offline use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutBorrowLicense">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckoutBorrowLicenseOutcomeCallable CheckoutBorrowLicenseCallable(const Model::CheckoutBorrowLicenseRequest& request) const;

        /**
         * <p>Checks out the specified license for offline use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutBorrowLicense">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckoutBorrowLicenseAsync(const Model::CheckoutBorrowLicenseRequest& request, const CheckoutBorrowLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks out the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckoutLicenseOutcome CheckoutLicense(const Model::CheckoutLicenseRequest& request) const;

        /**
         * <p>Checks out the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutLicense">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckoutLicenseOutcomeCallable CheckoutLicenseCallable(const Model::CheckoutLicenseRequest& request) const;

        /**
         * <p>Checks out the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutLicense">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckoutLicenseAsync(const Model::CheckoutLicenseRequest& request, const CheckoutLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a grant for the specified license. A grant shares the use of license
         * entitlements with specific AWS accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGrantOutcome CreateGrant(const Model::CreateGrantRequest& request) const;

        /**
         * <p>Creates a grant for the specified license. A grant shares the use of license
         * entitlements with specific AWS accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrant">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGrantOutcomeCallable CreateGrantCallable(const Model::CreateGrantRequest& request) const;

        /**
         * <p>Creates a grant for the specified license. A grant shares the use of license
         * entitlements with specific AWS accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrant">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGrantAsync(const Model::CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrantVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGrantVersionOutcome CreateGrantVersion(const Model::CreateGrantVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrantVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGrantVersionOutcomeCallable CreateGrantVersionCallable(const Model::CreateGrantVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrantVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGrantVersionAsync(const Model::CreateGrantVersionRequest& request, const CreateGrantVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseOutcome CreateLicense(const Model::CreateLicenseRequest& request) const;

        /**
         * <p>Creates a license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicense">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLicenseOutcomeCallable CreateLicenseCallable(const Model::CreateLicenseRequest& request) const;

        /**
         * <p>Creates a license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicense">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a license configuration.</p> <p>A license configuration is an
         * abstraction of a customer license agreement that can be consumed and enforced by
         * License Manager. Components include specifications for the license type
         * (licensing by instance, socket, CPU, or vCPU), allowed tenancy (shared tenancy,
         * Dedicated Instance, Dedicated Host, or all of these), license affinity to host
         * (how long a license must be associated with a host), and the number of licenses
         * purchased and used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLicenseConfigurationOutcomeCallable CreateLicenseConfigurationCallable(const Model::CreateLicenseConfigurationRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLicenseConfigurationAsync(const Model::CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseVersionOutcome CreateLicenseVersion(const Model::CreateLicenseVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLicenseVersionOutcomeCallable CreateLicenseVersionCallable(const Model::CreateLicenseVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a long-lived token.</p> <p>A refresh token is a JWT token used to get
         * an access token. With an access token, you can call AssumeRoleWithWebIdentity to
         * get role credentials that you can use to call License Manager to manage the
         * specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTokenOutcomeCallable CreateTokenCallable(const Model::CreateTokenRequest& request) const;

        /**
         * <p>Creates a long-lived token.</p> <p>A refresh token is a JWT token used to get
         * an access token. With an access token, you can call AssumeRoleWithWebIdentity to
         * get role credentials that you can use to call License Manager to manage the
         * specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTokenAsync(const Model::CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGrantOutcome DeleteGrant(const Model::DeleteGrantRequest& request) const;

        /**
         * <p>Deletes the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteGrant">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGrantOutcomeCallable DeleteGrantCallable(const Model::DeleteGrantRequest& request) const;

        /**
         * <p>Deletes the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteGrant">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGrantAsync(const Model::DeleteGrantRequest& request, const DeleteGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseOutcome DeleteLicense(const Model::DeleteLicenseRequest& request) const;

        /**
         * <p>Deletes the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicense">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLicenseOutcomeCallable DeleteLicenseCallable(const Model::DeleteLicenseRequest& request) const;

        /**
         * <p>Deletes the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicense">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the specified license configuration.</p> <p>You cannot delete a
         * license configuration that is in use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLicenseConfigurationOutcomeCallable DeleteLicenseConfigurationCallable(const Model::DeleteLicenseConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified license configuration.</p> <p>You cannot delete a
         * license configuration that is in use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLicenseConfigurationAsync(const Model::DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified token. Must be called in the license home
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteToken">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTokenOutcome DeleteToken(const Model::DeleteTokenRequest& request) const;

        /**
         * <p>Deletes the specified token. Must be called in the license home
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTokenOutcomeCallable DeleteTokenCallable(const Model::DeleteTokenRequest& request) const;

        /**
         * <p>Deletes the specified token. Must be called in the license home
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Extends the expiration date for license consumption.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ExtendLicenseConsumption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExtendLicenseConsumptionOutcomeCallable ExtendLicenseConsumptionCallable(const Model::ExtendLicenseConsumptionRequest& request) const;

        /**
         * <p>Extends the expiration date for license consumption.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ExtendLicenseConsumption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a temporary access token to use with AssumeRoleWithWebIdentity. Access
         * tokens are valid for one hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetAccessToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessTokenOutcomeCallable GetAccessTokenCallable(const Model::GetAccessTokenRequest& request) const;

        /**
         * <p>Gets a temporary access token to use with AssumeRoleWithWebIdentity. Access
         * tokens are valid for one hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetAccessToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets detailed information about the specified grant.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetGrant">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGrantOutcomeCallable GetGrantCallable(const Model::GetGrantRequest& request) const;

        /**
         * <p>Gets detailed information about the specified grant.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetGrant">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets detailed information about the specified license.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicense">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLicenseOutcomeCallable GetLicenseCallable(const Model::GetLicenseRequest& request) const;

        /**
         * <p>Gets detailed information about the specified license.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicense">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets detailed information about the specified license
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLicenseConfigurationOutcomeCallable GetLicenseConfigurationCallable(const Model::GetLicenseConfigurationRequest& request) const;

        /**
         * <p>Gets detailed information about the specified license
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLicenseConfigurationAsync(const Model::GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about the usage of the specified
         * license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseUsageOutcome GetLicenseUsage(const Model::GetLicenseUsageRequest& request) const;

        /**
         * <p>Gets detailed information about the usage of the specified
         * license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLicenseUsageOutcomeCallable GetLicenseUsageCallable(const Model::GetLicenseUsageRequest& request) const;

        /**
         * <p>Gets detailed information about the usage of the specified
         * license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the License Manager settings for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetServiceSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceSettingsOutcomeCallable GetServiceSettingsCallable(const Model::GetServiceSettingsRequest& request) const;

        /**
         * <p>Gets the License Manager settings for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetServiceSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the resource associations for the specified license configuration.</p>
         * <p>Resource associations need not consume licenses from a license configuration.
         * For example, an AMI or a stopped instance might not consume a license (depending
         * on the license rules).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListAssociationsForLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociationsForLicenseConfigurationOutcomeCallable ListAssociationsForLicenseConfigurationCallable(const Model::ListAssociationsForLicenseConfigurationRequest& request) const;

        /**
         * <p>Lists the resource associations for the specified license configuration.</p>
         * <p>Resource associations need not consume licenses from a license configuration.
         * For example, an AMI or a stopped instance might not consume a license (depending
         * on the license rules).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListAssociationsForLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the grants distributed for the specified license.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListDistributedGrants">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributedGrantsOutcomeCallable ListDistributedGrantsCallable(const Model::ListDistributedGrantsRequest& request) const;

        /**
         * <p>Lists the grants distributed for the specified license.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListDistributedGrants">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the license configuration operations that failed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListFailuresForLicenseConfigurationOperations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFailuresForLicenseConfigurationOperationsOutcomeCallable ListFailuresForLicenseConfigurationOperationsCallable(const Model::ListFailuresForLicenseConfigurationOperationsRequest& request) const;

        /**
         * <p>Lists the license configuration operations that failed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListFailuresForLicenseConfigurationOperations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the license configurations for your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicenseConfigurationsOutcomeCallable ListLicenseConfigurationsCallable(const Model::ListLicenseConfigurationsRequest& request) const;

        /**
         * <p>Lists the license configurations for your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicenseConfigurationsAsync(const Model::ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the license configurations for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseSpecificationsForResourceOutcome ListLicenseSpecificationsForResource(const Model::ListLicenseSpecificationsForResourceRequest& request) const;

        /**
         * <p>Describes the license configurations for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicenseSpecificationsForResourceOutcomeCallable ListLicenseSpecificationsForResourceCallable(const Model::ListLicenseSpecificationsForResourceRequest& request) const;

        /**
         * <p>Describes the license configurations for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicenseSpecificationsForResourceAsync(const Model::ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all versions of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseVersionsOutcome ListLicenseVersions(const Model::ListLicenseVersionsRequest& request) const;

        /**
         * <p>Lists all versions of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicenseVersionsOutcomeCallable ListLicenseVersionsCallable(const Model::ListLicenseVersionsRequest& request) const;

        /**
         * <p>Lists all versions of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLicenseVersionsAsync(const Model::ListLicenseVersionsRequest& request, const ListLicenseVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the licenses for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicensesOutcome ListLicenses(const Model::ListLicensesRequest& request) const;

        /**
         * <p>Lists the licenses for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLicensesOutcomeCallable ListLicensesCallable(const Model::ListLicensesRequest& request) const;

        /**
         * <p>Lists the licenses for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists grants that are received but not accepted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedGrants">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceivedGrantsOutcomeCallable ListReceivedGrantsCallable(const Model::ListReceivedGrantsRequest& request) const;

        /**
         * <p>Lists grants that are received but not accepted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedGrants">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceivedGrantsAsync(const Model::ListReceivedGrantsRequest& request, const ListReceivedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists received licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedLicenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedLicensesOutcome ListReceivedLicenses(const Model::ListReceivedLicensesRequest& request) const;

        /**
         * <p>Lists received licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedLicenses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceivedLicensesOutcomeCallable ListReceivedLicensesCallable(const Model::ListReceivedLicensesRequest& request) const;

        /**
         * <p>Lists received licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedLicenses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists resources managed using Systems Manager inventory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListResourceInventory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceInventoryOutcomeCallable ListResourceInventoryCallable(const Model::ListResourceInventoryRequest& request) const;

        /**
         * <p>Lists resources managed using Systems Manager inventory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListResourceInventory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the tags for the specified license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your tokens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTokens">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTokensOutcome ListTokens(const Model::ListTokensRequest& request) const;

        /**
         * <p>Lists your tokens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTokens">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTokensOutcomeCallable ListTokensCallable(const Model::ListTokensRequest& request) const;

        /**
         * <p>Lists your tokens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTokens">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all license usage records for a license configuration, displaying
         * license consumption details by resource at a selected point in time. Use this
         * action to audit the current license consumption for any license inventory and
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListUsageForLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsageForLicenseConfigurationOutcomeCallable ListUsageForLicenseConfigurationCallable(const Model::ListUsageForLicenseConfigurationRequest& request) const;

        /**
         * <p>Lists all license usage records for a license configuration, displaying
         * license consumption details by resource at a selected point in time. Use this
         * action to audit the current license consumption for any license inventory and
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListUsageForLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsageForLicenseConfigurationAsync(const Model::ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/RejectGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectGrantOutcome RejectGrant(const Model::RejectGrantRequest& request) const;

        /**
         * <p>Rejects the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/RejectGrant">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectGrantOutcomeCallable RejectGrantCallable(const Model::RejectGrantRequest& request) const;

        /**
         * <p>Rejects the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/RejectGrant">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Adds the specified tags to the specified license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes the specified tags from the specified license
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified license
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Modifies the attributes of an existing license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLicenseConfigurationOutcomeCallable UpdateLicenseConfigurationCallable(const Model::UpdateLicenseConfigurationRequest& request) const;

        /**
         * <p>Modifies the attributes of an existing license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLicenseConfigurationAsync(const Model::UpdateLicenseConfigurationRequest& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or removes the specified license configurations for the specified AWS
         * resource.</p> <p>You can update the license specifications of AMIs, instances,
         * and hosts. You cannot update the license specifications for launch templates and
         * AWS CloudFormation templates, as they send license configurations to the
         * operation that creates the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLicenseSpecificationsForResourceOutcome UpdateLicenseSpecificationsForResource(const Model::UpdateLicenseSpecificationsForResourceRequest& request) const;

        /**
         * <p>Adds or removes the specified license configurations for the specified AWS
         * resource.</p> <p>You can update the license specifications of AMIs, instances,
         * and hosts. You cannot update the license specifications for launch templates and
         * AWS CloudFormation templates, as they send license configurations to the
         * operation that creates the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLicenseSpecificationsForResourceOutcomeCallable UpdateLicenseSpecificationsForResourceCallable(const Model::UpdateLicenseSpecificationsForResourceRequest& request) const;

        /**
         * <p>Adds or removes the specified license configurations for the specified AWS
         * resource.</p> <p>You can update the license specifications of AMIs, instances,
         * and hosts. You cannot update the license specifications for launch templates and
         * AWS CloudFormation templates, as they send license configurations to the
         * operation that creates the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates License Manager settings for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateServiceSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceSettingsOutcomeCallable UpdateServiceSettingsCallable(const Model::UpdateServiceSettingsRequest& request) const;

        /**
         * <p>Updates License Manager settings for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateServiceSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceSettingsAsync(const Model::UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptGrantAsyncHelper(const Model::AcceptGrantRequest& request, const AcceptGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckInLicenseAsyncHelper(const Model::CheckInLicenseRequest& request, const CheckInLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckoutBorrowLicenseAsyncHelper(const Model::CheckoutBorrowLicenseRequest& request, const CheckoutBorrowLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckoutLicenseAsyncHelper(const Model::CheckoutLicenseRequest& request, const CheckoutLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGrantAsyncHelper(const Model::CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGrantVersionAsyncHelper(const Model::CreateGrantVersionRequest& request, const CreateGrantVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLicenseAsyncHelper(const Model::CreateLicenseRequest& request, const CreateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLicenseConfigurationAsyncHelper(const Model::CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLicenseVersionAsyncHelper(const Model::CreateLicenseVersionRequest& request, const CreateLicenseVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTokenAsyncHelper(const Model::CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGrantAsyncHelper(const Model::DeleteGrantRequest& request, const DeleteGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLicenseAsyncHelper(const Model::DeleteLicenseRequest& request, const DeleteLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLicenseConfigurationAsyncHelper(const Model::DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTokenAsyncHelper(const Model::DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExtendLicenseConsumptionAsyncHelper(const Model::ExtendLicenseConsumptionRequest& request, const ExtendLicenseConsumptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessTokenAsyncHelper(const Model::GetAccessTokenRequest& request, const GetAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGrantAsyncHelper(const Model::GetGrantRequest& request, const GetGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLicenseAsyncHelper(const Model::GetLicenseRequest& request, const GetLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLicenseConfigurationAsyncHelper(const Model::GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLicenseUsageAsyncHelper(const Model::GetLicenseUsageRequest& request, const GetLicenseUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceSettingsAsyncHelper(const Model::GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociationsForLicenseConfigurationAsyncHelper(const Model::ListAssociationsForLicenseConfigurationRequest& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributedGrantsAsyncHelper(const Model::ListDistributedGrantsRequest& request, const ListDistributedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFailuresForLicenseConfigurationOperationsAsyncHelper(const Model::ListFailuresForLicenseConfigurationOperationsRequest& request, const ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLicenseConfigurationsAsyncHelper(const Model::ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLicenseSpecificationsForResourceAsyncHelper(const Model::ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLicenseVersionsAsyncHelper(const Model::ListLicenseVersionsRequest& request, const ListLicenseVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLicensesAsyncHelper(const Model::ListLicensesRequest& request, const ListLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReceivedGrantsAsyncHelper(const Model::ListReceivedGrantsRequest& request, const ListReceivedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReceivedLicensesAsyncHelper(const Model::ListReceivedLicensesRequest& request, const ListReceivedLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceInventoryAsyncHelper(const Model::ListResourceInventoryRequest& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTokensAsyncHelper(const Model::ListTokensRequest& request, const ListTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsageForLicenseConfigurationAsyncHelper(const Model::ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectGrantAsyncHelper(const Model::RejectGrantRequest& request, const RejectGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLicenseConfigurationAsyncHelper(const Model::UpdateLicenseConfigurationRequest& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLicenseSpecificationsForResourceAsyncHelper(const Model::UpdateLicenseSpecificationsForResourceRequest& request, const UpdateLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceSettingsAsyncHelper(const Model::UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LicenseManager
} // namespace Aws
