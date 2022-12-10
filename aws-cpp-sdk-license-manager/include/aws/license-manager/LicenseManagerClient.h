/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/LicenseManagerServiceClientModel.h>

namespace Aws
{
namespace LicenseManager
{
  /**
   * <p>License Manager makes it easier to manage licenses from software vendors
   * across multiple Amazon Web Services accounts and on-premises servers.</p>
   */
  class AWS_LICENSEMANAGER_API LicenseManagerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LicenseManagerClient>
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
         * <p>Checks out the specified license.</p>  <p>If the account that created
         * the license is the same that is performing the check out, you must specify the
         * account as the beneficiary.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Lists the grants received for all accounts in the organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedGrantsForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedGrantsForOrganizationOutcome ListReceivedGrantsForOrganization(const Model::ListReceivedGrantsForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for ListReceivedGrantsForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceivedGrantsForOrganizationOutcomeCallable ListReceivedGrantsForOrganizationCallable(const Model::ListReceivedGrantsForOrganizationRequest& request) const;

        /**
         * An Async wrapper for ListReceivedGrantsForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceivedGrantsForOrganizationAsync(const Model::ListReceivedGrantsForOrganizationRequest& request, const ListReceivedGrantsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists the licenses received for all accounts in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedLicensesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedLicensesForOrganizationOutcome ListReceivedLicensesForOrganization(const Model::ListReceivedLicensesForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for ListReceivedLicensesForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceivedLicensesForOrganizationOutcomeCallable ListReceivedLicensesForOrganizationCallable(const Model::ListReceivedLicensesForOrganizationRequest& request) const;

        /**
         * An Async wrapper for ListReceivedLicensesForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceivedLicensesForOrganizationAsync(const Model::ListReceivedLicensesForOrganizationRequest& request, const ListReceivedLicensesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
      std::shared_ptr<LicenseManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LicenseManagerClient>;
      void init(const LicenseManagerClientConfiguration& clientConfiguration);

      LicenseManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LicenseManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace LicenseManager
} // namespace Aws
