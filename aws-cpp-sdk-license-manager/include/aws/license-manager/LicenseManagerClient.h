/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/LicenseManagerServiceClientModel.h>
#include <aws/license-manager/LicenseManagerLegacyAsyncMacros.h>

namespace Aws
{
namespace LicenseManager
{
  /**
   * <p>License Manager makes it easier to manage licenses from software vendors
   * across multiple Amazon Web Services accounts and on-premises servers.</p>
   */
  class AWS_LICENSEMANAGER_API LicenseManagerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerClient(const Aws::LicenseManager::LicenseManagerClientConfiguration& clientConfiguration = Aws::LicenseManager::LicenseManagerClientConfiguration(),
                             std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG),
                             const Aws::LicenseManager::LicenseManagerClientConfiguration& clientConfiguration = Aws::LicenseManager::LicenseManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG),
                             const Aws::LicenseManager::LicenseManagerClientConfiguration& clientConfiguration = Aws::LicenseManager::LicenseManagerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LicenseManagerClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Accepts the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/AcceptGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptGrantOutcome AcceptGrant(const Model::AcceptGrantRequest& request) const;


        /**
         * <p>Checks in the specified license. Check in a license when it is no longer in
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckInLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckInLicenseOutcome CheckInLicense(const Model::CheckInLicenseRequest& request) const;


        /**
         * <p>Checks out the specified license for offline use.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutBorrowLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckoutBorrowLicenseOutcome CheckoutBorrowLicense(const Model::CheckoutBorrowLicenseRequest& request) const;


        /**
         * <p>Checks out the specified license.</p>  <p>If the account that created
         * the license is the same that is performing the check out, you must specify the
         * account as the beneficiary.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CheckoutLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckoutLicenseOutcome CheckoutLicense(const Model::CheckoutLicenseRequest& request) const;


        /**
         * <p>Creates a grant for the specified license. A grant shares the use of license
         * entitlements with specific Amazon Web Services accounts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGrantOutcome CreateGrant(const Model::CreateGrantRequest& request) const;


        /**
         * <p>Creates a new version of the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrantVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGrantVersionOutcome CreateGrantVersion(const Model::CreateGrantVersionRequest& request) const;


        /**
         * <p>Creates a license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseOutcome CreateLicense(const Model::CreateLicenseRequest& request) const;


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
         * <p>Creates a new license conversion task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseConversionTaskForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseConversionTaskForResourceOutcome CreateLicenseConversionTaskForResource(const Model::CreateLicenseConversionTaskForResourceRequest& request) const;


        /**
         * <p>Creates a report generator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseManagerReportGenerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseManagerReportGeneratorOutcome CreateLicenseManagerReportGenerator(const Model::CreateLicenseManagerReportGeneratorRequest& request) const;


        /**
         * <p>Creates a new version of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseVersionOutcome CreateLicenseVersion(const Model::CreateLicenseVersionRequest& request) const;


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
         * <p>Deletes the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGrantOutcome DeleteGrant(const Model::DeleteGrantRequest& request) const;


        /**
         * <p>Deletes the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseOutcome DeleteLicense(const Model::DeleteLicenseRequest& request) const;


        /**
         * <p>Deletes the specified license configuration.</p> <p>You cannot delete a
         * license configuration that is in use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseConfigurationOutcome DeleteLicenseConfiguration(const Model::DeleteLicenseConfigurationRequest& request) const;


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
         * <p>Deletes the specified token. Must be called in the license home
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteToken">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTokenOutcome DeleteToken(const Model::DeleteTokenRequest& request) const;


        /**
         * <p>Extends the expiration date for license consumption.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ExtendLicenseConsumption">AWS
         * API Reference</a></p>
         */
        virtual Model::ExtendLicenseConsumptionOutcome ExtendLicenseConsumption(const Model::ExtendLicenseConsumptionRequest& request) const;


        /**
         * <p>Gets a temporary access token to use with AssumeRoleWithWebIdentity. Access
         * tokens are valid for one hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetAccessToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessTokenOutcome GetAccessToken(const Model::GetAccessTokenRequest& request) const;


        /**
         * <p>Gets detailed information about the specified grant.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGrantOutcome GetGrant(const Model::GetGrantRequest& request) const;


        /**
         * <p>Gets detailed information about the specified license.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseOutcome GetLicense(const Model::GetLicenseRequest& request) const;


        /**
         * <p>Gets detailed information about the specified license
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseConfigurationOutcome GetLicenseConfiguration(const Model::GetLicenseConfigurationRequest& request) const;


        /**
         * <p>Gets information about the specified license type conversion
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseConversionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseConversionTaskOutcome GetLicenseConversionTask(const Model::GetLicenseConversionTaskRequest& request) const;


        /**
         * <p>Gets information about the specified report generator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseManagerReportGenerator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseManagerReportGeneratorOutcome GetLicenseManagerReportGenerator(const Model::GetLicenseManagerReportGeneratorRequest& request) const;


        /**
         * <p>Gets detailed information about the usage of the specified
         * license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetLicenseUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseUsageOutcome GetLicenseUsage(const Model::GetLicenseUsageRequest& request) const;


        /**
         * <p>Gets the License Manager settings for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GetServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingsOutcome GetServiceSettings(const Model::GetServiceSettingsRequest& request) const;


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
         * <p>Lists the grants distributed for the specified license.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListDistributedGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributedGrantsOutcome ListDistributedGrants(const Model::ListDistributedGrantsRequest& request) const;


        /**
         * <p>Lists the license configuration operations that failed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListFailuresForLicenseConfigurationOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFailuresForLicenseConfigurationOperationsOutcome ListFailuresForLicenseConfigurationOperations(const Model::ListFailuresForLicenseConfigurationOperationsRequest& request) const;


        /**
         * <p>Lists the license configurations for your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseConfigurationsOutcome ListLicenseConfigurations(const Model::ListLicenseConfigurationsRequest& request) const;


        /**
         * <p>Lists the license type conversion tasks for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseConversionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseConversionTasksOutcome ListLicenseConversionTasks(const Model::ListLicenseConversionTasksRequest& request) const;


        /**
         * <p>Lists the report generators for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseManagerReportGenerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseManagerReportGeneratorsOutcome ListLicenseManagerReportGenerators(const Model::ListLicenseManagerReportGeneratorsRequest& request) const;


        /**
         * <p>Describes the license configurations for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseSpecificationsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseSpecificationsForResourceOutcome ListLicenseSpecificationsForResource(const Model::ListLicenseSpecificationsForResourceRequest& request) const;


        /**
         * <p>Lists all versions of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseVersionsOutcome ListLicenseVersions(const Model::ListLicenseVersionsRequest& request) const;


        /**
         * <p>Lists the licenses for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicensesOutcome ListLicenses(const Model::ListLicensesRequest& request) const;


        /**
         * <p>Lists grants that are received but not accepted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedGrantsOutcome ListReceivedGrants(const Model::ListReceivedGrantsRequest& request) const;


        /**
         * <p>Lists the grants received for all accounts in the organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedGrantsForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedGrantsForOrganizationOutcome ListReceivedGrantsForOrganization(const Model::ListReceivedGrantsForOrganizationRequest& request) const;


        /**
         * <p>Lists received licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedLicenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedLicensesOutcome ListReceivedLicenses(const Model::ListReceivedLicensesRequest& request) const;


        /**
         * <p>Lists the licenses received for all accounts in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedLicensesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedLicensesForOrganizationOutcome ListReceivedLicensesForOrganization(const Model::ListReceivedLicensesForOrganizationRequest& request) const;


        /**
         * <p>Lists resources managed using Systems Manager inventory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListResourceInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceInventoryOutcome ListResourceInventory(const Model::ListResourceInventoryRequest& request) const;


        /**
         * <p>Lists the tags for the specified license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists your tokens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTokens">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTokensOutcome ListTokens(const Model::ListTokensRequest& request) const;


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
         * <p>Rejects the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/RejectGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectGrantOutcome RejectGrant(const Model::RejectGrantRequest& request) const;


        /**
         * <p>Adds the specified tags to the specified license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tags from the specified license
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Modifies the attributes of an existing license configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLicenseConfigurationOutcome UpdateLicenseConfiguration(const Model::UpdateLicenseConfigurationRequest& request) const;


        /**
         * <p>Updates a report generator.</p> <p>After you make changes to a report
         * generator, it starts generating new reports within 60 minutes of being
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateLicenseManagerReportGenerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLicenseManagerReportGeneratorOutcome UpdateLicenseManagerReportGenerator(const Model::UpdateLicenseManagerReportGeneratorRequest& request) const;


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
         * <p>Updates License Manager settings for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/UpdateServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSettingsOutcome UpdateServiceSettings(const Model::UpdateServiceSettingsRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LicenseManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LicenseManagerClientConfiguration& clientConfiguration);

      LicenseManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LicenseManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace LicenseManager
} // namespace Aws
