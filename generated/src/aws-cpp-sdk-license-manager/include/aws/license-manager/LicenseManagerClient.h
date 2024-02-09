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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LicenseManagerClientConfiguration ClientConfigurationType;
      typedef LicenseManagerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerClient(const Aws::LicenseManager::LicenseManagerClientConfiguration& clientConfiguration = Aws::LicenseManager::LicenseManagerClientConfiguration(),
                             std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::LicenseManager::LicenseManagerClientConfiguration& clientConfiguration = Aws::LicenseManager::LicenseManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AcceptGrantRequestT = Model::AcceptGrantRequest>
        Model::AcceptGrantOutcomeCallable AcceptGrantCallable(const AcceptGrantRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::AcceptGrant, request);
        }

        /**
         * An Async wrapper for AcceptGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptGrantRequestT = Model::AcceptGrantRequest>
        void AcceptGrantAsync(const AcceptGrantRequestT& request, const AcceptGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::AcceptGrant, request, handler, context);
        }

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
        template<typename CheckInLicenseRequestT = Model::CheckInLicenseRequest>
        Model::CheckInLicenseOutcomeCallable CheckInLicenseCallable(const CheckInLicenseRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CheckInLicense, request);
        }

        /**
         * An Async wrapper for CheckInLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckInLicenseRequestT = Model::CheckInLicenseRequest>
        void CheckInLicenseAsync(const CheckInLicenseRequestT& request, const CheckInLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CheckInLicense, request, handler, context);
        }

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
        template<typename CheckoutBorrowLicenseRequestT = Model::CheckoutBorrowLicenseRequest>
        Model::CheckoutBorrowLicenseOutcomeCallable CheckoutBorrowLicenseCallable(const CheckoutBorrowLicenseRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CheckoutBorrowLicense, request);
        }

        /**
         * An Async wrapper for CheckoutBorrowLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckoutBorrowLicenseRequestT = Model::CheckoutBorrowLicenseRequest>
        void CheckoutBorrowLicenseAsync(const CheckoutBorrowLicenseRequestT& request, const CheckoutBorrowLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CheckoutBorrowLicense, request, handler, context);
        }

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
        template<typename CheckoutLicenseRequestT = Model::CheckoutLicenseRequest>
        Model::CheckoutLicenseOutcomeCallable CheckoutLicenseCallable(const CheckoutLicenseRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CheckoutLicense, request);
        }

        /**
         * An Async wrapper for CheckoutLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckoutLicenseRequestT = Model::CheckoutLicenseRequest>
        void CheckoutLicenseAsync(const CheckoutLicenseRequestT& request, const CheckoutLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CheckoutLicense, request, handler, context);
        }

        /**
         * <p>Creates a grant for the specified license. A grant shares the use of license
         * entitlements with a specific Amazon Web Services account, an organization, or an
         * organizational unit (OU). For more information, see <a
         * href="https://docs.aws.amazon.com/license-manager/latest/userguide/granted-licenses.html">Granted
         * licenses in License Manager</a> in the <i>License Manager User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGrantOutcome CreateGrant(const Model::CreateGrantRequest& request) const;

        /**
         * A Callable wrapper for CreateGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGrantRequestT = Model::CreateGrantRequest>
        Model::CreateGrantOutcomeCallable CreateGrantCallable(const CreateGrantRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CreateGrant, request);
        }

        /**
         * An Async wrapper for CreateGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGrantRequestT = Model::CreateGrantRequest>
        void CreateGrantAsync(const CreateGrantRequestT& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CreateGrant, request, handler, context);
        }

        /**
         * <p>Creates a new version of the specified grant. For more information, see <a
         * href="https://docs.aws.amazon.com/license-manager/latest/userguide/granted-licenses.html">Granted
         * licenses in License Manager</a> in the <i>License Manager User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateGrantVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGrantVersionOutcome CreateGrantVersion(const Model::CreateGrantVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateGrantVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGrantVersionRequestT = Model::CreateGrantVersionRequest>
        Model::CreateGrantVersionOutcomeCallable CreateGrantVersionCallable(const CreateGrantVersionRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CreateGrantVersion, request);
        }

        /**
         * An Async wrapper for CreateGrantVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGrantVersionRequestT = Model::CreateGrantVersionRequest>
        void CreateGrantVersionAsync(const CreateGrantVersionRequestT& request, const CreateGrantVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CreateGrantVersion, request, handler, context);
        }

        /**
         * <p>Creates a license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseOutcome CreateLicense(const Model::CreateLicenseRequest& request) const;

        /**
         * A Callable wrapper for CreateLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLicenseRequestT = Model::CreateLicenseRequest>
        Model::CreateLicenseOutcomeCallable CreateLicenseCallable(const CreateLicenseRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CreateLicense, request);
        }

        /**
         * An Async wrapper for CreateLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLicenseRequestT = Model::CreateLicenseRequest>
        void CreateLicenseAsync(const CreateLicenseRequestT& request, const CreateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CreateLicense, request, handler, context);
        }

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
        template<typename CreateLicenseConfigurationRequestT = Model::CreateLicenseConfigurationRequest>
        Model::CreateLicenseConfigurationOutcomeCallable CreateLicenseConfigurationCallable(const CreateLicenseConfigurationRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CreateLicenseConfiguration, request);
        }

        /**
         * An Async wrapper for CreateLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLicenseConfigurationRequestT = Model::CreateLicenseConfigurationRequest>
        void CreateLicenseConfigurationAsync(const CreateLicenseConfigurationRequestT& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CreateLicenseConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new license conversion task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseConversionTaskForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseConversionTaskForResourceOutcome CreateLicenseConversionTaskForResource(const Model::CreateLicenseConversionTaskForResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseConversionTaskForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLicenseConversionTaskForResourceRequestT = Model::CreateLicenseConversionTaskForResourceRequest>
        Model::CreateLicenseConversionTaskForResourceOutcomeCallable CreateLicenseConversionTaskForResourceCallable(const CreateLicenseConversionTaskForResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CreateLicenseConversionTaskForResource, request);
        }

        /**
         * An Async wrapper for CreateLicenseConversionTaskForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLicenseConversionTaskForResourceRequestT = Model::CreateLicenseConversionTaskForResourceRequest>
        void CreateLicenseConversionTaskForResourceAsync(const CreateLicenseConversionTaskForResourceRequestT& request, const CreateLicenseConversionTaskForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CreateLicenseConversionTaskForResource, request, handler, context);
        }

        /**
         * <p>Creates a report generator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseManagerReportGenerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseManagerReportGeneratorOutcome CreateLicenseManagerReportGenerator(const Model::CreateLicenseManagerReportGeneratorRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseManagerReportGenerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLicenseManagerReportGeneratorRequestT = Model::CreateLicenseManagerReportGeneratorRequest>
        Model::CreateLicenseManagerReportGeneratorOutcomeCallable CreateLicenseManagerReportGeneratorCallable(const CreateLicenseManagerReportGeneratorRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CreateLicenseManagerReportGenerator, request);
        }

        /**
         * An Async wrapper for CreateLicenseManagerReportGenerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLicenseManagerReportGeneratorRequestT = Model::CreateLicenseManagerReportGeneratorRequest>
        void CreateLicenseManagerReportGeneratorAsync(const CreateLicenseManagerReportGeneratorRequestT& request, const CreateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CreateLicenseManagerReportGenerator, request, handler, context);
        }

        /**
         * <p>Creates a new version of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CreateLicenseVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseVersionOutcome CreateLicenseVersion(const Model::CreateLicenseVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLicenseVersionRequestT = Model::CreateLicenseVersionRequest>
        Model::CreateLicenseVersionOutcomeCallable CreateLicenseVersionCallable(const CreateLicenseVersionRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CreateLicenseVersion, request);
        }

        /**
         * An Async wrapper for CreateLicenseVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLicenseVersionRequestT = Model::CreateLicenseVersionRequest>
        void CreateLicenseVersionAsync(const CreateLicenseVersionRequestT& request, const CreateLicenseVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CreateLicenseVersion, request, handler, context);
        }

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
        template<typename CreateTokenRequestT = Model::CreateTokenRequest>
        Model::CreateTokenOutcomeCallable CreateTokenCallable(const CreateTokenRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::CreateToken, request);
        }

        /**
         * An Async wrapper for CreateToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTokenRequestT = Model::CreateTokenRequest>
        void CreateTokenAsync(const CreateTokenRequestT& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::CreateToken, request, handler, context);
        }

        /**
         * <p>Deletes the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGrantOutcome DeleteGrant(const Model::DeleteGrantRequest& request) const;

        /**
         * A Callable wrapper for DeleteGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGrantRequestT = Model::DeleteGrantRequest>
        Model::DeleteGrantOutcomeCallable DeleteGrantCallable(const DeleteGrantRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::DeleteGrant, request);
        }

        /**
         * An Async wrapper for DeleteGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGrantRequestT = Model::DeleteGrantRequest>
        void DeleteGrantAsync(const DeleteGrantRequestT& request, const DeleteGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::DeleteGrant, request, handler, context);
        }

        /**
         * <p>Deletes the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/DeleteLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseOutcome DeleteLicense(const Model::DeleteLicenseRequest& request) const;

        /**
         * A Callable wrapper for DeleteLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLicenseRequestT = Model::DeleteLicenseRequest>
        Model::DeleteLicenseOutcomeCallable DeleteLicenseCallable(const DeleteLicenseRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::DeleteLicense, request);
        }

        /**
         * An Async wrapper for DeleteLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLicenseRequestT = Model::DeleteLicenseRequest>
        void DeleteLicenseAsync(const DeleteLicenseRequestT& request, const DeleteLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::DeleteLicense, request, handler, context);
        }

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
        template<typename DeleteLicenseConfigurationRequestT = Model::DeleteLicenseConfigurationRequest>
        Model::DeleteLicenseConfigurationOutcomeCallable DeleteLicenseConfigurationCallable(const DeleteLicenseConfigurationRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::DeleteLicenseConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLicenseConfigurationRequestT = Model::DeleteLicenseConfigurationRequest>
        void DeleteLicenseConfigurationAsync(const DeleteLicenseConfigurationRequestT& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::DeleteLicenseConfiguration, request, handler, context);
        }

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
        template<typename DeleteLicenseManagerReportGeneratorRequestT = Model::DeleteLicenseManagerReportGeneratorRequest>
        Model::DeleteLicenseManagerReportGeneratorOutcomeCallable DeleteLicenseManagerReportGeneratorCallable(const DeleteLicenseManagerReportGeneratorRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::DeleteLicenseManagerReportGenerator, request);
        }

        /**
         * An Async wrapper for DeleteLicenseManagerReportGenerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLicenseManagerReportGeneratorRequestT = Model::DeleteLicenseManagerReportGeneratorRequest>
        void DeleteLicenseManagerReportGeneratorAsync(const DeleteLicenseManagerReportGeneratorRequestT& request, const DeleteLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::DeleteLicenseManagerReportGenerator, request, handler, context);
        }

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
        template<typename DeleteTokenRequestT = Model::DeleteTokenRequest>
        Model::DeleteTokenOutcomeCallable DeleteTokenCallable(const DeleteTokenRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::DeleteToken, request);
        }

        /**
         * An Async wrapper for DeleteToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTokenRequestT = Model::DeleteTokenRequest>
        void DeleteTokenAsync(const DeleteTokenRequestT& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::DeleteToken, request, handler, context);
        }

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
        template<typename ExtendLicenseConsumptionRequestT = Model::ExtendLicenseConsumptionRequest>
        Model::ExtendLicenseConsumptionOutcomeCallable ExtendLicenseConsumptionCallable(const ExtendLicenseConsumptionRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ExtendLicenseConsumption, request);
        }

        /**
         * An Async wrapper for ExtendLicenseConsumption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExtendLicenseConsumptionRequestT = Model::ExtendLicenseConsumptionRequest>
        void ExtendLicenseConsumptionAsync(const ExtendLicenseConsumptionRequestT& request, const ExtendLicenseConsumptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ExtendLicenseConsumption, request, handler, context);
        }

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
        template<typename GetAccessTokenRequestT = Model::GetAccessTokenRequest>
        Model::GetAccessTokenOutcomeCallable GetAccessTokenCallable(const GetAccessTokenRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::GetAccessToken, request);
        }

        /**
         * An Async wrapper for GetAccessToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessTokenRequestT = Model::GetAccessTokenRequest>
        void GetAccessTokenAsync(const GetAccessTokenRequestT& request, const GetAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::GetAccessToken, request, handler, context);
        }

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
        template<typename GetGrantRequestT = Model::GetGrantRequest>
        Model::GetGrantOutcomeCallable GetGrantCallable(const GetGrantRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::GetGrant, request);
        }

        /**
         * An Async wrapper for GetGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGrantRequestT = Model::GetGrantRequest>
        void GetGrantAsync(const GetGrantRequestT& request, const GetGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::GetGrant, request, handler, context);
        }

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
        template<typename GetLicenseRequestT = Model::GetLicenseRequest>
        Model::GetLicenseOutcomeCallable GetLicenseCallable(const GetLicenseRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::GetLicense, request);
        }

        /**
         * An Async wrapper for GetLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLicenseRequestT = Model::GetLicenseRequest>
        void GetLicenseAsync(const GetLicenseRequestT& request, const GetLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::GetLicense, request, handler, context);
        }

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
        template<typename GetLicenseConfigurationRequestT = Model::GetLicenseConfigurationRequest>
        Model::GetLicenseConfigurationOutcomeCallable GetLicenseConfigurationCallable(const GetLicenseConfigurationRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::GetLicenseConfiguration, request);
        }

        /**
         * An Async wrapper for GetLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLicenseConfigurationRequestT = Model::GetLicenseConfigurationRequest>
        void GetLicenseConfigurationAsync(const GetLicenseConfigurationRequestT& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::GetLicenseConfiguration, request, handler, context);
        }

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
        template<typename GetLicenseConversionTaskRequestT = Model::GetLicenseConversionTaskRequest>
        Model::GetLicenseConversionTaskOutcomeCallable GetLicenseConversionTaskCallable(const GetLicenseConversionTaskRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::GetLicenseConversionTask, request);
        }

        /**
         * An Async wrapper for GetLicenseConversionTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLicenseConversionTaskRequestT = Model::GetLicenseConversionTaskRequest>
        void GetLicenseConversionTaskAsync(const GetLicenseConversionTaskRequestT& request, const GetLicenseConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::GetLicenseConversionTask, request, handler, context);
        }

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
        template<typename GetLicenseManagerReportGeneratorRequestT = Model::GetLicenseManagerReportGeneratorRequest>
        Model::GetLicenseManagerReportGeneratorOutcomeCallable GetLicenseManagerReportGeneratorCallable(const GetLicenseManagerReportGeneratorRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::GetLicenseManagerReportGenerator, request);
        }

        /**
         * An Async wrapper for GetLicenseManagerReportGenerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLicenseManagerReportGeneratorRequestT = Model::GetLicenseManagerReportGeneratorRequest>
        void GetLicenseManagerReportGeneratorAsync(const GetLicenseManagerReportGeneratorRequestT& request, const GetLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::GetLicenseManagerReportGenerator, request, handler, context);
        }

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
        template<typename GetLicenseUsageRequestT = Model::GetLicenseUsageRequest>
        Model::GetLicenseUsageOutcomeCallable GetLicenseUsageCallable(const GetLicenseUsageRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::GetLicenseUsage, request);
        }

        /**
         * An Async wrapper for GetLicenseUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLicenseUsageRequestT = Model::GetLicenseUsageRequest>
        void GetLicenseUsageAsync(const GetLicenseUsageRequestT& request, const GetLicenseUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::GetLicenseUsage, request, handler, context);
        }

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
        template<typename GetServiceSettingsRequestT = Model::GetServiceSettingsRequest>
        Model::GetServiceSettingsOutcomeCallable GetServiceSettingsCallable(const GetServiceSettingsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::GetServiceSettings, request);
        }

        /**
         * An Async wrapper for GetServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceSettingsRequestT = Model::GetServiceSettingsRequest>
        void GetServiceSettingsAsync(const GetServiceSettingsRequestT& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::GetServiceSettings, request, handler, context);
        }

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
        template<typename ListAssociationsForLicenseConfigurationRequestT = Model::ListAssociationsForLicenseConfigurationRequest>
        Model::ListAssociationsForLicenseConfigurationOutcomeCallable ListAssociationsForLicenseConfigurationCallable(const ListAssociationsForLicenseConfigurationRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListAssociationsForLicenseConfiguration, request);
        }

        /**
         * An Async wrapper for ListAssociationsForLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssociationsForLicenseConfigurationRequestT = Model::ListAssociationsForLicenseConfigurationRequest>
        void ListAssociationsForLicenseConfigurationAsync(const ListAssociationsForLicenseConfigurationRequestT& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListAssociationsForLicenseConfiguration, request, handler, context);
        }

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
        template<typename ListDistributedGrantsRequestT = Model::ListDistributedGrantsRequest>
        Model::ListDistributedGrantsOutcomeCallable ListDistributedGrantsCallable(const ListDistributedGrantsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListDistributedGrants, request);
        }

        /**
         * An Async wrapper for ListDistributedGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributedGrantsRequestT = Model::ListDistributedGrantsRequest>
        void ListDistributedGrantsAsync(const ListDistributedGrantsRequestT& request, const ListDistributedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListDistributedGrants, request, handler, context);
        }

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
        template<typename ListFailuresForLicenseConfigurationOperationsRequestT = Model::ListFailuresForLicenseConfigurationOperationsRequest>
        Model::ListFailuresForLicenseConfigurationOperationsOutcomeCallable ListFailuresForLicenseConfigurationOperationsCallable(const ListFailuresForLicenseConfigurationOperationsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListFailuresForLicenseConfigurationOperations, request);
        }

        /**
         * An Async wrapper for ListFailuresForLicenseConfigurationOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFailuresForLicenseConfigurationOperationsRequestT = Model::ListFailuresForLicenseConfigurationOperationsRequest>
        void ListFailuresForLicenseConfigurationOperationsAsync(const ListFailuresForLicenseConfigurationOperationsRequestT& request, const ListFailuresForLicenseConfigurationOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListFailuresForLicenseConfigurationOperations, request, handler, context);
        }

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
        template<typename ListLicenseConfigurationsRequestT = Model::ListLicenseConfigurationsRequest>
        Model::ListLicenseConfigurationsOutcomeCallable ListLicenseConfigurationsCallable(const ListLicenseConfigurationsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListLicenseConfigurations, request);
        }

        /**
         * An Async wrapper for ListLicenseConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLicenseConfigurationsRequestT = Model::ListLicenseConfigurationsRequest>
        void ListLicenseConfigurationsAsync(const ListLicenseConfigurationsRequestT& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListLicenseConfigurations, request, handler, context);
        }

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
        template<typename ListLicenseConversionTasksRequestT = Model::ListLicenseConversionTasksRequest>
        Model::ListLicenseConversionTasksOutcomeCallable ListLicenseConversionTasksCallable(const ListLicenseConversionTasksRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListLicenseConversionTasks, request);
        }

        /**
         * An Async wrapper for ListLicenseConversionTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLicenseConversionTasksRequestT = Model::ListLicenseConversionTasksRequest>
        void ListLicenseConversionTasksAsync(const ListLicenseConversionTasksRequestT& request, const ListLicenseConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListLicenseConversionTasks, request, handler, context);
        }

        /**
         * <p>Lists the report generators for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseManagerReportGenerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseManagerReportGeneratorsOutcome ListLicenseManagerReportGenerators(const Model::ListLicenseManagerReportGeneratorsRequest& request) const;

        /**
         * A Callable wrapper for ListLicenseManagerReportGenerators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLicenseManagerReportGeneratorsRequestT = Model::ListLicenseManagerReportGeneratorsRequest>
        Model::ListLicenseManagerReportGeneratorsOutcomeCallable ListLicenseManagerReportGeneratorsCallable(const ListLicenseManagerReportGeneratorsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListLicenseManagerReportGenerators, request);
        }

        /**
         * An Async wrapper for ListLicenseManagerReportGenerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLicenseManagerReportGeneratorsRequestT = Model::ListLicenseManagerReportGeneratorsRequest>
        void ListLicenseManagerReportGeneratorsAsync(const ListLicenseManagerReportGeneratorsRequestT& request, const ListLicenseManagerReportGeneratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListLicenseManagerReportGenerators, request, handler, context);
        }

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
        template<typename ListLicenseSpecificationsForResourceRequestT = Model::ListLicenseSpecificationsForResourceRequest>
        Model::ListLicenseSpecificationsForResourceOutcomeCallable ListLicenseSpecificationsForResourceCallable(const ListLicenseSpecificationsForResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListLicenseSpecificationsForResource, request);
        }

        /**
         * An Async wrapper for ListLicenseSpecificationsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLicenseSpecificationsForResourceRequestT = Model::ListLicenseSpecificationsForResourceRequest>
        void ListLicenseSpecificationsForResourceAsync(const ListLicenseSpecificationsForResourceRequestT& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListLicenseSpecificationsForResource, request, handler, context);
        }

        /**
         * <p>Lists all versions of the specified license.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenseVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseVersionsOutcome ListLicenseVersions(const Model::ListLicenseVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListLicenseVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLicenseVersionsRequestT = Model::ListLicenseVersionsRequest>
        Model::ListLicenseVersionsOutcomeCallable ListLicenseVersionsCallable(const ListLicenseVersionsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListLicenseVersions, request);
        }

        /**
         * An Async wrapper for ListLicenseVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLicenseVersionsRequestT = Model::ListLicenseVersionsRequest>
        void ListLicenseVersionsAsync(const ListLicenseVersionsRequestT& request, const ListLicenseVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListLicenseVersions, request, handler, context);
        }

        /**
         * <p>Lists the licenses for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListLicenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicensesOutcome ListLicenses(const Model::ListLicensesRequest& request) const;

        /**
         * A Callable wrapper for ListLicenses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLicensesRequestT = Model::ListLicensesRequest>
        Model::ListLicensesOutcomeCallable ListLicensesCallable(const ListLicensesRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListLicenses, request);
        }

        /**
         * An Async wrapper for ListLicenses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLicensesRequestT = Model::ListLicensesRequest>
        void ListLicensesAsync(const ListLicensesRequestT& request, const ListLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListLicenses, request, handler, context);
        }

        /**
         * <p>Lists grants that are received. Received grants are grants created while
         * specifying the recipient as this Amazon Web Services account, your organization,
         * or an organizational unit (OU) to which this member account
         * belongs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedGrantsOutcome ListReceivedGrants(const Model::ListReceivedGrantsRequest& request) const;

        /**
         * A Callable wrapper for ListReceivedGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReceivedGrantsRequestT = Model::ListReceivedGrantsRequest>
        Model::ListReceivedGrantsOutcomeCallable ListReceivedGrantsCallable(const ListReceivedGrantsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListReceivedGrants, request);
        }

        /**
         * An Async wrapper for ListReceivedGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReceivedGrantsRequestT = Model::ListReceivedGrantsRequest>
        void ListReceivedGrantsAsync(const ListReceivedGrantsRequestT& request, const ListReceivedGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListReceivedGrants, request, handler, context);
        }

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
        template<typename ListReceivedGrantsForOrganizationRequestT = Model::ListReceivedGrantsForOrganizationRequest>
        Model::ListReceivedGrantsForOrganizationOutcomeCallable ListReceivedGrantsForOrganizationCallable(const ListReceivedGrantsForOrganizationRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListReceivedGrantsForOrganization, request);
        }

        /**
         * An Async wrapper for ListReceivedGrantsForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReceivedGrantsForOrganizationRequestT = Model::ListReceivedGrantsForOrganizationRequest>
        void ListReceivedGrantsForOrganizationAsync(const ListReceivedGrantsForOrganizationRequestT& request, const ListReceivedGrantsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListReceivedGrantsForOrganization, request, handler, context);
        }

        /**
         * <p>Lists received licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListReceivedLicenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceivedLicensesOutcome ListReceivedLicenses(const Model::ListReceivedLicensesRequest& request) const;

        /**
         * A Callable wrapper for ListReceivedLicenses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReceivedLicensesRequestT = Model::ListReceivedLicensesRequest>
        Model::ListReceivedLicensesOutcomeCallable ListReceivedLicensesCallable(const ListReceivedLicensesRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListReceivedLicenses, request);
        }

        /**
         * An Async wrapper for ListReceivedLicenses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReceivedLicensesRequestT = Model::ListReceivedLicensesRequest>
        void ListReceivedLicensesAsync(const ListReceivedLicensesRequestT& request, const ListReceivedLicensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListReceivedLicenses, request, handler, context);
        }

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
        template<typename ListReceivedLicensesForOrganizationRequestT = Model::ListReceivedLicensesForOrganizationRequest>
        Model::ListReceivedLicensesForOrganizationOutcomeCallable ListReceivedLicensesForOrganizationCallable(const ListReceivedLicensesForOrganizationRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListReceivedLicensesForOrganization, request);
        }

        /**
         * An Async wrapper for ListReceivedLicensesForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReceivedLicensesForOrganizationRequestT = Model::ListReceivedLicensesForOrganizationRequest>
        void ListReceivedLicensesForOrganizationAsync(const ListReceivedLicensesForOrganizationRequestT& request, const ListReceivedLicensesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListReceivedLicensesForOrganization, request, handler, context);
        }

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
        template<typename ListResourceInventoryRequestT = Model::ListResourceInventoryRequest>
        Model::ListResourceInventoryOutcomeCallable ListResourceInventoryCallable(const ListResourceInventoryRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListResourceInventory, request);
        }

        /**
         * An Async wrapper for ListResourceInventory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceInventoryRequestT = Model::ListResourceInventoryRequest>
        void ListResourceInventoryAsync(const ListResourceInventoryRequestT& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListResourceInventory, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists your tokens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ListTokens">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTokensOutcome ListTokens(const Model::ListTokensRequest& request) const;

        /**
         * A Callable wrapper for ListTokens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTokensRequestT = Model::ListTokensRequest>
        Model::ListTokensOutcomeCallable ListTokensCallable(const ListTokensRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListTokens, request);
        }

        /**
         * An Async wrapper for ListTokens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTokensRequestT = Model::ListTokensRequest>
        void ListTokensAsync(const ListTokensRequestT& request, const ListTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListTokens, request, handler, context);
        }

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
        template<typename ListUsageForLicenseConfigurationRequestT = Model::ListUsageForLicenseConfigurationRequest>
        Model::ListUsageForLicenseConfigurationOutcomeCallable ListUsageForLicenseConfigurationCallable(const ListUsageForLicenseConfigurationRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::ListUsageForLicenseConfiguration, request);
        }

        /**
         * An Async wrapper for ListUsageForLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsageForLicenseConfigurationRequestT = Model::ListUsageForLicenseConfigurationRequest>
        void ListUsageForLicenseConfigurationAsync(const ListUsageForLicenseConfigurationRequestT& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::ListUsageForLicenseConfiguration, request, handler, context);
        }

        /**
         * <p>Rejects the specified grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/RejectGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectGrantOutcome RejectGrant(const Model::RejectGrantRequest& request) const;

        /**
         * A Callable wrapper for RejectGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectGrantRequestT = Model::RejectGrantRequest>
        Model::RejectGrantOutcomeCallable RejectGrantCallable(const RejectGrantRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::RejectGrant, request);
        }

        /**
         * An Async wrapper for RejectGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectGrantRequestT = Model::RejectGrantRequest>
        void RejectGrantAsync(const RejectGrantRequestT& request, const RejectGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::RejectGrant, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateLicenseConfigurationRequestT = Model::UpdateLicenseConfigurationRequest>
        Model::UpdateLicenseConfigurationOutcomeCallable UpdateLicenseConfigurationCallable(const UpdateLicenseConfigurationRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::UpdateLicenseConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateLicenseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLicenseConfigurationRequestT = Model::UpdateLicenseConfigurationRequest>
        void UpdateLicenseConfigurationAsync(const UpdateLicenseConfigurationRequestT& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::UpdateLicenseConfiguration, request, handler, context);
        }

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
        template<typename UpdateLicenseManagerReportGeneratorRequestT = Model::UpdateLicenseManagerReportGeneratorRequest>
        Model::UpdateLicenseManagerReportGeneratorOutcomeCallable UpdateLicenseManagerReportGeneratorCallable(const UpdateLicenseManagerReportGeneratorRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::UpdateLicenseManagerReportGenerator, request);
        }

        /**
         * An Async wrapper for UpdateLicenseManagerReportGenerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLicenseManagerReportGeneratorRequestT = Model::UpdateLicenseManagerReportGeneratorRequest>
        void UpdateLicenseManagerReportGeneratorAsync(const UpdateLicenseManagerReportGeneratorRequestT& request, const UpdateLicenseManagerReportGeneratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::UpdateLicenseManagerReportGenerator, request, handler, context);
        }

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
        template<typename UpdateLicenseSpecificationsForResourceRequestT = Model::UpdateLicenseSpecificationsForResourceRequest>
        Model::UpdateLicenseSpecificationsForResourceOutcomeCallable UpdateLicenseSpecificationsForResourceCallable(const UpdateLicenseSpecificationsForResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::UpdateLicenseSpecificationsForResource, request);
        }

        /**
         * An Async wrapper for UpdateLicenseSpecificationsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLicenseSpecificationsForResourceRequestT = Model::UpdateLicenseSpecificationsForResourceRequest>
        void UpdateLicenseSpecificationsForResourceAsync(const UpdateLicenseSpecificationsForResourceRequestT& request, const UpdateLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::UpdateLicenseSpecificationsForResource, request, handler, context);
        }

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
        template<typename UpdateServiceSettingsRequestT = Model::UpdateServiceSettingsRequest>
        Model::UpdateServiceSettingsOutcomeCallable UpdateServiceSettingsCallable(const UpdateServiceSettingsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerClient::UpdateServiceSettings, request);
        }

        /**
         * An Async wrapper for UpdateServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceSettingsRequestT = Model::UpdateServiceSettingsRequest>
        void UpdateServiceSettingsAsync(const UpdateServiceSettingsRequestT& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerClient::UpdateServiceSettings, request, handler, context);
        }


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
