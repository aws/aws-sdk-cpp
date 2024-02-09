/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/DataZoneServiceClientModel.h>

namespace Aws
{
namespace DataZone
{
  /**
   * <p>Amazon DataZone is a data management service that enables you to catalog,
   * discover, govern, share, and analyze your data. With Amazon DataZone, you can
   * share and access your data across accounts and supported regions. Amazon
   * DataZone simplifies your experience across Amazon Web Services services,
   * including, but not limited to, Amazon Redshift, Amazon Athena, Amazon Web
   * Services Glue, and Amazon Web Services Lake Formation.</p>
   */
  class AWS_DATAZONE_API DataZoneClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DataZoneClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DataZoneClientConfiguration ClientConfigurationType;
      typedef DataZoneEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataZoneClient(const Aws::DataZone::DataZoneClientConfiguration& clientConfiguration = Aws::DataZone::DataZoneClientConfiguration(),
                       std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataZoneClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::DataZone::DataZoneClientConfiguration& clientConfiguration = Aws::DataZone::DataZoneClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataZoneClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::DataZone::DataZoneClientConfiguration& clientConfiguration = Aws::DataZone::DataZoneClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataZoneClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataZoneClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataZoneClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DataZoneClient();

        /**
         * <p>Accepts automatically generated business-friendly metadata for your Amazon
         * DataZone assets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AcceptPredictions">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPredictionsOutcome AcceptPredictions(const Model::AcceptPredictionsRequest& request) const;

        /**
         * A Callable wrapper for AcceptPredictions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptPredictionsRequestT = Model::AcceptPredictionsRequest>
        Model::AcceptPredictionsOutcomeCallable AcceptPredictionsCallable(const AcceptPredictionsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::AcceptPredictions, request);
        }

        /**
         * An Async wrapper for AcceptPredictions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptPredictionsRequestT = Model::AcceptPredictionsRequest>
        void AcceptPredictionsAsync(const AcceptPredictionsRequestT& request, const AcceptPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::AcceptPredictions, request, handler, context);
        }

        /**
         * <p>Accepts a subscription request to a specific asset. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AcceptSubscriptionRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptSubscriptionRequestOutcome AcceptSubscriptionRequest(const Model::AcceptSubscriptionRequestRequest& request) const;

        /**
         * A Callable wrapper for AcceptSubscriptionRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptSubscriptionRequestRequestT = Model::AcceptSubscriptionRequestRequest>
        Model::AcceptSubscriptionRequestOutcomeCallable AcceptSubscriptionRequestCallable(const AcceptSubscriptionRequestRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::AcceptSubscriptionRequest, request);
        }

        /**
         * An Async wrapper for AcceptSubscriptionRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptSubscriptionRequestRequestT = Model::AcceptSubscriptionRequestRequest>
        void AcceptSubscriptionRequestAsync(const AcceptSubscriptionRequestRequestT& request, const AcceptSubscriptionRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::AcceptSubscriptionRequest, request, handler, context);
        }

        /**
         * <p>Cancels the subscription to the specified asset.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CancelSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSubscriptionOutcome CancelSubscription(const Model::CancelSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CancelSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSubscriptionRequestT = Model::CancelSubscriptionRequest>
        Model::CancelSubscriptionOutcomeCallable CancelSubscriptionCallable(const CancelSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CancelSubscription, request);
        }

        /**
         * An Async wrapper for CancelSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSubscriptionRequestT = Model::CancelSubscriptionRequest>
        void CancelSubscriptionAsync(const CancelSubscriptionRequestT& request, const CancelSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CancelSubscription, request, handler, context);
        }

        /**
         * <p>Creates an asset in Amazon DataZone catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest& request) const;

        /**
         * A Callable wrapper for CreateAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssetRequestT = Model::CreateAssetRequest>
        Model::CreateAssetOutcomeCallable CreateAssetCallable(const CreateAssetRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateAsset, request);
        }

        /**
         * An Async wrapper for CreateAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssetRequestT = Model::CreateAssetRequest>
        void CreateAssetAsync(const CreateAssetRequestT& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateAsset, request, handler, context);
        }

        /**
         * <p>Creates a revision of the asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateAssetRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetRevisionOutcome CreateAssetRevision(const Model::CreateAssetRevisionRequest& request) const;

        /**
         * A Callable wrapper for CreateAssetRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssetRevisionRequestT = Model::CreateAssetRevisionRequest>
        Model::CreateAssetRevisionOutcomeCallable CreateAssetRevisionCallable(const CreateAssetRevisionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateAssetRevision, request);
        }

        /**
         * An Async wrapper for CreateAssetRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssetRevisionRequestT = Model::CreateAssetRevisionRequest>
        void CreateAssetRevisionAsync(const CreateAssetRevisionRequestT& request, const CreateAssetRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateAssetRevision, request, handler, context);
        }

        /**
         * <p>Creates a custom asset type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateAssetType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetTypeOutcome CreateAssetType(const Model::CreateAssetTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateAssetType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssetTypeRequestT = Model::CreateAssetTypeRequest>
        Model::CreateAssetTypeOutcomeCallable CreateAssetTypeCallable(const CreateAssetTypeRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateAssetType, request);
        }

        /**
         * An Async wrapper for CreateAssetType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssetTypeRequestT = Model::CreateAssetTypeRequest>
        void CreateAssetTypeAsync(const CreateAssetTypeRequestT& request, const CreateAssetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateAssetType, request, handler, context);
        }

        /**
         * <p>Creates an Amazon DataZone data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const CreateDataSourceRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateDataSource, request);
        }

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        void CreateDataSourceAsync(const CreateDataSourceRequestT& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateDataSource, request, handler, context);
        }

        /**
         * <p>Creates an Amazon DataZone domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateDomain, request, handler, context);
        }

        /**
         * <p>Create an Amazon DataZone environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateEnvironment, request, handler, context);
        }

        /**
         * <p>Creates an Amazon DataZone environment profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateEnvironmentProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentProfileOutcome CreateEnvironmentProfile(const Model::CreateEnvironmentProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentProfileRequestT = Model::CreateEnvironmentProfileRequest>
        Model::CreateEnvironmentProfileOutcomeCallable CreateEnvironmentProfileCallable(const CreateEnvironmentProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateEnvironmentProfile, request);
        }

        /**
         * An Async wrapper for CreateEnvironmentProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentProfileRequestT = Model::CreateEnvironmentProfileRequest>
        void CreateEnvironmentProfileAsync(const CreateEnvironmentProfileRequestT& request, const CreateEnvironmentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateEnvironmentProfile, request, handler, context);
        }

        /**
         * <p>Creates a metadata form type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateFormType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFormTypeOutcome CreateFormType(const Model::CreateFormTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateFormType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFormTypeRequestT = Model::CreateFormTypeRequest>
        Model::CreateFormTypeOutcomeCallable CreateFormTypeCallable(const CreateFormTypeRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateFormType, request);
        }

        /**
         * An Async wrapper for CreateFormType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFormTypeRequestT = Model::CreateFormTypeRequest>
        void CreateFormTypeAsync(const CreateFormTypeRequestT& request, const CreateFormTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateFormType, request, handler, context);
        }

        /**
         * <p>Creates an Amazon DataZone business glossary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateGlossary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlossaryOutcome CreateGlossary(const Model::CreateGlossaryRequest& request) const;

        /**
         * A Callable wrapper for CreateGlossary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGlossaryRequestT = Model::CreateGlossaryRequest>
        Model::CreateGlossaryOutcomeCallable CreateGlossaryCallable(const CreateGlossaryRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateGlossary, request);
        }

        /**
         * An Async wrapper for CreateGlossary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGlossaryRequestT = Model::CreateGlossaryRequest>
        void CreateGlossaryAsync(const CreateGlossaryRequestT& request, const CreateGlossaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateGlossary, request, handler, context);
        }

        /**
         * <p>Creates a business glossary term.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateGlossaryTerm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlossaryTermOutcome CreateGlossaryTerm(const Model::CreateGlossaryTermRequest& request) const;

        /**
         * A Callable wrapper for CreateGlossaryTerm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGlossaryTermRequestT = Model::CreateGlossaryTermRequest>
        Model::CreateGlossaryTermOutcomeCallable CreateGlossaryTermCallable(const CreateGlossaryTermRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateGlossaryTerm, request);
        }

        /**
         * An Async wrapper for CreateGlossaryTerm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGlossaryTermRequestT = Model::CreateGlossaryTermRequest>
        void CreateGlossaryTermAsync(const CreateGlossaryTermRequestT& request, const CreateGlossaryTermResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateGlossaryTerm, request, handler, context);
        }

        /**
         * <p>Creates a group profile in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateGroupProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupProfileOutcome CreateGroupProfile(const Model::CreateGroupProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateGroupProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupProfileRequestT = Model::CreateGroupProfileRequest>
        Model::CreateGroupProfileOutcomeCallable CreateGroupProfileCallable(const CreateGroupProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateGroupProfile, request);
        }

        /**
         * An Async wrapper for CreateGroupProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupProfileRequestT = Model::CreateGroupProfileRequest>
        void CreateGroupProfileAsync(const CreateGroupProfileRequestT& request, const CreateGroupProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateGroupProfile, request, handler, context);
        }

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateListingChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListingChangeSetOutcome CreateListingChangeSet(const Model::CreateListingChangeSetRequest& request) const;

        /**
         * A Callable wrapper for CreateListingChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateListingChangeSetRequestT = Model::CreateListingChangeSetRequest>
        Model::CreateListingChangeSetOutcomeCallable CreateListingChangeSetCallable(const CreateListingChangeSetRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateListingChangeSet, request);
        }

        /**
         * An Async wrapper for CreateListingChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateListingChangeSetRequestT = Model::CreateListingChangeSetRequest>
        void CreateListingChangeSetAsync(const CreateListingChangeSetRequestT& request, const CreateListingChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateListingChangeSet, request, handler, context);
        }

        /**
         * <p>Creates an Amazon DataZone project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateProject, request, handler, context);
        }

        /**
         * <p>Creates a project membership in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateProjectMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectMembershipOutcome CreateProjectMembership(const Model::CreateProjectMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateProjectMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectMembershipRequestT = Model::CreateProjectMembershipRequest>
        Model::CreateProjectMembershipOutcomeCallable CreateProjectMembershipCallable(const CreateProjectMembershipRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateProjectMembership, request);
        }

        /**
         * An Async wrapper for CreateProjectMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectMembershipRequestT = Model::CreateProjectMembershipRequest>
        void CreateProjectMembershipAsync(const CreateProjectMembershipRequestT& request, const CreateProjectMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateProjectMembership, request, handler, context);
        }

        /**
         * <p>Creates a subsscription grant in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateSubscriptionGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionGrantOutcome CreateSubscriptionGrant(const Model::CreateSubscriptionGrantRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriptionGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriptionGrantRequestT = Model::CreateSubscriptionGrantRequest>
        Model::CreateSubscriptionGrantOutcomeCallable CreateSubscriptionGrantCallable(const CreateSubscriptionGrantRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateSubscriptionGrant, request);
        }

        /**
         * An Async wrapper for CreateSubscriptionGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriptionGrantRequestT = Model::CreateSubscriptionGrantRequest>
        void CreateSubscriptionGrantAsync(const CreateSubscriptionGrantRequestT& request, const CreateSubscriptionGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateSubscriptionGrant, request, handler, context);
        }

        /**
         * <p>Creates a subscription request in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateSubscriptionRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionRequestOutcome CreateSubscriptionRequest(const Model::CreateSubscriptionRequestRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriptionRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriptionRequestRequestT = Model::CreateSubscriptionRequestRequest>
        Model::CreateSubscriptionRequestOutcomeCallable CreateSubscriptionRequestCallable(const CreateSubscriptionRequestRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateSubscriptionRequest, request);
        }

        /**
         * An Async wrapper for CreateSubscriptionRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriptionRequestRequestT = Model::CreateSubscriptionRequestRequest>
        void CreateSubscriptionRequestAsync(const CreateSubscriptionRequestRequestT& request, const CreateSubscriptionRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateSubscriptionRequest, request, handler, context);
        }

        /**
         * <p>Creates a subscription target in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateSubscriptionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionTargetOutcome CreateSubscriptionTarget(const Model::CreateSubscriptionTargetRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriptionTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriptionTargetRequestT = Model::CreateSubscriptionTargetRequest>
        Model::CreateSubscriptionTargetOutcomeCallable CreateSubscriptionTargetCallable(const CreateSubscriptionTargetRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateSubscriptionTarget, request);
        }

        /**
         * An Async wrapper for CreateSubscriptionTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriptionTargetRequestT = Model::CreateSubscriptionTargetRequest>
        void CreateSubscriptionTargetAsync(const CreateSubscriptionTargetRequestT& request, const CreateSubscriptionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateSubscriptionTarget, request, handler, context);
        }

        /**
         * <p>Creates a user profile in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserProfileOutcome CreateUserProfile(const Model::CreateUserProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserProfileRequestT = Model::CreateUserProfileRequest>
        Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const CreateUserProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateUserProfile, request);
        }

        /**
         * An Async wrapper for CreateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserProfileRequestT = Model::CreateUserProfileRequest>
        void CreateUserProfileAsync(const CreateUserProfileRequestT& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateUserProfile, request, handler, context);
        }

        /**
         * <p>Delets an asset in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;

        /**
         * A Callable wrapper for DeleteAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssetRequestT = Model::DeleteAssetRequest>
        Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const DeleteAssetRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteAsset, request);
        }

        /**
         * An Async wrapper for DeleteAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssetRequestT = Model::DeleteAssetRequest>
        void DeleteAssetAsync(const DeleteAssetRequestT& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteAsset, request, handler, context);
        }

        /**
         * <p>Deletes an asset type in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteAssetType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetTypeOutcome DeleteAssetType(const Model::DeleteAssetTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssetType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssetTypeRequestT = Model::DeleteAssetTypeRequest>
        Model::DeleteAssetTypeOutcomeCallable DeleteAssetTypeCallable(const DeleteAssetTypeRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteAssetType, request);
        }

        /**
         * An Async wrapper for DeleteAssetType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssetTypeRequestT = Model::DeleteAssetTypeRequest>
        void DeleteAssetTypeAsync(const DeleteAssetTypeRequestT& request, const DeleteAssetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteAssetType, request, handler, context);
        }

        /**
         * <p>Deletes a data source in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteDataSource, request, handler, context);
        }

        /**
         * <p>Deletes a Amazon DataZone domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteDomain, request, handler, context);
        }

        /**
         * <p>Deletes an environment in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes the blueprint configuration in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteEnvironmentBlueprintConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentBlueprintConfigurationOutcome DeleteEnvironmentBlueprintConfiguration(const Model::DeleteEnvironmentBlueprintConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentBlueprintConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentBlueprintConfigurationRequestT = Model::DeleteEnvironmentBlueprintConfigurationRequest>
        Model::DeleteEnvironmentBlueprintConfigurationOutcomeCallable DeleteEnvironmentBlueprintConfigurationCallable(const DeleteEnvironmentBlueprintConfigurationRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteEnvironmentBlueprintConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteEnvironmentBlueprintConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentBlueprintConfigurationRequestT = Model::DeleteEnvironmentBlueprintConfigurationRequest>
        void DeleteEnvironmentBlueprintConfigurationAsync(const DeleteEnvironmentBlueprintConfigurationRequestT& request, const DeleteEnvironmentBlueprintConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteEnvironmentBlueprintConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes an environment profile in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteEnvironmentProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentProfileOutcome DeleteEnvironmentProfile(const Model::DeleteEnvironmentProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentProfileRequestT = Model::DeleteEnvironmentProfileRequest>
        Model::DeleteEnvironmentProfileOutcomeCallable DeleteEnvironmentProfileCallable(const DeleteEnvironmentProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteEnvironmentProfile, request);
        }

        /**
         * An Async wrapper for DeleteEnvironmentProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentProfileRequestT = Model::DeleteEnvironmentProfileRequest>
        void DeleteEnvironmentProfileAsync(const DeleteEnvironmentProfileRequestT& request, const DeleteEnvironmentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteEnvironmentProfile, request, handler, context);
        }

        /**
         * <p>Delets and metadata form type in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteFormType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFormTypeOutcome DeleteFormType(const Model::DeleteFormTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteFormType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFormTypeRequestT = Model::DeleteFormTypeRequest>
        Model::DeleteFormTypeOutcomeCallable DeleteFormTypeCallable(const DeleteFormTypeRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteFormType, request);
        }

        /**
         * An Async wrapper for DeleteFormType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFormTypeRequestT = Model::DeleteFormTypeRequest>
        void DeleteFormTypeAsync(const DeleteFormTypeRequestT& request, const DeleteFormTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteFormType, request, handler, context);
        }

        /**
         * <p>Deletes a business glossary in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteGlossary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlossaryOutcome DeleteGlossary(const Model::DeleteGlossaryRequest& request) const;

        /**
         * A Callable wrapper for DeleteGlossary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGlossaryRequestT = Model::DeleteGlossaryRequest>
        Model::DeleteGlossaryOutcomeCallable DeleteGlossaryCallable(const DeleteGlossaryRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteGlossary, request);
        }

        /**
         * An Async wrapper for DeleteGlossary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGlossaryRequestT = Model::DeleteGlossaryRequest>
        void DeleteGlossaryAsync(const DeleteGlossaryRequestT& request, const DeleteGlossaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteGlossary, request, handler, context);
        }

        /**
         * <p>Deletes a business glossary term in Amazon DataZone.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteGlossaryTerm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlossaryTermOutcome DeleteGlossaryTerm(const Model::DeleteGlossaryTermRequest& request) const;

        /**
         * A Callable wrapper for DeleteGlossaryTerm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGlossaryTermRequestT = Model::DeleteGlossaryTermRequest>
        Model::DeleteGlossaryTermOutcomeCallable DeleteGlossaryTermCallable(const DeleteGlossaryTermRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteGlossaryTerm, request);
        }

        /**
         * An Async wrapper for DeleteGlossaryTerm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGlossaryTermRequestT = Model::DeleteGlossaryTermRequest>
        void DeleteGlossaryTermAsync(const DeleteGlossaryTermRequestT& request, const DeleteGlossaryTermResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteGlossaryTerm, request, handler, context);
        }

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteListing">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListingOutcome DeleteListing(const Model::DeleteListingRequest& request) const;

        /**
         * A Callable wrapper for DeleteListing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteListingRequestT = Model::DeleteListingRequest>
        Model::DeleteListingOutcomeCallable DeleteListingCallable(const DeleteListingRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteListing, request);
        }

        /**
         * An Async wrapper for DeleteListing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteListingRequestT = Model::DeleteListingRequest>
        void DeleteListingAsync(const DeleteListingRequestT& request, const DeleteListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteListing, request, handler, context);
        }

        /**
         * <p>Deletes a project in Amazon DataZone. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteProject, request, handler, context);
        }

        /**
         * <p>Deletes project membership in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteProjectMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectMembershipOutcome DeleteProjectMembership(const Model::DeleteProjectMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteProjectMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectMembershipRequestT = Model::DeleteProjectMembershipRequest>
        Model::DeleteProjectMembershipOutcomeCallable DeleteProjectMembershipCallable(const DeleteProjectMembershipRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteProjectMembership, request);
        }

        /**
         * An Async wrapper for DeleteProjectMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectMembershipRequestT = Model::DeleteProjectMembershipRequest>
        void DeleteProjectMembershipAsync(const DeleteProjectMembershipRequestT& request, const DeleteProjectMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteProjectMembership, request, handler, context);
        }

        /**
         * <p>Deletes and subscription grant in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteSubscriptionGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionGrantOutcome DeleteSubscriptionGrant(const Model::DeleteSubscriptionGrantRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriptionGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSubscriptionGrantRequestT = Model::DeleteSubscriptionGrantRequest>
        Model::DeleteSubscriptionGrantOutcomeCallable DeleteSubscriptionGrantCallable(const DeleteSubscriptionGrantRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteSubscriptionGrant, request);
        }

        /**
         * An Async wrapper for DeleteSubscriptionGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSubscriptionGrantRequestT = Model::DeleteSubscriptionGrantRequest>
        void DeleteSubscriptionGrantAsync(const DeleteSubscriptionGrantRequestT& request, const DeleteSubscriptionGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteSubscriptionGrant, request, handler, context);
        }

        /**
         * <p>Deletes a subscription request in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteSubscriptionRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionRequestOutcome DeleteSubscriptionRequest(const Model::DeleteSubscriptionRequestRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriptionRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSubscriptionRequestRequestT = Model::DeleteSubscriptionRequestRequest>
        Model::DeleteSubscriptionRequestOutcomeCallable DeleteSubscriptionRequestCallable(const DeleteSubscriptionRequestRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteSubscriptionRequest, request);
        }

        /**
         * An Async wrapper for DeleteSubscriptionRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSubscriptionRequestRequestT = Model::DeleteSubscriptionRequestRequest>
        void DeleteSubscriptionRequestAsync(const DeleteSubscriptionRequestRequestT& request, const DeleteSubscriptionRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteSubscriptionRequest, request, handler, context);
        }

        /**
         * <p>Deletes a subscription target in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteSubscriptionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionTargetOutcome DeleteSubscriptionTarget(const Model::DeleteSubscriptionTargetRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriptionTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSubscriptionTargetRequestT = Model::DeleteSubscriptionTargetRequest>
        Model::DeleteSubscriptionTargetOutcomeCallable DeleteSubscriptionTargetCallable(const DeleteSubscriptionTargetRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteSubscriptionTarget, request);
        }

        /**
         * An Async wrapper for DeleteSubscriptionTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSubscriptionTargetRequestT = Model::DeleteSubscriptionTargetRequest>
        void DeleteSubscriptionTargetAsync(const DeleteSubscriptionTargetRequestT& request, const DeleteSubscriptionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteSubscriptionTarget, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetOutcome GetAsset(const Model::GetAssetRequest& request) const;

        /**
         * A Callable wrapper for GetAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssetRequestT = Model::GetAssetRequest>
        Model::GetAssetOutcomeCallable GetAssetCallable(const GetAssetRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetAsset, request);
        }

        /**
         * An Async wrapper for GetAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssetRequestT = Model::GetAssetRequest>
        void GetAssetAsync(const GetAssetRequestT& request, const GetAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetAsset, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone asset type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetAssetType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetTypeOutcome GetAssetType(const Model::GetAssetTypeRequest& request) const;

        /**
         * A Callable wrapper for GetAssetType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssetTypeRequestT = Model::GetAssetTypeRequest>
        Model::GetAssetTypeOutcomeCallable GetAssetTypeCallable(const GetAssetTypeRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetAssetType, request);
        }

        /**
         * An Async wrapper for GetAssetType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssetTypeRequestT = Model::GetAssetTypeRequest>
        void GetAssetTypeAsync(const GetAssetTypeRequestT& request, const GetAssetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetAssetType, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * A Callable wrapper for GetDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const GetDataSourceRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetDataSource, request);
        }

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        void GetDataSourceAsync(const GetDataSourceRequestT& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetDataSource, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone data source run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetDataSourceRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceRunOutcome GetDataSourceRun(const Model::GetDataSourceRunRequest& request) const;

        /**
         * A Callable wrapper for GetDataSourceRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceRunRequestT = Model::GetDataSourceRunRequest>
        Model::GetDataSourceRunOutcomeCallable GetDataSourceRunCallable(const GetDataSourceRunRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetDataSourceRun, request);
        }

        /**
         * An Async wrapper for GetDataSourceRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceRunRequestT = Model::GetDataSourceRunRequest>
        void GetDataSourceRunAsync(const GetDataSourceRunRequestT& request, const GetDataSourceRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetDataSourceRun, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

        /**
         * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainRequestT = Model::GetDomainRequest>
        Model::GetDomainOutcomeCallable GetDomainCallable(const GetDomainRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetDomain, request);
        }

        /**
         * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainRequestT = Model::GetDomainRequest>
        void GetDomainAsync(const GetDomainRequestT& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetDomain, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetEnvironment, request);
        }

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetEnvironment, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetEnvironmentBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentBlueprintOutcome GetEnvironmentBlueprint(const Model::GetEnvironmentBlueprintRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironmentBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentBlueprintRequestT = Model::GetEnvironmentBlueprintRequest>
        Model::GetEnvironmentBlueprintOutcomeCallable GetEnvironmentBlueprintCallable(const GetEnvironmentBlueprintRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetEnvironmentBlueprint, request);
        }

        /**
         * An Async wrapper for GetEnvironmentBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentBlueprintRequestT = Model::GetEnvironmentBlueprintRequest>
        void GetEnvironmentBlueprintAsync(const GetEnvironmentBlueprintRequestT& request, const GetEnvironmentBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetEnvironmentBlueprint, request, handler, context);
        }

        /**
         * <p>Gets the blueprint configuration in Amazon DataZone.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetEnvironmentBlueprintConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentBlueprintConfigurationOutcome GetEnvironmentBlueprintConfiguration(const Model::GetEnvironmentBlueprintConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironmentBlueprintConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentBlueprintConfigurationRequestT = Model::GetEnvironmentBlueprintConfigurationRequest>
        Model::GetEnvironmentBlueprintConfigurationOutcomeCallable GetEnvironmentBlueprintConfigurationCallable(const GetEnvironmentBlueprintConfigurationRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetEnvironmentBlueprintConfiguration, request);
        }

        /**
         * An Async wrapper for GetEnvironmentBlueprintConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentBlueprintConfigurationRequestT = Model::GetEnvironmentBlueprintConfigurationRequest>
        void GetEnvironmentBlueprintConfigurationAsync(const GetEnvironmentBlueprintConfigurationRequestT& request, const GetEnvironmentBlueprintConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetEnvironmentBlueprintConfiguration, request, handler, context);
        }

        /**
         * <p>Gets an evinronment profile in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetEnvironmentProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentProfileOutcome GetEnvironmentProfile(const Model::GetEnvironmentProfileRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironmentProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentProfileRequestT = Model::GetEnvironmentProfileRequest>
        Model::GetEnvironmentProfileOutcomeCallable GetEnvironmentProfileCallable(const GetEnvironmentProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetEnvironmentProfile, request);
        }

        /**
         * An Async wrapper for GetEnvironmentProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentProfileRequestT = Model::GetEnvironmentProfileRequest>
        void GetEnvironmentProfileAsync(const GetEnvironmentProfileRequestT& request, const GetEnvironmentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetEnvironmentProfile, request, handler, context);
        }

        /**
         * <p>Gets a metadata form type in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetFormType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFormTypeOutcome GetFormType(const Model::GetFormTypeRequest& request) const;

        /**
         * A Callable wrapper for GetFormType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFormTypeRequestT = Model::GetFormTypeRequest>
        Model::GetFormTypeOutcomeCallable GetFormTypeCallable(const GetFormTypeRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetFormType, request);
        }

        /**
         * An Async wrapper for GetFormType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFormTypeRequestT = Model::GetFormTypeRequest>
        void GetFormTypeAsync(const GetFormTypeRequestT& request, const GetFormTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetFormType, request, handler, context);
        }

        /**
         * <p>Gets a business glossary in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetGlossary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGlossaryOutcome GetGlossary(const Model::GetGlossaryRequest& request) const;

        /**
         * A Callable wrapper for GetGlossary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGlossaryRequestT = Model::GetGlossaryRequest>
        Model::GetGlossaryOutcomeCallable GetGlossaryCallable(const GetGlossaryRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetGlossary, request);
        }

        /**
         * An Async wrapper for GetGlossary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGlossaryRequestT = Model::GetGlossaryRequest>
        void GetGlossaryAsync(const GetGlossaryRequestT& request, const GetGlossaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetGlossary, request, handler, context);
        }

        /**
         * <p>Gets a business glossary term in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetGlossaryTerm">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGlossaryTermOutcome GetGlossaryTerm(const Model::GetGlossaryTermRequest& request) const;

        /**
         * A Callable wrapper for GetGlossaryTerm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGlossaryTermRequestT = Model::GetGlossaryTermRequest>
        Model::GetGlossaryTermOutcomeCallable GetGlossaryTermCallable(const GetGlossaryTermRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetGlossaryTerm, request);
        }

        /**
         * An Async wrapper for GetGlossaryTerm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGlossaryTermRequestT = Model::GetGlossaryTermRequest>
        void GetGlossaryTermAsync(const GetGlossaryTermRequestT& request, const GetGlossaryTermResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetGlossaryTerm, request, handler, context);
        }

        /**
         * <p>Gets a group profile in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetGroupProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupProfileOutcome GetGroupProfile(const Model::GetGroupProfileRequest& request) const;

        /**
         * A Callable wrapper for GetGroupProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupProfileRequestT = Model::GetGroupProfileRequest>
        Model::GetGroupProfileOutcomeCallable GetGroupProfileCallable(const GetGroupProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetGroupProfile, request);
        }

        /**
         * An Async wrapper for GetGroupProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupProfileRequestT = Model::GetGroupProfileRequest>
        void GetGroupProfileAsync(const GetGroupProfileRequestT& request, const GetGroupProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetGroupProfile, request, handler, context);
        }

        /**
         * <p>Gets the data portal URL for the specified Amazon DataZone
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetIamPortalLoginUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIamPortalLoginUrlOutcome GetIamPortalLoginUrl(const Model::GetIamPortalLoginUrlRequest& request) const;

        /**
         * A Callable wrapper for GetIamPortalLoginUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIamPortalLoginUrlRequestT = Model::GetIamPortalLoginUrlRequest>
        Model::GetIamPortalLoginUrlOutcomeCallable GetIamPortalLoginUrlCallable(const GetIamPortalLoginUrlRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetIamPortalLoginUrl, request);
        }

        /**
         * An Async wrapper for GetIamPortalLoginUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIamPortalLoginUrlRequestT = Model::GetIamPortalLoginUrlRequest>
        void GetIamPortalLoginUrlAsync(const GetIamPortalLoginUrlRequestT& request, const GetIamPortalLoginUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetIamPortalLoginUrl, request, handler, context);
        }

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetListing">AWS
         * API Reference</a></p>
         */
        virtual Model::GetListingOutcome GetListing(const Model::GetListingRequest& request) const;

        /**
         * A Callable wrapper for GetListing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetListingRequestT = Model::GetListingRequest>
        Model::GetListingOutcomeCallable GetListingCallable(const GetListingRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetListing, request);
        }

        /**
         * An Async wrapper for GetListing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetListingRequestT = Model::GetListingRequest>
        void GetListingAsync(const GetListingRequestT& request, const GetListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetListing, request, handler, context);
        }

        /**
         * <p>Gets a project in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;

        /**
         * A Callable wrapper for GetProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProjectRequestT = Model::GetProjectRequest>
        Model::GetProjectOutcomeCallable GetProjectCallable(const GetProjectRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetProject, request);
        }

        /**
         * An Async wrapper for GetProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProjectRequestT = Model::GetProjectRequest>
        void GetProjectAsync(const GetProjectRequestT& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetProject, request, handler, context);
        }

        /**
         * <p>Gets a subscription in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionOutcome GetSubscription(const Model::GetSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for GetSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionRequestT = Model::GetSubscriptionRequest>
        Model::GetSubscriptionOutcomeCallable GetSubscriptionCallable(const GetSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetSubscription, request);
        }

        /**
         * An Async wrapper for GetSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionRequestT = Model::GetSubscriptionRequest>
        void GetSubscriptionAsync(const GetSubscriptionRequestT& request, const GetSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetSubscription, request, handler, context);
        }

        /**
         * <p>Gets the subscription grant in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetSubscriptionGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionGrantOutcome GetSubscriptionGrant(const Model::GetSubscriptionGrantRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriptionGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionGrantRequestT = Model::GetSubscriptionGrantRequest>
        Model::GetSubscriptionGrantOutcomeCallable GetSubscriptionGrantCallable(const GetSubscriptionGrantRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetSubscriptionGrant, request);
        }

        /**
         * An Async wrapper for GetSubscriptionGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionGrantRequestT = Model::GetSubscriptionGrantRequest>
        void GetSubscriptionGrantAsync(const GetSubscriptionGrantRequestT& request, const GetSubscriptionGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetSubscriptionGrant, request, handler, context);
        }

        /**
         * <p>Gets the details of the specified subscription request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetSubscriptionRequestDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionRequestDetailsOutcome GetSubscriptionRequestDetails(const Model::GetSubscriptionRequestDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriptionRequestDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionRequestDetailsRequestT = Model::GetSubscriptionRequestDetailsRequest>
        Model::GetSubscriptionRequestDetailsOutcomeCallable GetSubscriptionRequestDetailsCallable(const GetSubscriptionRequestDetailsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetSubscriptionRequestDetails, request);
        }

        /**
         * An Async wrapper for GetSubscriptionRequestDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionRequestDetailsRequestT = Model::GetSubscriptionRequestDetailsRequest>
        void GetSubscriptionRequestDetailsAsync(const GetSubscriptionRequestDetailsRequestT& request, const GetSubscriptionRequestDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetSubscriptionRequestDetails, request, handler, context);
        }

        /**
         * <p>Gets the subscription target in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetSubscriptionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionTargetOutcome GetSubscriptionTarget(const Model::GetSubscriptionTargetRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriptionTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionTargetRequestT = Model::GetSubscriptionTargetRequest>
        Model::GetSubscriptionTargetOutcomeCallable GetSubscriptionTargetCallable(const GetSubscriptionTargetRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetSubscriptionTarget, request);
        }

        /**
         * An Async wrapper for GetSubscriptionTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionTargetRequestT = Model::GetSubscriptionTargetRequest>
        void GetSubscriptionTargetAsync(const GetSubscriptionTargetRequestT& request, const GetSubscriptionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetSubscriptionTarget, request, handler, context);
        }

        /**
         * <p>Gets a user profile in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserProfileOutcome GetUserProfile(const Model::GetUserProfileRequest& request) const;

        /**
         * A Callable wrapper for GetUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserProfileRequestT = Model::GetUserProfileRequest>
        Model::GetUserProfileOutcomeCallable GetUserProfileCallable(const GetUserProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetUserProfile, request);
        }

        /**
         * An Async wrapper for GetUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserProfileRequestT = Model::GetUserProfileRequest>
        void GetUserProfileAsync(const GetUserProfileRequestT& request, const GetUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetUserProfile, request, handler, context);
        }

        /**
         * <p>Lists the revisions for the asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListAssetRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetRevisionsOutcome ListAssetRevisions(const Model::ListAssetRevisionsRequest& request) const;

        /**
         * A Callable wrapper for ListAssetRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssetRevisionsRequestT = Model::ListAssetRevisionsRequest>
        Model::ListAssetRevisionsOutcomeCallable ListAssetRevisionsCallable(const ListAssetRevisionsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListAssetRevisions, request);
        }

        /**
         * An Async wrapper for ListAssetRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssetRevisionsRequestT = Model::ListAssetRevisionsRequest>
        void ListAssetRevisionsAsync(const ListAssetRevisionsRequestT& request, const ListAssetRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListAssetRevisions, request, handler, context);
        }

        /**
         * <p>Lists data source run activities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListDataSourceRunActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourceRunActivitiesOutcome ListDataSourceRunActivities(const Model::ListDataSourceRunActivitiesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSourceRunActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourceRunActivitiesRequestT = Model::ListDataSourceRunActivitiesRequest>
        Model::ListDataSourceRunActivitiesOutcomeCallable ListDataSourceRunActivitiesCallable(const ListDataSourceRunActivitiesRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListDataSourceRunActivities, request);
        }

        /**
         * An Async wrapper for ListDataSourceRunActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourceRunActivitiesRequestT = Model::ListDataSourceRunActivitiesRequest>
        void ListDataSourceRunActivitiesAsync(const ListDataSourceRunActivitiesRequestT& request, const ListDataSourceRunActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListDataSourceRunActivities, request, handler, context);
        }

        /**
         * <p>Lists data source runs in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListDataSourceRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourceRunsOutcome ListDataSourceRuns(const Model::ListDataSourceRunsRequest& request) const;

        /**
         * A Callable wrapper for ListDataSourceRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourceRunsRequestT = Model::ListDataSourceRunsRequest>
        Model::ListDataSourceRunsOutcomeCallable ListDataSourceRunsCallable(const ListDataSourceRunsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListDataSourceRuns, request);
        }

        /**
         * An Async wrapper for ListDataSourceRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourceRunsRequestT = Model::ListDataSourceRunsRequest>
        void ListDataSourceRunsAsync(const ListDataSourceRunsRequestT& request, const ListDataSourceRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListDataSourceRuns, request, handler, context);
        }

        /**
         * <p>Lists data sources in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const ListDataSourcesRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListDataSources, request);
        }

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        void ListDataSourcesAsync(const ListDataSourcesRequestT& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListDataSources, request, handler, context);
        }

        /**
         * <p>Lists Amazon DataZone domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsRequestT& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Lists blueprint configurations for a Amazon DataZone
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListEnvironmentBlueprintConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentBlueprintConfigurationsOutcome ListEnvironmentBlueprintConfigurations(const Model::ListEnvironmentBlueprintConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentBlueprintConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentBlueprintConfigurationsRequestT = Model::ListEnvironmentBlueprintConfigurationsRequest>
        Model::ListEnvironmentBlueprintConfigurationsOutcomeCallable ListEnvironmentBlueprintConfigurationsCallable(const ListEnvironmentBlueprintConfigurationsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListEnvironmentBlueprintConfigurations, request);
        }

        /**
         * An Async wrapper for ListEnvironmentBlueprintConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentBlueprintConfigurationsRequestT = Model::ListEnvironmentBlueprintConfigurationsRequest>
        void ListEnvironmentBlueprintConfigurationsAsync(const ListEnvironmentBlueprintConfigurationsRequestT& request, const ListEnvironmentBlueprintConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListEnvironmentBlueprintConfigurations, request, handler, context);
        }

        /**
         * <p>Lists blueprints in an Amazon DataZone environment.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListEnvironmentBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentBlueprintsOutcome ListEnvironmentBlueprints(const Model::ListEnvironmentBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentBlueprintsRequestT = Model::ListEnvironmentBlueprintsRequest>
        Model::ListEnvironmentBlueprintsOutcomeCallable ListEnvironmentBlueprintsCallable(const ListEnvironmentBlueprintsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListEnvironmentBlueprints, request);
        }

        /**
         * An Async wrapper for ListEnvironmentBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentBlueprintsRequestT = Model::ListEnvironmentBlueprintsRequest>
        void ListEnvironmentBlueprintsAsync(const ListEnvironmentBlueprintsRequestT& request, const ListEnvironmentBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListEnvironmentBlueprints, request, handler, context);
        }

        /**
         * <p>Lists Amazon DataZone environment profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListEnvironmentProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentProfilesOutcome ListEnvironmentProfiles(const Model::ListEnvironmentProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentProfilesRequestT = Model::ListEnvironmentProfilesRequest>
        Model::ListEnvironmentProfilesOutcomeCallable ListEnvironmentProfilesCallable(const ListEnvironmentProfilesRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListEnvironmentProfiles, request);
        }

        /**
         * An Async wrapper for ListEnvironmentProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentProfilesRequestT = Model::ListEnvironmentProfilesRequest>
        void ListEnvironmentProfilesAsync(const ListEnvironmentProfilesRequestT& request, const ListEnvironmentProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListEnvironmentProfiles, request, handler, context);
        }

        /**
         * <p>Lists Amazon DataZone environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsRequestT& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListEnvironments, request, handler, context);
        }

        /**
         * <p>Lists all Amazon DataZone notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationsOutcome ListNotifications(const Model::ListNotificationsRequest& request) const;

        /**
         * A Callable wrapper for ListNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotificationsRequestT = Model::ListNotificationsRequest>
        Model::ListNotificationsOutcomeCallable ListNotificationsCallable(const ListNotificationsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListNotifications, request);
        }

        /**
         * An Async wrapper for ListNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationsRequestT = Model::ListNotificationsRequest>
        void ListNotificationsAsync(const ListNotificationsRequestT& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListNotifications, request, handler, context);
        }

        /**
         * <p>Lists all members of the specified project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListProjectMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectMembershipsOutcome ListProjectMemberships(const Model::ListProjectMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListProjectMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectMembershipsRequestT = Model::ListProjectMembershipsRequest>
        Model::ListProjectMembershipsOutcomeCallable ListProjectMembershipsCallable(const ListProjectMembershipsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListProjectMemberships, request);
        }

        /**
         * An Async wrapper for ListProjectMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectMembershipsRequestT = Model::ListProjectMembershipsRequest>
        void ListProjectMembershipsAsync(const ListProjectMembershipsRequestT& request, const ListProjectMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListProjectMemberships, request, handler, context);
        }

        /**
         * <p>Lists Amazon DataZone projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListProjects, request, handler, context);
        }

        /**
         * <p>Lists subscription grants.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListSubscriptionGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionGrantsOutcome ListSubscriptionGrants(const Model::ListSubscriptionGrantsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptionGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionGrantsRequestT = Model::ListSubscriptionGrantsRequest>
        Model::ListSubscriptionGrantsOutcomeCallable ListSubscriptionGrantsCallable(const ListSubscriptionGrantsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListSubscriptionGrants, request);
        }

        /**
         * An Async wrapper for ListSubscriptionGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionGrantsRequestT = Model::ListSubscriptionGrantsRequest>
        void ListSubscriptionGrantsAsync(const ListSubscriptionGrantsRequestT& request, const ListSubscriptionGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListSubscriptionGrants, request, handler, context);
        }

        /**
         * <p>Lists Amazon DataZone subscription requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListSubscriptionRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionRequestsOutcome ListSubscriptionRequests(const Model::ListSubscriptionRequestsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptionRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionRequestsRequestT = Model::ListSubscriptionRequestsRequest>
        Model::ListSubscriptionRequestsOutcomeCallable ListSubscriptionRequestsCallable(const ListSubscriptionRequestsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListSubscriptionRequests, request);
        }

        /**
         * An Async wrapper for ListSubscriptionRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionRequestsRequestT = Model::ListSubscriptionRequestsRequest>
        void ListSubscriptionRequestsAsync(const ListSubscriptionRequestsRequestT& request, const ListSubscriptionRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListSubscriptionRequests, request, handler, context);
        }

        /**
         * <p>Lists subscription targets in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListSubscriptionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionTargetsOutcome ListSubscriptionTargets(const Model::ListSubscriptionTargetsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptionTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionTargetsRequestT = Model::ListSubscriptionTargetsRequest>
        Model::ListSubscriptionTargetsOutcomeCallable ListSubscriptionTargetsCallable(const ListSubscriptionTargetsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListSubscriptionTargets, request);
        }

        /**
         * An Async wrapper for ListSubscriptionTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionTargetsRequestT = Model::ListSubscriptionTargetsRequest>
        void ListSubscriptionTargetsAsync(const ListSubscriptionTargetsRequestT& request, const ListSubscriptionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListSubscriptionTargets, request, handler, context);
        }

        /**
         * <p>Lists subscriptions in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
        Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const ListSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListSubscriptions, request);
        }

        /**
         * An Async wrapper for ListSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
        void ListSubscriptionsAsync(const ListSubscriptionsRequestT& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListSubscriptions, request, handler, context);
        }

        /**
         * <p>Lists tags for the specified resource in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Writes the configuration for the specified environment blueprint in Amazon
         * DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PutEnvironmentBlueprintConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEnvironmentBlueprintConfigurationOutcome PutEnvironmentBlueprintConfiguration(const Model::PutEnvironmentBlueprintConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutEnvironmentBlueprintConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEnvironmentBlueprintConfigurationRequestT = Model::PutEnvironmentBlueprintConfigurationRequest>
        Model::PutEnvironmentBlueprintConfigurationOutcomeCallable PutEnvironmentBlueprintConfigurationCallable(const PutEnvironmentBlueprintConfigurationRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::PutEnvironmentBlueprintConfiguration, request);
        }

        /**
         * An Async wrapper for PutEnvironmentBlueprintConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEnvironmentBlueprintConfigurationRequestT = Model::PutEnvironmentBlueprintConfigurationRequest>
        void PutEnvironmentBlueprintConfigurationAsync(const PutEnvironmentBlueprintConfigurationRequestT& request, const PutEnvironmentBlueprintConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::PutEnvironmentBlueprintConfiguration, request, handler, context);
        }

        /**
         * <p>Rejects automatically generated business-friendly metadata for your Amazon
         * DataZone assets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RejectPredictions">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectPredictionsOutcome RejectPredictions(const Model::RejectPredictionsRequest& request) const;

        /**
         * A Callable wrapper for RejectPredictions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectPredictionsRequestT = Model::RejectPredictionsRequest>
        Model::RejectPredictionsOutcomeCallable RejectPredictionsCallable(const RejectPredictionsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::RejectPredictions, request);
        }

        /**
         * An Async wrapper for RejectPredictions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectPredictionsRequestT = Model::RejectPredictionsRequest>
        void RejectPredictionsAsync(const RejectPredictionsRequestT& request, const RejectPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::RejectPredictions, request, handler, context);
        }

        /**
         * <p>Rejects the specified subscription request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RejectSubscriptionRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectSubscriptionRequestOutcome RejectSubscriptionRequest(const Model::RejectSubscriptionRequestRequest& request) const;

        /**
         * A Callable wrapper for RejectSubscriptionRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectSubscriptionRequestRequestT = Model::RejectSubscriptionRequestRequest>
        Model::RejectSubscriptionRequestOutcomeCallable RejectSubscriptionRequestCallable(const RejectSubscriptionRequestRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::RejectSubscriptionRequest, request);
        }

        /**
         * An Async wrapper for RejectSubscriptionRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectSubscriptionRequestRequestT = Model::RejectSubscriptionRequestRequest>
        void RejectSubscriptionRequestAsync(const RejectSubscriptionRequestRequestT& request, const RejectSubscriptionRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::RejectSubscriptionRequest, request, handler, context);
        }

        /**
         * <p>Revokes a specified subscription in Amazon DataZone.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RevokeSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeSubscriptionOutcome RevokeSubscription(const Model::RevokeSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for RevokeSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeSubscriptionRequestT = Model::RevokeSubscriptionRequest>
        Model::RevokeSubscriptionOutcomeCallable RevokeSubscriptionCallable(const RevokeSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::RevokeSubscription, request);
        }

        /**
         * An Async wrapper for RevokeSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeSubscriptionRequestT = Model::RevokeSubscriptionRequest>
        void RevokeSubscriptionAsync(const RevokeSubscriptionRequestT& request, const RevokeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::RevokeSubscription, request, handler, context);
        }

        /**
         * <p>Searches for assets in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Search">AWS API
         * Reference</a></p>
         */
        virtual Model::SearchOutcome Search(const Model::SearchRequest& request) const;

        /**
         * A Callable wrapper for Search that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchRequestT = Model::SearchRequest>
        Model::SearchOutcomeCallable SearchCallable(const SearchRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::Search, request);
        }

        /**
         * An Async wrapper for Search that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchRequestT = Model::SearchRequest>
        void SearchAsync(const SearchRequestT& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::Search, request, handler, context);
        }

        /**
         * <p>Searches group profiles in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchGroupProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchGroupProfilesOutcome SearchGroupProfiles(const Model::SearchGroupProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchGroupProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchGroupProfilesRequestT = Model::SearchGroupProfilesRequest>
        Model::SearchGroupProfilesOutcomeCallable SearchGroupProfilesCallable(const SearchGroupProfilesRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::SearchGroupProfiles, request);
        }

        /**
         * An Async wrapper for SearchGroupProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchGroupProfilesRequestT = Model::SearchGroupProfilesRequest>
        void SearchGroupProfilesAsync(const SearchGroupProfilesRequestT& request, const SearchGroupProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::SearchGroupProfiles, request, handler, context);
        }

        /**
         * <p>Searches listings in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchListings">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchListingsOutcome SearchListings(const Model::SearchListingsRequest& request) const;

        /**
         * A Callable wrapper for SearchListings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchListingsRequestT = Model::SearchListingsRequest>
        Model::SearchListingsOutcomeCallable SearchListingsCallable(const SearchListingsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::SearchListings, request);
        }

        /**
         * An Async wrapper for SearchListings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchListingsRequestT = Model::SearchListingsRequest>
        void SearchListingsAsync(const SearchListingsRequestT& request, const SearchListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::SearchListings, request, handler, context);
        }

        /**
         * <p>Searches for types in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTypesOutcome SearchTypes(const Model::SearchTypesRequest& request) const;

        /**
         * A Callable wrapper for SearchTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchTypesRequestT = Model::SearchTypesRequest>
        Model::SearchTypesOutcomeCallable SearchTypesCallable(const SearchTypesRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::SearchTypes, request);
        }

        /**
         * An Async wrapper for SearchTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchTypesRequestT = Model::SearchTypesRequest>
        void SearchTypesAsync(const SearchTypesRequestT& request, const SearchTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::SearchTypes, request, handler, context);
        }

        /**
         * <p>Searches user profiles in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchUserProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUserProfilesOutcome SearchUserProfiles(const Model::SearchUserProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchUserProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchUserProfilesRequestT = Model::SearchUserProfilesRequest>
        Model::SearchUserProfilesOutcomeCallable SearchUserProfilesCallable(const SearchUserProfilesRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::SearchUserProfiles, request);
        }

        /**
         * An Async wrapper for SearchUserProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchUserProfilesRequestT = Model::SearchUserProfilesRequest>
        void SearchUserProfilesAsync(const SearchUserProfilesRequestT& request, const SearchUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::SearchUserProfiles, request, handler, context);
        }

        /**
         * <p>Start the run of the specified data source in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/StartDataSourceRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataSourceRunOutcome StartDataSourceRun(const Model::StartDataSourceRunRequest& request) const;

        /**
         * A Callable wrapper for StartDataSourceRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDataSourceRunRequestT = Model::StartDataSourceRunRequest>
        Model::StartDataSourceRunOutcomeCallable StartDataSourceRunCallable(const StartDataSourceRunRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::StartDataSourceRun, request);
        }

        /**
         * An Async wrapper for StartDataSourceRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDataSourceRunRequestT = Model::StartDataSourceRunRequest>
        void StartDataSourceRunAsync(const StartDataSourceRunRequestT& request, const StartDataSourceRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::StartDataSourceRun, request, handler, context);
        }

        /**
         * <p>Tags a resource in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untags a resource in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the specified data source in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateDataSource, request, handler, context);
        }

        /**
         * <p>Updates a Amazon DataZone domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainRequestT = Model::UpdateDomainRequest>
        Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const UpdateDomainRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateDomain, request);
        }

        /**
         * An Async wrapper for UpdateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainRequestT = Model::UpdateDomainRequest>
        void UpdateDomainAsync(const UpdateDomainRequestT& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateDomain, request, handler, context);
        }

        /**
         * <p>Updates the specified environment in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateEnvironment, request, handler, context);
        }

        /**
         * <p>Updates the specified environment profile in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateEnvironmentProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentProfileOutcome UpdateEnvironmentProfile(const Model::UpdateEnvironmentProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironmentProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentProfileRequestT = Model::UpdateEnvironmentProfileRequest>
        Model::UpdateEnvironmentProfileOutcomeCallable UpdateEnvironmentProfileCallable(const UpdateEnvironmentProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateEnvironmentProfile, request);
        }

        /**
         * An Async wrapper for UpdateEnvironmentProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentProfileRequestT = Model::UpdateEnvironmentProfileRequest>
        void UpdateEnvironmentProfileAsync(const UpdateEnvironmentProfileRequestT& request, const UpdateEnvironmentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateEnvironmentProfile, request, handler, context);
        }

        /**
         * <p>Updates the business glossary in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateGlossary">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlossaryOutcome UpdateGlossary(const Model::UpdateGlossaryRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlossary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGlossaryRequestT = Model::UpdateGlossaryRequest>
        Model::UpdateGlossaryOutcomeCallable UpdateGlossaryCallable(const UpdateGlossaryRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateGlossary, request);
        }

        /**
         * An Async wrapper for UpdateGlossary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlossaryRequestT = Model::UpdateGlossaryRequest>
        void UpdateGlossaryAsync(const UpdateGlossaryRequestT& request, const UpdateGlossaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateGlossary, request, handler, context);
        }

        /**
         * <p>Updates a business glossary term in Amazon DataZone.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateGlossaryTerm">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlossaryTermOutcome UpdateGlossaryTerm(const Model::UpdateGlossaryTermRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlossaryTerm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGlossaryTermRequestT = Model::UpdateGlossaryTermRequest>
        Model::UpdateGlossaryTermOutcomeCallable UpdateGlossaryTermCallable(const UpdateGlossaryTermRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateGlossaryTerm, request);
        }

        /**
         * An Async wrapper for UpdateGlossaryTerm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlossaryTermRequestT = Model::UpdateGlossaryTermRequest>
        void UpdateGlossaryTermAsync(const UpdateGlossaryTermRequestT& request, const UpdateGlossaryTermResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateGlossaryTerm, request, handler, context);
        }

        /**
         * <p>Updates the specified group profile in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateGroupProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupProfileOutcome UpdateGroupProfile(const Model::UpdateGroupProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroupProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupProfileRequestT = Model::UpdateGroupProfileRequest>
        Model::UpdateGroupProfileOutcomeCallable UpdateGroupProfileCallable(const UpdateGroupProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateGroupProfile, request);
        }

        /**
         * An Async wrapper for UpdateGroupProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupProfileRequestT = Model::UpdateGroupProfileRequest>
        void UpdateGroupProfileAsync(const UpdateGroupProfileRequestT& request, const UpdateGroupProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateGroupProfile, request, handler, context);
        }

        /**
         * <p>Updates the specified project in Amazon DataZone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateProject, request, handler, context);
        }

        /**
         * <p>Updates the status of the specified subscription grant status in Amazon
         * DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateSubscriptionGrantStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionGrantStatusOutcome UpdateSubscriptionGrantStatus(const Model::UpdateSubscriptionGrantStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriptionGrantStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriptionGrantStatusRequestT = Model::UpdateSubscriptionGrantStatusRequest>
        Model::UpdateSubscriptionGrantStatusOutcomeCallable UpdateSubscriptionGrantStatusCallable(const UpdateSubscriptionGrantStatusRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateSubscriptionGrantStatus, request);
        }

        /**
         * An Async wrapper for UpdateSubscriptionGrantStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriptionGrantStatusRequestT = Model::UpdateSubscriptionGrantStatusRequest>
        void UpdateSubscriptionGrantStatusAsync(const UpdateSubscriptionGrantStatusRequestT& request, const UpdateSubscriptionGrantStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateSubscriptionGrantStatus, request, handler, context);
        }

        /**
         * <p>Updates a specified subscription request in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateSubscriptionRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionRequestOutcome UpdateSubscriptionRequest(const Model::UpdateSubscriptionRequestRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriptionRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriptionRequestRequestT = Model::UpdateSubscriptionRequestRequest>
        Model::UpdateSubscriptionRequestOutcomeCallable UpdateSubscriptionRequestCallable(const UpdateSubscriptionRequestRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateSubscriptionRequest, request);
        }

        /**
         * An Async wrapper for UpdateSubscriptionRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriptionRequestRequestT = Model::UpdateSubscriptionRequestRequest>
        void UpdateSubscriptionRequestAsync(const UpdateSubscriptionRequestRequestT& request, const UpdateSubscriptionRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateSubscriptionRequest, request, handler, context);
        }

        /**
         * <p>Updates the specified subscription target in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateSubscriptionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionTargetOutcome UpdateSubscriptionTarget(const Model::UpdateSubscriptionTargetRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriptionTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriptionTargetRequestT = Model::UpdateSubscriptionTargetRequest>
        Model::UpdateSubscriptionTargetOutcomeCallable UpdateSubscriptionTargetCallable(const UpdateSubscriptionTargetRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateSubscriptionTarget, request);
        }

        /**
         * An Async wrapper for UpdateSubscriptionTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriptionTargetRequestT = Model::UpdateSubscriptionTargetRequest>
        void UpdateSubscriptionTargetAsync(const UpdateSubscriptionTargetRequestT& request, const UpdateSubscriptionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateSubscriptionTarget, request, handler, context);
        }

        /**
         * <p>Updates the specified user profile in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserProfileOutcome UpdateUserProfile(const Model::UpdateUserProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserProfileRequestT = Model::UpdateUserProfileRequest>
        Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const UpdateUserProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateUserProfile, request);
        }

        /**
         * An Async wrapper for UpdateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserProfileRequestT = Model::UpdateUserProfileRequest>
        void UpdateUserProfileAsync(const UpdateUserProfileRequestT& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateUserProfile, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DataZoneEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DataZoneClient>;
      void init(const DataZoneClientConfiguration& clientConfiguration);

      DataZoneClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DataZoneEndpointProviderBase> m_endpointProvider;
  };

} // namespace DataZone
} // namespace Aws
