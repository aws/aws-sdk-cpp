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
#include <aws/license-manager/model/CreateLicenseConfigurationResult.h>
#include <aws/license-manager/model/DeleteLicenseConfigurationResult.h>
#include <aws/license-manager/model/GetLicenseConfigurationResult.h>
#include <aws/license-manager/model/GetServiceSettingsResult.h>
#include <aws/license-manager/model/ListAssociationsForLicenseConfigurationResult.h>
#include <aws/license-manager/model/ListFailuresForLicenseConfigurationOperationsResult.h>
#include <aws/license-manager/model/ListLicenseConfigurationsResult.h>
#include <aws/license-manager/model/ListLicenseSpecificationsForResourceResult.h>
#include <aws/license-manager/model/ListResourceInventoryResult.h>
#include <aws/license-manager/model/ListTagsForResourceResult.h>
#include <aws/license-manager/model/ListUsageForLicenseConfigurationResult.h>
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
        class CreateLicenseConfigurationRequest;
        class DeleteLicenseConfigurationRequest;
        class GetLicenseConfigurationRequest;
        class GetServiceSettingsRequest;
        class ListAssociationsForLicenseConfigurationRequest;
        class ListFailuresForLicenseConfigurationOperationsRequest;
        class ListLicenseConfigurationsRequest;
        class ListLicenseSpecificationsForResourceRequest;
        class ListResourceInventoryRequest;
        class ListTagsForResourceRequest;
        class ListUsageForLicenseConfigurationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateLicenseConfigurationRequest;
        class UpdateLicenseSpecificationsForResourceRequest;
        class UpdateServiceSettingsRequest;

        typedef Aws::Utils::Outcome<CreateLicenseConfigurationResult, LicenseManagerError> CreateLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteLicenseConfigurationResult, LicenseManagerError> DeleteLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetLicenseConfigurationResult, LicenseManagerError> GetLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetServiceSettingsResult, LicenseManagerError> GetServiceSettingsOutcome;
        typedef Aws::Utils::Outcome<ListAssociationsForLicenseConfigurationResult, LicenseManagerError> ListAssociationsForLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<ListFailuresForLicenseConfigurationOperationsResult, LicenseManagerError> ListFailuresForLicenseConfigurationOperationsOutcome;
        typedef Aws::Utils::Outcome<ListLicenseConfigurationsResult, LicenseManagerError> ListLicenseConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListLicenseSpecificationsForResourceResult, LicenseManagerError> ListLicenseSpecificationsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListResourceInventoryResult, LicenseManagerError> ListResourceInventoryOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, LicenseManagerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListUsageForLicenseConfigurationResult, LicenseManagerError> ListUsageForLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LicenseManagerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LicenseManagerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateLicenseConfigurationResult, LicenseManagerError> UpdateLicenseConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateLicenseSpecificationsForResourceResult, LicenseManagerError> UpdateLicenseSpecificationsForResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceSettingsResult, LicenseManagerError> UpdateServiceSettingsOutcome;

        typedef std::future<CreateLicenseConfigurationOutcome> CreateLicenseConfigurationOutcomeCallable;
        typedef std::future<DeleteLicenseConfigurationOutcome> DeleteLicenseConfigurationOutcomeCallable;
        typedef std::future<GetLicenseConfigurationOutcome> GetLicenseConfigurationOutcomeCallable;
        typedef std::future<GetServiceSettingsOutcome> GetServiceSettingsOutcomeCallable;
        typedef std::future<ListAssociationsForLicenseConfigurationOutcome> ListAssociationsForLicenseConfigurationOutcomeCallable;
        typedef std::future<ListFailuresForLicenseConfigurationOperationsOutcome> ListFailuresForLicenseConfigurationOperationsOutcomeCallable;
        typedef std::future<ListLicenseConfigurationsOutcome> ListLicenseConfigurationsOutcomeCallable;
        typedef std::future<ListLicenseSpecificationsForResourceOutcome> ListLicenseSpecificationsForResourceOutcomeCallable;
        typedef std::future<ListResourceInventoryOutcome> ListResourceInventoryOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListUsageForLicenseConfigurationOutcome> ListUsageForLicenseConfigurationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateLicenseConfigurationOutcome> UpdateLicenseConfigurationOutcomeCallable;
        typedef std::future<UpdateLicenseSpecificationsForResourceOutcome> UpdateLicenseSpecificationsForResourceOutcomeCallable;
        typedef std::future<UpdateServiceSettingsOutcome> UpdateServiceSettingsOutcomeCallable;
} // namespace Model

  class LicenseManagerClient;

    typedef std::function<void(const LicenseManagerClient*, const Model::CreateLicenseConfigurationRequest&, const Model::CreateLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::DeleteLicenseConfigurationRequest&, const Model::DeleteLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetLicenseConfigurationRequest&, const Model::GetLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::GetServiceSettingsRequest&, const Model::GetServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceSettingsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListAssociationsForLicenseConfigurationRequest&, const Model::ListAssociationsForLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsForLicenseConfigurationResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListFailuresForLicenseConfigurationOperationsRequest&, const Model::ListFailuresForLicenseConfigurationOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicenseConfigurationsRequest&, const Model::ListLicenseConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseConfigurationsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListLicenseSpecificationsForResourceRequest&, const Model::ListLicenseSpecificationsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseSpecificationsForResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListResourceInventoryRequest&, const Model::ListResourceInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceInventoryResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerClient*, const Model::ListUsageForLicenseConfigurationRequest&, const Model::ListUsageForLicenseConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsageForLicenseConfigurationResponseReceivedHandler;
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
        void CreateLicenseConfigurationAsyncHelper(const Model::CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLicenseConfigurationAsyncHelper(const Model::DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLicenseConfigurationAsyncHelper(const Model::GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceSettingsAsyncHelper(const Model::GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociationsForLicenseConfigurationAsyncHelper(const Model::ListAssociationsForLicenseConfigurationRequest& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFailuresForLicenseConfigurationOperationsAsyncHelper(const Model::ListFailuresForLicenseConfigurationOperationsRequest& request, const ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLicenseConfigurationsAsyncHelper(const Model::ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLicenseSpecificationsForResourceAsyncHelper(const Model::ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceInventoryAsyncHelper(const Model::ListResourceInventoryRequest& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsageForLicenseConfigurationAsyncHelper(const Model::ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
