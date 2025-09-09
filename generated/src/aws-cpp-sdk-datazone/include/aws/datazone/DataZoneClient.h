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
         * <p>Adds the owner of an entity (a domain unit).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AddEntityOwner">AWS
         * API Reference</a></p>
         */
        virtual Model::AddEntityOwnerOutcome AddEntityOwner(const Model::AddEntityOwnerRequest& request) const;

        /**
         * A Callable wrapper for AddEntityOwner that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddEntityOwnerRequestT = Model::AddEntityOwnerRequest>
        Model::AddEntityOwnerOutcomeCallable AddEntityOwnerCallable(const AddEntityOwnerRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::AddEntityOwner, request);
        }

        /**
         * An Async wrapper for AddEntityOwner that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddEntityOwnerRequestT = Model::AddEntityOwnerRequest>
        void AddEntityOwnerAsync(const AddEntityOwnerRequestT& request, const AddEntityOwnerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::AddEntityOwner, request, handler, context);
        }

        /**
         * <p>Adds a policy grant (an authorization policy) to a specified entity,
         * including domain units, environment blueprint configurations, or environment
         * profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AddPolicyGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPolicyGrantOutcome AddPolicyGrant(const Model::AddPolicyGrantRequest& request) const;

        /**
         * A Callable wrapper for AddPolicyGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddPolicyGrantRequestT = Model::AddPolicyGrantRequest>
        Model::AddPolicyGrantOutcomeCallable AddPolicyGrantCallable(const AddPolicyGrantRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::AddPolicyGrant, request);
        }

        /**
         * An Async wrapper for AddPolicyGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddPolicyGrantRequestT = Model::AddPolicyGrantRequest>
        void AddPolicyGrantAsync(const AddPolicyGrantRequestT& request, const AddPolicyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::AddPolicyGrant, request, handler, context);
        }

        /**
         * <p>Associates the environment role in Amazon DataZone.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssociateEnvironmentRole">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateEnvironmentRoleOutcome AssociateEnvironmentRole(const Model::AssociateEnvironmentRoleRequest& request) const;

        /**
         * A Callable wrapper for AssociateEnvironmentRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateEnvironmentRoleRequestT = Model::AssociateEnvironmentRoleRequest>
        Model::AssociateEnvironmentRoleOutcomeCallable AssociateEnvironmentRoleCallable(const AssociateEnvironmentRoleRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::AssociateEnvironmentRole, request);
        }

        /**
         * An Async wrapper for AssociateEnvironmentRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateEnvironmentRoleRequestT = Model::AssociateEnvironmentRoleRequest>
        void AssociateEnvironmentRoleAsync(const AssociateEnvironmentRoleRequestT& request, const AssociateEnvironmentRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::AssociateEnvironmentRole, request, handler, context);
        }

        /**
         * <p>Associates governed terms with an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssociateGovernedTerms">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateGovernedTermsOutcome AssociateGovernedTerms(const Model::AssociateGovernedTermsRequest& request) const;

        /**
         * A Callable wrapper for AssociateGovernedTerms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateGovernedTermsRequestT = Model::AssociateGovernedTermsRequest>
        Model::AssociateGovernedTermsOutcomeCallable AssociateGovernedTermsCallable(const AssociateGovernedTermsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::AssociateGovernedTerms, request);
        }

        /**
         * An Async wrapper for AssociateGovernedTerms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateGovernedTermsRequestT = Model::AssociateGovernedTermsRequest>
        void AssociateGovernedTermsAsync(const AssociateGovernedTermsRequestT& request, const AssociateGovernedTermsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::AssociateGovernedTerms, request, handler, context);
        }

        /**
         * <p>Cancels the metadata generation run.</p> <p>Prerequisites:</p> <ul> <li>
         * <p>The run must exist and be in a cancelable status (e.g., SUBMITTED,
         * IN_PROGRESS). </p> </li> <li> <p>Runs in SUCCEEDED status cannot be
         * cancelled.</p> </li> <li> <p>User must have access to the run and cancel
         * permissions.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CancelMetadataGenerationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMetadataGenerationRunOutcome CancelMetadataGenerationRun(const Model::CancelMetadataGenerationRunRequest& request) const;

        /**
         * A Callable wrapper for CancelMetadataGenerationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMetadataGenerationRunRequestT = Model::CancelMetadataGenerationRunRequest>
        Model::CancelMetadataGenerationRunOutcomeCallable CancelMetadataGenerationRunCallable(const CancelMetadataGenerationRunRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CancelMetadataGenerationRun, request);
        }

        /**
         * An Async wrapper for CancelMetadataGenerationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMetadataGenerationRunRequestT = Model::CancelMetadataGenerationRunRequest>
        void CancelMetadataGenerationRunAsync(const CancelMetadataGenerationRunRequestT& request, const CancelMetadataGenerationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CancelMetadataGenerationRun, request, handler, context);
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
         * <p>Creates an account pool. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateAccountPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountPoolOutcome CreateAccountPool(const Model::CreateAccountPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccountPoolRequestT = Model::CreateAccountPoolRequest>
        Model::CreateAccountPoolOutcomeCallable CreateAccountPoolCallable(const CreateAccountPoolRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateAccountPool, request);
        }

        /**
         * An Async wrapper for CreateAccountPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccountPoolRequestT = Model::CreateAccountPoolRequest>
        void CreateAccountPoolAsync(const CreateAccountPoolRequestT& request, const CreateAccountPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateAccountPool, request, handler, context);
        }

        /**
         * <p>Creates an asset in Amazon DataZone catalog.</p> <p>Before creating assets,
         * make sure that the following requirements are met:</p> <ul> <li> <p>
         * <code>--domain-identifier</code> must refer to an existing domain.</p> </li>
         * <li> <p> <code>--owning-project-identifier</code> must be a valid project within
         * the domain.</p> </li> <li> <p>Asset type must be created beforehand using
         * <code>create-asset-type</code>, or be a supported system-defined type. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/datazone/create-asset-type.html">create-asset-type</a>.</p>
         * </li> <li> <p> <code>--type-revision</code> (if used) must match a valid
         * revision of the asset type.</p> </li> <li> <p>Form type must exist and be
         * associated with the asset type. Use <code>create-form-type</code> to define. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/datazone/create-form-type.html">create-form-type</a>.</p>
         * </li> <li> <p>Form content must include all required fields as per the form
         * schema (e.g., <code>bucketArn</code>).</p> </li> </ul> <p>You must invoke the
         * following pre-requisite commands before invoking this API:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/datazone/latest/APIReference/API_CreateFormType.html">CreateFormType</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/datazone/latest/APIReference/API_CreateAssetType.html">CreateAssetType</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Creates a data asset filter.</p> <p>Asset filters provide a sophisticated way
         * to create controlled views of data assets by selecting specific columns or
         * applying row-level filters. This capability is crucial for organizations that
         * need to share data while maintaining security and privacy controls. For example,
         * your database might be filtered to show only non-PII fields to certain users, or
         * sales data might be filtered by region for different regional teams. Asset
         * filters enable fine-grained access control while maintaining a single source of
         * truth.</p> <p>Prerequisites:</p> <ul> <li> <p>A valid domain
         * (<code>--domain-identifier</code>) must exist. </p> </li> <li> <p>A data asset
         * (<code>--asset-identifier</code>) must already be created under that domain.</p>
         * </li> <li> <p>The asset must have the referenced columns available in its schema
         * for column-based filtering.</p> </li> <li> <p>You cannot specify both
         * (<code>columnConfiguration</code>, <code>rowConfiguration</code>)at the same
         * time.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateAssetFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetFilterOutcome CreateAssetFilter(const Model::CreateAssetFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateAssetFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssetFilterRequestT = Model::CreateAssetFilterRequest>
        Model::CreateAssetFilterOutcomeCallable CreateAssetFilterCallable(const CreateAssetFilterRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateAssetFilter, request);
        }

        /**
         * An Async wrapper for CreateAssetFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssetFilterRequestT = Model::CreateAssetFilterRequest>
        void CreateAssetFilterAsync(const CreateAssetFilterRequestT& request, const CreateAssetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateAssetFilter, request, handler, context);
        }

        /**
         * <p>Creates a revision of the asset.</p> <p>Asset revisions represent new
         * versions of existing assets, capturing changes to either the underlying data or
         * its metadata. They maintain a historical record of how assets evolve over time,
         * who made changes, and when those changes occurred. This versioning capability is
         * crucial for governance and compliance, allowing organizations to track changes,
         * understand their impact, and roll back if necessary.</p> <p>Prerequisites:</p>
         * <ul> <li> <p>Asset must already exist in the domain with identifier. </p> </li>
         * <li> <p>The form type with correct revision must be registered in the same
         * domain.</p> </li> <li> <p>The form content must include all required fields
         * (e.g., <code>bucketArn</code> for <code>S3ObjectCollectionForm</code>).</p>
         * </li> <li> <p>The owning project of the original asset must still exist and be
         * active.</p> </li> <li> <p>User must have write access to the project and
         * domain.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Creates a custom asset type.</p> <p>Prerequisites:</p> <ul> <li> <p>The form
         * type with <code>typeIdentifier</code> and <code>typeRevision</code> must exist
         * and be published. </p> </li> <li> <p>You must have <code>CreateAssetType</code>
         * permissions.</p> </li> <li> <p>The domain-identifier and
         * owning-project-identifier must be valid and active.</p> </li> <li> <p>The name
         * of the asset type must be unique within the domain — duplicate names will cause
         * failure.</p> </li> <li> <p>JSON input must be valid — incorrect formatting
         * causes Invalid JSON errors.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Creates a new connection. In Amazon DataZone, a connection enables you to
         * connect your resources (domains, projects, and environments) to external
         * resources and services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const CreateConnectionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateConnection, request);
        }

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        void CreateConnectionAsync(const CreateConnectionRequestT& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateConnection, request, handler, context);
        }

        /**
         * <p>Creates a data product.</p> <p>A data product is a comprehensive package that
         * combines data assets with their associated metadata, documentation, and access
         * controls. It's designed to serve specific business needs or use cases, making it
         * easier for users to find and consume data appropriately. Data products include
         * important information about data quality, freshness, and usage guidelines,
         * effectively bridging the gap between data producers and consumers while ensuring
         * proper governance.</p> <p>Prerequisites:</p> <ul> <li> <p>The domain must exist
         * and be accessible. </p> </li> <li> <p>The owning project must be valid and
         * active.</p> </li> <li> <p>The name must be unique within the domain (no existing
         * data product with the same name).</p> </li> <li> <p>User must have create
         * permissions for data products in the project.</p> </li> <li> <p>The domain must
         * have Amazon DataZone publishing enabled.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateDataProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataProductOutcome CreateDataProduct(const Model::CreateDataProductRequest& request) const;

        /**
         * A Callable wrapper for CreateDataProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataProductRequestT = Model::CreateDataProductRequest>
        Model::CreateDataProductOutcomeCallable CreateDataProductCallable(const CreateDataProductRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateDataProduct, request);
        }

        /**
         * An Async wrapper for CreateDataProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataProductRequestT = Model::CreateDataProductRequest>
        void CreateDataProductAsync(const CreateDataProductRequestT& request, const CreateDataProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateDataProduct, request, handler, context);
        }

        /**
         * <p>Creates a data product revision.</p> <p>Prerequisites:</p> <ul> <li> <p>The
         * original data product must exist in the given domain. </p> </li> <li> <p>User
         * must have permissions on the data product.</p> </li> <li> <p>The domain must be
         * valid and accessible.</p> </li> <li> <p>The new revision name must comply with
         * naming constraints (if required).</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateDataProductRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataProductRevisionOutcome CreateDataProductRevision(const Model::CreateDataProductRevisionRequest& request) const;

        /**
         * A Callable wrapper for CreateDataProductRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataProductRevisionRequestT = Model::CreateDataProductRevisionRequest>
        Model::CreateDataProductRevisionOutcomeCallable CreateDataProductRevisionCallable(const CreateDataProductRevisionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateDataProductRevision, request);
        }

        /**
         * An Async wrapper for CreateDataProductRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataProductRevisionRequestT = Model::CreateDataProductRevisionRequest>
        void CreateDataProductRevisionAsync(const CreateDataProductRevisionRequestT& request, const CreateDataProductRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateDataProductRevision, request, handler, context);
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
         * <p>Creates a domain unit in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateDomainUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainUnitOutcome CreateDomainUnit(const Model::CreateDomainUnitRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainUnitRequestT = Model::CreateDomainUnitRequest>
        Model::CreateDomainUnitOutcomeCallable CreateDomainUnitCallable(const CreateDomainUnitRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateDomainUnit, request);
        }

        /**
         * An Async wrapper for CreateDomainUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainUnitRequestT = Model::CreateDomainUnitRequest>
        void CreateDomainUnitAsync(const CreateDomainUnitRequestT& request, const CreateDomainUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateDomainUnit, request, handler, context);
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
         * <p>Creates an action for the environment, for example, creates a console link
         * for an analytics tool that is available in this environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateEnvironmentAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentActionOutcome CreateEnvironmentAction(const Model::CreateEnvironmentActionRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentActionRequestT = Model::CreateEnvironmentActionRequest>
        Model::CreateEnvironmentActionOutcomeCallable CreateEnvironmentActionCallable(const CreateEnvironmentActionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateEnvironmentAction, request);
        }

        /**
         * An Async wrapper for CreateEnvironmentAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentActionRequestT = Model::CreateEnvironmentActionRequest>
        void CreateEnvironmentActionAsync(const CreateEnvironmentActionRequestT& request, const CreateEnvironmentActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateEnvironmentAction, request, handler, context);
        }

        /**
         * <p>Creates a Amazon DataZone blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateEnvironmentBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentBlueprintOutcome CreateEnvironmentBlueprint(const Model::CreateEnvironmentBlueprintRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentBlueprintRequestT = Model::CreateEnvironmentBlueprintRequest>
        Model::CreateEnvironmentBlueprintOutcomeCallable CreateEnvironmentBlueprintCallable(const CreateEnvironmentBlueprintRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateEnvironmentBlueprint, request);
        }

        /**
         * An Async wrapper for CreateEnvironmentBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentBlueprintRequestT = Model::CreateEnvironmentBlueprintRequest>
        void CreateEnvironmentBlueprintAsync(const CreateEnvironmentBlueprintRequestT& request, const CreateEnvironmentBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateEnvironmentBlueprint, request, handler, context);
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
         * <p>Creates a metadata form type.</p> <p>Prerequisites:</p> <ul> <li> <p>The
         * domain must exist and be in an <code>ENABLED</code> state. </p> </li> <li>
         * <p>The owning project must exist and be accessible.</p> </li> <li> <p>The name
         * must be unique within the domain.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Creates an Amazon DataZone business glossary.</p> <p>Specifies that this is a
         * create glossary policy.</p> <p>A glossary serves as the central repository for
         * business terminology and definitions within an organization. It helps establish
         * and maintain a common language across different departments and teams, reducing
         * miscommunication and ensuring consistent interpretation of business concepts.
         * Glossaries can include hierarchical relationships between terms,
         * cross-references, and links to actual data assets, making them invaluable for
         * both business users and technical teams trying to understand and use data
         * correctly.</p> <p>Prerequisites:</p> <ul> <li> <p>Domain must exist and be in an
         * active state. </p> </li> <li> <p>Owning project must exist and be accessible by
         * the caller.</p> </li> <li> <p>The glossary name must be unique within the
         * domain.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Creates a business glossary term.</p> <p>A glossary term represents an
         * individual entry within the Amazon DataZone glossary, serving as a standardized
         * definition for a specific business concept or data element. Each term can
         * include rich metadata such as detailed definitions, synonyms, related terms, and
         * usage examples. Glossary terms can be linked directly to data assets, providing
         * business context to technical data elements. This linking capability helps users
         * understand the business meaning of data fields and ensures consistent
         * interpretation across different systems and teams. Terms can also have
         * relationships with other terms, creating a semantic network that reflects the
         * complexity of business concepts.</p> <p>Prerequisites:</p> <ul> <li> <p>Domain
         * must exist. </p> </li> <li> <p>Glossary must exist and be in an ENABLED
         * state.</p> </li> <li> <p>The term name must be unique within the glossary.</p>
         * </li> <li> <p>Ensure term does not conflict with existing terms in
         * hierarchy.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Publishes a listing (a record of an asset at a given time) or removes a
         * listing from the catalog. </p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a project profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateProjectProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectProfileOutcome CreateProjectProfile(const Model::CreateProjectProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProjectProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectProfileRequestT = Model::CreateProjectProfileRequest>
        Model::CreateProjectProfileOutcomeCallable CreateProjectProfileCallable(const CreateProjectProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateProjectProfile, request);
        }

        /**
         * An Async wrapper for CreateProjectProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectProfileRequestT = Model::CreateProjectProfileRequest>
        void CreateProjectProfileAsync(const CreateProjectProfileRequestT& request, const CreateProjectProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateProjectProfile, request, handler, context);
        }

        /**
         * <p>Creates a rule in Amazon DataZone. A rule is a formal agreement that enforces
         * specific requirements across user workflows (e.g., publishing assets to the
         * catalog, requesting subscriptions, creating projects) within the Amazon DataZone
         * data portal. These rules help maintain consistency, ensure compliance, and
         * uphold governance standards in data management processes. For instance, a
         * metadata enforcement rule can specify the required information for creating a
         * subscription request or publishing a data asset to the catalog, ensuring
         * alignment with organizational standards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        Model::CreateRuleOutcomeCallable CreateRuleCallable(const CreateRuleRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::CreateRule, request);
        }

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        void CreateRuleAsync(const CreateRuleRequestT& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::CreateRule, request, handler, context);
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
         * <p>Deletes an account pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteAccountPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountPoolOutcome DeleteAccountPool(const Model::DeleteAccountPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccountPoolRequestT = Model::DeleteAccountPoolRequest>
        Model::DeleteAccountPoolOutcomeCallable DeleteAccountPoolCallable(const DeleteAccountPoolRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteAccountPool, request);
        }

        /**
         * An Async wrapper for DeleteAccountPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccountPoolRequestT = Model::DeleteAccountPoolRequest>
        void DeleteAccountPoolAsync(const DeleteAccountPoolRequestT& request, const DeleteAccountPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteAccountPool, request, handler, context);
        }

        /**
         * <p>Deletes an asset in Amazon DataZone.</p> <ul> <li> <p>--domain-identifier
         * must refer to a valid and existing domain. </p> </li> <li> <p>--identifier must
         * refer to an existing asset in the specified domain.</p> </li> <li> <p>Asset must
         * not be referenced in any existing asset filters.</p> </li> <li> <p>Asset must
         * not be linked to any draft or published data product.</p> </li> <li> <p>User
         * must have delete permissions for the domain and project.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes an asset filter.</p> <p>Prerequisites:</p> <ul> <li> <p>The asset
         * filter must exist. </p> </li> <li> <p>The domain and asset must not have been
         * deleted.</p> </li> <li> <p>Ensure the --identifier refers to a valid filter
         * ID.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteAssetFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetFilterOutcome DeleteAssetFilter(const Model::DeleteAssetFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssetFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssetFilterRequestT = Model::DeleteAssetFilterRequest>
        Model::DeleteAssetFilterOutcomeCallable DeleteAssetFilterCallable(const DeleteAssetFilterRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteAssetFilter, request);
        }

        /**
         * An Async wrapper for DeleteAssetFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssetFilterRequestT = Model::DeleteAssetFilterRequest>
        void DeleteAssetFilterAsync(const DeleteAssetFilterRequestT& request, const DeleteAssetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteAssetFilter, request, handler, context);
        }

        /**
         * <p>Deletes an asset type in Amazon DataZone.</p> <p>Prerequisites:</p> <ul> <li>
         * <p>The asset type must exist in the domain. </p> </li> <li> <p>You must have
         * DeleteAssetType permission.</p> </li> <li> <p>The asset type must not be in use
         * (e.g., assigned to any asset). If used, deletion will fail.</p> </li> <li>
         * <p>You should retrieve the asset type using get-asset-type to confirm its
         * presence before deletion.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes and connection. In Amazon DataZone, a connection enables you to
         * connect your resources (domains, projects, and environments) to external
         * resources and services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteConnection, request);
        }

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteConnection, request, handler, context);
        }

        /**
         * <p>Deletes a data product in Amazon DataZone.</p> <p>Prerequisites:</p> <ul>
         * <li> <p>The data product must exist and not be deleted or archived. </p> </li>
         * <li> <p>The user must have delete permissions for the data product.</p> </li>
         * <li> <p>Ensure there are no active dependencies (e.g., published links, assets
         * using the product).</p> </li> <li> <p>Domain and project must be active.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteDataProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataProductOutcome DeleteDataProduct(const Model::DeleteDataProductRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataProductRequestT = Model::DeleteDataProductRequest>
        Model::DeleteDataProductOutcomeCallable DeleteDataProductCallable(const DeleteDataProductRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteDataProduct, request);
        }

        /**
         * An Async wrapper for DeleteDataProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataProductRequestT = Model::DeleteDataProductRequest>
        void DeleteDataProductAsync(const DeleteDataProductRequestT& request, const DeleteDataProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteDataProduct, request, handler, context);
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
         * <p>Deletes a domain unit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteDomainUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainUnitOutcome DeleteDomainUnit(const Model::DeleteDomainUnitRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainUnitRequestT = Model::DeleteDomainUnitRequest>
        Model::DeleteDomainUnitOutcomeCallable DeleteDomainUnitCallable(const DeleteDomainUnitRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteDomainUnit, request);
        }

        /**
         * An Async wrapper for DeleteDomainUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainUnitRequestT = Model::DeleteDomainUnitRequest>
        void DeleteDomainUnitAsync(const DeleteDomainUnitRequestT& request, const DeleteDomainUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteDomainUnit, request, handler, context);
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
         * <p>Deletes an action for the environment, for example, deletes a console link
         * for an analytics tool that is available in this environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteEnvironmentAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentActionOutcome DeleteEnvironmentAction(const Model::DeleteEnvironmentActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentActionRequestT = Model::DeleteEnvironmentActionRequest>
        Model::DeleteEnvironmentActionOutcomeCallable DeleteEnvironmentActionCallable(const DeleteEnvironmentActionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteEnvironmentAction, request);
        }

        /**
         * An Async wrapper for DeleteEnvironmentAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentActionRequestT = Model::DeleteEnvironmentActionRequest>
        void DeleteEnvironmentActionAsync(const DeleteEnvironmentActionRequestT& request, const DeleteEnvironmentActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteEnvironmentAction, request, handler, context);
        }

        /**
         * <p>Deletes a blueprint in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteEnvironmentBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentBlueprintOutcome DeleteEnvironmentBlueprint(const Model::DeleteEnvironmentBlueprintRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentBlueprintRequestT = Model::DeleteEnvironmentBlueprintRequest>
        Model::DeleteEnvironmentBlueprintOutcomeCallable DeleteEnvironmentBlueprintCallable(const DeleteEnvironmentBlueprintRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteEnvironmentBlueprint, request);
        }

        /**
         * An Async wrapper for DeleteEnvironmentBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentBlueprintRequestT = Model::DeleteEnvironmentBlueprintRequest>
        void DeleteEnvironmentBlueprintAsync(const DeleteEnvironmentBlueprintRequestT& request, const DeleteEnvironmentBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteEnvironmentBlueprint, request, handler, context);
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
         * <p>Deletes and metadata form type in Amazon DataZone.</p> <p>Prerequisites:</p>
         * <ul> <li> <p>The form type must exist in the domain. </p> </li> <li> <p>The form
         * type must not be in use by any asset types or assets.</p> </li> <li> <p>The
         * domain must be valid and accessible.</p> </li> <li> <p>User must have delete
         * permissions on the form type.</p> </li> <li> <p>Any dependencies (such as linked
         * asset types) must be removed first.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a business glossary in Amazon DataZone.</p> <p>Prerequisites:</p>
         * <ul> <li> <p>The glossary must be in DISABLED state. </p> </li> <li> <p>The
         * glossary must not have any glossary terms associated with it.</p> </li> <li>
         * <p>The glossary must exist in the specified domain.</p> </li> <li> <p>The caller
         * must have the <code>datazone:DeleteGlossary</code> permission in the domain and
         * glossary.</p> </li> <li> <p>There should be no active assets or metadata linked
         * to the glossary.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a business glossary term in Amazon DataZone.</p>
         * <p>Prerequisites:</p> <ul> <li> <p>Glossary term must exist and be active. </p>
         * </li> <li> <p>The term must not be linked to other assets or child terms.</p>
         * </li> <li> <p>Caller must have delete permissions in the domain/glossary.</p>
         * </li> <li> <p>Ensure all associations (such as to assets or parent terms) are
         * removed before deletion.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a listing (a record of an asset at a given time).</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Deletes a project profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteProjectProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectProfileOutcome DeleteProjectProfile(const Model::DeleteProjectProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProjectProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectProfileRequestT = Model::DeleteProjectProfileRequest>
        Model::DeleteProjectProfileOutcomeCallable DeleteProjectProfileCallable(const DeleteProjectProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteProjectProfile, request);
        }

        /**
         * An Async wrapper for DeleteProjectProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectProfileRequestT = Model::DeleteProjectProfileRequest>
        void DeleteProjectProfileAsync(const DeleteProjectProfileRequestT& request, const DeleteProjectProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteProjectProfile, request, handler, context);
        }

        /**
         * <p>Deletes a rule in Amazon DataZone. A rule is a formal agreement that enforces
         * specific requirements across user workflows (e.g., publishing assets to the
         * catalog, requesting subscriptions, creating projects) within the Amazon DataZone
         * data portal. These rules help maintain consistency, ensure compliance, and
         * uphold governance standards in data management processes. For instance, a
         * metadata enforcement rule can specify the required information for creating a
         * subscription request or publishing a data asset to the catalog, ensuring
         * alignment with organizational standards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteRule, request);
        }

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteRule, request, handler, context);
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
         * <p>Deletes the specified time series form for the specified asset.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DeleteTimeSeriesDataPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTimeSeriesDataPointsOutcome DeleteTimeSeriesDataPoints(const Model::DeleteTimeSeriesDataPointsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTimeSeriesDataPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTimeSeriesDataPointsRequestT = Model::DeleteTimeSeriesDataPointsRequest>
        Model::DeleteTimeSeriesDataPointsOutcomeCallable DeleteTimeSeriesDataPointsCallable(const DeleteTimeSeriesDataPointsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DeleteTimeSeriesDataPoints, request);
        }

        /**
         * An Async wrapper for DeleteTimeSeriesDataPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTimeSeriesDataPointsRequestT = Model::DeleteTimeSeriesDataPointsRequest>
        void DeleteTimeSeriesDataPointsAsync(const DeleteTimeSeriesDataPointsRequestT& request, const DeleteTimeSeriesDataPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DeleteTimeSeriesDataPoints, request, handler, context);
        }

        /**
         * <p>Disassociates the environment role in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DisassociateEnvironmentRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateEnvironmentRoleOutcome DisassociateEnvironmentRole(const Model::DisassociateEnvironmentRoleRequest& request) const;

        /**
         * A Callable wrapper for DisassociateEnvironmentRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateEnvironmentRoleRequestT = Model::DisassociateEnvironmentRoleRequest>
        Model::DisassociateEnvironmentRoleOutcomeCallable DisassociateEnvironmentRoleCallable(const DisassociateEnvironmentRoleRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DisassociateEnvironmentRole, request);
        }

        /**
         * An Async wrapper for DisassociateEnvironmentRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateEnvironmentRoleRequestT = Model::DisassociateEnvironmentRoleRequest>
        void DisassociateEnvironmentRoleAsync(const DisassociateEnvironmentRoleRequestT& request, const DisassociateEnvironmentRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DisassociateEnvironmentRole, request, handler, context);
        }

        /**
         * <p>Disassociates restricted terms from an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DisassociateGovernedTerms">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateGovernedTermsOutcome DisassociateGovernedTerms(const Model::DisassociateGovernedTermsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateGovernedTerms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateGovernedTermsRequestT = Model::DisassociateGovernedTermsRequest>
        Model::DisassociateGovernedTermsOutcomeCallable DisassociateGovernedTermsCallable(const DisassociateGovernedTermsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::DisassociateGovernedTerms, request);
        }

        /**
         * An Async wrapper for DisassociateGovernedTerms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateGovernedTermsRequestT = Model::DisassociateGovernedTermsRequest>
        void DisassociateGovernedTermsAsync(const DisassociateGovernedTermsRequestT& request, const DisassociateGovernedTermsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::DisassociateGovernedTerms, request, handler, context);
        }

        /**
         * <p>Gets the details of the account pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetAccountPool">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountPoolOutcome GetAccountPool(const Model::GetAccountPoolRequest& request) const;

        /**
         * A Callable wrapper for GetAccountPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountPoolRequestT = Model::GetAccountPoolRequest>
        Model::GetAccountPoolOutcomeCallable GetAccountPoolCallable(const GetAccountPoolRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetAccountPool, request);
        }

        /**
         * An Async wrapper for GetAccountPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountPoolRequestT = Model::GetAccountPoolRequest>
        void GetAccountPoolAsync(const GetAccountPoolRequestT& request, const GetAccountPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetAccountPool, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone asset.</p> <p>An asset is the fundamental building
         * block in Amazon DataZone, representing any data resource that needs to be
         * cataloged and managed. It can take many forms, from Amazon S3 buckets and
         * database tables to dashboards and machine learning models. Each asset contains
         * comprehensive metadata about the resource, including its location, schema,
         * ownership, and lineage information. Assets are essential for organizing and
         * managing data resources across an organization, making them discoverable and
         * usable while maintaining proper governance.</p> <p>Before using the Amazon
         * DataZone GetAsset command, ensure the following prerequisites are met:</p> <ul>
         * <li> <p>Domain identifier must exist and be valid</p> </li> <li> <p>Asset
         * identifier must exist</p> </li> <li> <p>User must have the required permissions
         * to perform the action</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Gets an asset filter.</p> <p>Prerequisites:</p> <ul> <li> <p>Domain
         * (<code>--domain-identifier</code>), asset (<code>--asset-identifier</code>), and
         * filter (<code>--identifier</code>) must all exist. </p> </li> <li> <p>The asset
         * filter should not have been deleted.</p> </li> <li> <p>The asset must still
         * exist (since the filter is linked to it).</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetAssetFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetFilterOutcome GetAssetFilter(const Model::GetAssetFilterRequest& request) const;

        /**
         * A Callable wrapper for GetAssetFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssetFilterRequestT = Model::GetAssetFilterRequest>
        Model::GetAssetFilterOutcomeCallable GetAssetFilterCallable(const GetAssetFilterRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetAssetFilter, request);
        }

        /**
         * An Async wrapper for GetAssetFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssetFilterRequestT = Model::GetAssetFilterRequest>
        void GetAssetFilterAsync(const GetAssetFilterRequestT& request, const GetAssetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetAssetFilter, request, handler, context);
        }

        /**
         * <p>Gets an Amazon DataZone asset type.</p> <p>Asset types define the categories
         * and characteristics of different kinds of data assets within Amazon DataZone..
         * They determine what metadata fields are required, what operations are possible,
         * and how the asset integrates with other Amazon Web Services services. Asset
         * types can range from built-in types like Amazon S3 buckets and Amazon Web
         * Services Glue tables to custom types defined for specific organizational needs.
         * Understanding asset types is crucial for properly organizing and managing
         * different kinds of data resources.</p> <p>Prerequisites:</p> <ul> <li> <p>The
         * asset type with identifier must exist in the domain.
         * ResourceNotFoundException.</p> </li> <li> <p>You must have the GetAssetType
         * permission.</p> </li> <li> <p>Ensure the domain-identifier value is correct and
         * accessible.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Gets a connection. In Amazon DataZone, a connection enables you to connect
         * your resources (domains, projects, and environments) to external resources and
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

        /**
         * A Callable wrapper for GetConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        Model::GetConnectionOutcomeCallable GetConnectionCallable(const GetConnectionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetConnection, request);
        }

        /**
         * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        void GetConnectionAsync(const GetConnectionRequestT& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetConnection, request, handler, context);
        }

        /**
         * <p>Gets the data product.</p> <p>Prerequisites:</p> <ul> <li> <p>The data
         * product ID must exist. </p> </li> <li> <p>The domain must be valid and
         * accessible.</p> </li> <li> <p>User must have read or discovery permissions for
         * the data product.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetDataProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataProductOutcome GetDataProduct(const Model::GetDataProductRequest& request) const;

        /**
         * A Callable wrapper for GetDataProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataProductRequestT = Model::GetDataProductRequest>
        Model::GetDataProductOutcomeCallable GetDataProductCallable(const GetDataProductRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetDataProduct, request);
        }

        /**
         * An Async wrapper for GetDataProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataProductRequestT = Model::GetDataProductRequest>
        void GetDataProductAsync(const GetDataProductRequestT& request, const GetDataProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetDataProduct, request, handler, context);
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
         * <p>Gets the details of the specified domain unit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetDomainUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainUnitOutcome GetDomainUnit(const Model::GetDomainUnitRequest& request) const;

        /**
         * A Callable wrapper for GetDomainUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainUnitRequestT = Model::GetDomainUnitRequest>
        Model::GetDomainUnitOutcomeCallable GetDomainUnitCallable(const GetDomainUnitRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetDomainUnit, request);
        }

        /**
         * An Async wrapper for GetDomainUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainUnitRequestT = Model::GetDomainUnitRequest>
        void GetDomainUnitAsync(const GetDomainUnitRequestT& request, const GetDomainUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetDomainUnit, request, handler, context);
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
         * <p>Gets the specified environment action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetEnvironmentAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentActionOutcome GetEnvironmentAction(const Model::GetEnvironmentActionRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironmentAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentActionRequestT = Model::GetEnvironmentActionRequest>
        Model::GetEnvironmentActionOutcomeCallable GetEnvironmentActionCallable(const GetEnvironmentActionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetEnvironmentAction, request);
        }

        /**
         * An Async wrapper for GetEnvironmentAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentActionRequestT = Model::GetEnvironmentActionRequest>
        void GetEnvironmentActionAsync(const GetEnvironmentActionRequestT& request, const GetEnvironmentActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetEnvironmentAction, request, handler, context);
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
         * <p>Gets the credentials of an environment in Amazon DataZone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetEnvironmentCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentCredentialsOutcome GetEnvironmentCredentials(const Model::GetEnvironmentCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironmentCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentCredentialsRequestT = Model::GetEnvironmentCredentialsRequest>
        Model::GetEnvironmentCredentialsOutcomeCallable GetEnvironmentCredentialsCallable(const GetEnvironmentCredentialsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetEnvironmentCredentials, request);
        }

        /**
         * An Async wrapper for GetEnvironmentCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentCredentialsRequestT = Model::GetEnvironmentCredentialsRequest>
        void GetEnvironmentCredentialsAsync(const GetEnvironmentCredentialsRequestT& request, const GetEnvironmentCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetEnvironmentCredentials, request, handler, context);
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
         * <p>Gets a metadata form type in Amazon DataZone.</p> <p>Form types define the
         * structure and validation rules for collecting metadata about assets in Amazon
         * DataZone. They act as templates that ensure consistent metadata capture across
         * similar types of assets, while allowing for customization to meet specific
         * organizational needs. Form types can include required fields, validation rules,
         * and dependencies, helping maintain high-quality metadata that makes data assets
         * more discoverable and usable.</p> <ul> <li> <p>The form type with the specified
         * identifier must exist in the given domain. </p> </li> <li> <p>The domain must be
         * valid and active.</p> </li> <li> <p>User must have permission on the form
         * type.</p> </li> <li> <p>The form type should not be deleted or in an invalid
         * state.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Gets a business glossary in Amazon DataZone.</p> <p>Prerequisites:</p> <ul>
         * <li> <p>The specified glossary ID must exist and be associated with the given
         * domain. </p> </li> <li> <p>The caller must have the
         * <code>datazone:GetGlossary</code> permission on the domain.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
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
         * <p>Gets a business glossary term in Amazon DataZone.</p> <p>Prerequisites:</p>
         * <ul> <li> <p>Glossary term with identifier must exist in the domain. </p> </li>
         * <li> <p>User must have permission on the glossary term.</p> </li> <li> <p>Domain
         * must be accessible and active.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>The details of the job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobRunOutcome GetJobRun(const Model::GetJobRunRequest& request) const;

        /**
         * A Callable wrapper for GetJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRunRequestT = Model::GetJobRunRequest>
        Model::GetJobRunOutcomeCallable GetJobRunCallable(const GetJobRunRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetJobRun, request);
        }

        /**
         * An Async wrapper for GetJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRunRequestT = Model::GetJobRunRequest>
        void GetJobRunAsync(const GetJobRunRequestT& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetJobRun, request, handler, context);
        }

        /**
         * <p>Describes the lineage event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetLineageEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLineageEventOutcome GetLineageEvent(const Model::GetLineageEventRequest& request) const;

        /**
         * A Callable wrapper for GetLineageEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLineageEventRequestT = Model::GetLineageEventRequest>
        Model::GetLineageEventOutcomeCallable GetLineageEventCallable(const GetLineageEventRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetLineageEvent, request);
        }

        /**
         * An Async wrapper for GetLineageEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLineageEventRequestT = Model::GetLineageEventRequest>
        void GetLineageEventAsync(const GetLineageEventRequestT& request, const GetLineageEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetLineageEvent, request, handler, context);
        }

        /**
         * <p>Gets the data lineage node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetLineageNode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLineageNodeOutcome GetLineageNode(const Model::GetLineageNodeRequest& request) const;

        /**
         * A Callable wrapper for GetLineageNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLineageNodeRequestT = Model::GetLineageNodeRequest>
        Model::GetLineageNodeOutcomeCallable GetLineageNodeCallable(const GetLineageNodeRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetLineageNode, request);
        }

        /**
         * An Async wrapper for GetLineageNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLineageNodeRequestT = Model::GetLineageNodeRequest>
        void GetLineageNodeAsync(const GetLineageNodeRequestT& request, const GetLineageNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetLineageNode, request, handler, context);
        }

        /**
         * <p>Gets a listing (a record of an asset at a given time). If you specify a
         * listing version, only details that are specific to that version are
         * returned.</p><p><h3>See Also:</h3>   <a
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
         * <p>Gets a metadata generation run in Amazon DataZone.</p> <p>Prerequisites:</p>
         * <ul> <li> <p>Valid domain and run identifier. </p> </li> <li> <p>The metadata
         * generation run must exist.</p> </li> <li> <p>User must have read access to the
         * metadata run.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetMetadataGenerationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetadataGenerationRunOutcome GetMetadataGenerationRun(const Model::GetMetadataGenerationRunRequest& request) const;

        /**
         * A Callable wrapper for GetMetadataGenerationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetadataGenerationRunRequestT = Model::GetMetadataGenerationRunRequest>
        Model::GetMetadataGenerationRunOutcomeCallable GetMetadataGenerationRunCallable(const GetMetadataGenerationRunRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetMetadataGenerationRun, request);
        }

        /**
         * An Async wrapper for GetMetadataGenerationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetadataGenerationRunRequestT = Model::GetMetadataGenerationRunRequest>
        void GetMetadataGenerationRunAsync(const GetMetadataGenerationRunRequestT& request, const GetMetadataGenerationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetMetadataGenerationRun, request, handler, context);
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
         * <p>The details of the project profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetProjectProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectProfileOutcome GetProjectProfile(const Model::GetProjectProfileRequest& request) const;

        /**
         * A Callable wrapper for GetProjectProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProjectProfileRequestT = Model::GetProjectProfileRequest>
        Model::GetProjectProfileOutcomeCallable GetProjectProfileCallable(const GetProjectProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetProjectProfile, request);
        }

        /**
         * An Async wrapper for GetProjectProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProjectProfileRequestT = Model::GetProjectProfileRequest>
        void GetProjectProfileAsync(const GetProjectProfileRequestT& request, const GetProjectProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetProjectProfile, request, handler, context);
        }

        /**
         * <p>Gets the details of a rule in Amazon DataZone. A rule is a formal agreement
         * that enforces specific requirements across user workflows (e.g., publishing
         * assets to the catalog, requesting subscriptions, creating projects) within the
         * Amazon DataZone data portal. These rules help maintain consistency, ensure
         * compliance, and uphold governance standards in data management processes. For
         * instance, a metadata enforcement rule can specify the required information for
         * creating a subscription request or publishing a data asset to the catalog,
         * ensuring alignment with organizational standards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleOutcome GetRule(const Model::GetRuleRequest& request) const;

        /**
         * A Callable wrapper for GetRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRuleRequestT = Model::GetRuleRequest>
        Model::GetRuleOutcomeCallable GetRuleCallable(const GetRuleRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetRule, request);
        }

        /**
         * An Async wrapper for GetRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRuleRequestT = Model::GetRuleRequest>
        void GetRuleAsync(const GetRuleRequestT& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetRule, request, handler, context);
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
         * <p>Gets the existing data point for the asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GetTimeSeriesDataPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTimeSeriesDataPointOutcome GetTimeSeriesDataPoint(const Model::GetTimeSeriesDataPointRequest& request) const;

        /**
         * A Callable wrapper for GetTimeSeriesDataPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTimeSeriesDataPointRequestT = Model::GetTimeSeriesDataPointRequest>
        Model::GetTimeSeriesDataPointOutcomeCallable GetTimeSeriesDataPointCallable(const GetTimeSeriesDataPointRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::GetTimeSeriesDataPoint, request);
        }

        /**
         * An Async wrapper for GetTimeSeriesDataPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTimeSeriesDataPointRequestT = Model::GetTimeSeriesDataPointRequest>
        void GetTimeSeriesDataPointAsync(const GetTimeSeriesDataPointRequestT& request, const GetTimeSeriesDataPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::GetTimeSeriesDataPoint, request, handler, context);
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
         * <p>Lists existing account pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListAccountPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountPoolsOutcome ListAccountPools(const Model::ListAccountPoolsRequest& request) const;

        /**
         * A Callable wrapper for ListAccountPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountPoolsRequestT = Model::ListAccountPoolsRequest>
        Model::ListAccountPoolsOutcomeCallable ListAccountPoolsCallable(const ListAccountPoolsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListAccountPools, request);
        }

        /**
         * An Async wrapper for ListAccountPools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountPoolsRequestT = Model::ListAccountPoolsRequest>
        void ListAccountPoolsAsync(const ListAccountPoolsRequestT& request, const ListAccountPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListAccountPools, request, handler, context);
        }

        /**
         * <p>Lists the accounts in the specified account pool.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListAccountsInAccountPool">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsInAccountPoolOutcome ListAccountsInAccountPool(const Model::ListAccountsInAccountPoolRequest& request) const;

        /**
         * A Callable wrapper for ListAccountsInAccountPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountsInAccountPoolRequestT = Model::ListAccountsInAccountPoolRequest>
        Model::ListAccountsInAccountPoolOutcomeCallable ListAccountsInAccountPoolCallable(const ListAccountsInAccountPoolRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListAccountsInAccountPool, request);
        }

        /**
         * An Async wrapper for ListAccountsInAccountPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountsInAccountPoolRequestT = Model::ListAccountsInAccountPoolRequest>
        void ListAccountsInAccountPoolAsync(const ListAccountsInAccountPoolRequestT& request, const ListAccountsInAccountPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListAccountsInAccountPool, request, handler, context);
        }

        /**
         * <p>Lists asset filters.</p> <p>Prerequisites:</p> <ul> <li> <p>A valid domain
         * and asset must exist. </p> </li> <li> <p>The asset must have at least one filter
         * created to return results. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListAssetFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetFiltersOutcome ListAssetFilters(const Model::ListAssetFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListAssetFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssetFiltersRequestT = Model::ListAssetFiltersRequest>
        Model::ListAssetFiltersOutcomeCallable ListAssetFiltersCallable(const ListAssetFiltersRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListAssetFilters, request);
        }

        /**
         * An Async wrapper for ListAssetFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssetFiltersRequestT = Model::ListAssetFiltersRequest>
        void ListAssetFiltersAsync(const ListAssetFiltersRequestT& request, const ListAssetFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListAssetFilters, request, handler, context);
        }

        /**
         * <p>Lists the revisions for the asset.</p> <p>Prerequisites:</p> <ul> <li> <p>The
         * asset must exist in the domain. </p> </li> <li> <p>There must be at least one
         * revision of the asset (which happens automatically after creation).</p> </li>
         * <li> <p>The domain must be valid and active.</p> </li> <li> <p>User must have
         * permissions on the asset and domain.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Lists connections. In Amazon DataZone, a connection enables you to connect
         * your resources (domains, projects, and environments) to external resources and
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectionsRequestT = Model::ListConnectionsRequest>
        Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const ListConnectionsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListConnections, request);
        }

        /**
         * An Async wrapper for ListConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectionsRequestT = Model::ListConnectionsRequest>
        void ListConnectionsAsync(const ListConnectionsRequestT& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListConnections, request, handler, context);
        }

        /**
         * <p>Lists data product revisions.</p> <p>Prerequisites:</p> <ul> <li> <p>The data
         * product ID must exist within the domain. </p> </li> <li> <p>User must have view
         * permissions on the data product.</p> </li> <li> <p>The domain must be in a valid
         * and accessible state.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListDataProductRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataProductRevisionsOutcome ListDataProductRevisions(const Model::ListDataProductRevisionsRequest& request) const;

        /**
         * A Callable wrapper for ListDataProductRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataProductRevisionsRequestT = Model::ListDataProductRevisionsRequest>
        Model::ListDataProductRevisionsOutcomeCallable ListDataProductRevisionsCallable(const ListDataProductRevisionsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListDataProductRevisions, request);
        }

        /**
         * An Async wrapper for ListDataProductRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataProductRevisionsRequestT = Model::ListDataProductRevisionsRequest>
        void ListDataProductRevisionsAsync(const ListDataProductRevisionsRequestT& request, const ListDataProductRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListDataProductRevisions, request, handler, context);
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
         * <p>Lists child domain units for the specified parent domain unit.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListDomainUnitsForParent">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainUnitsForParentOutcome ListDomainUnitsForParent(const Model::ListDomainUnitsForParentRequest& request) const;

        /**
         * A Callable wrapper for ListDomainUnitsForParent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainUnitsForParentRequestT = Model::ListDomainUnitsForParentRequest>
        Model::ListDomainUnitsForParentOutcomeCallable ListDomainUnitsForParentCallable(const ListDomainUnitsForParentRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListDomainUnitsForParent, request);
        }

        /**
         * An Async wrapper for ListDomainUnitsForParent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainUnitsForParentRequestT = Model::ListDomainUnitsForParentRequest>
        void ListDomainUnitsForParentAsync(const ListDomainUnitsForParentRequestT& request, const ListDomainUnitsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListDomainUnitsForParent, request, handler, context);
        }

        /**
         * <p>Lists Amazon DataZone domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request = {}) const
        {
            return SubmitCallable(&DataZoneClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDomainsRequestT& request = {}) const
        {
            return SubmitAsync(&DataZoneClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Lists the entity (domain units) owners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListEntityOwners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntityOwnersOutcome ListEntityOwners(const Model::ListEntityOwnersRequest& request) const;

        /**
         * A Callable wrapper for ListEntityOwners that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEntityOwnersRequestT = Model::ListEntityOwnersRequest>
        Model::ListEntityOwnersOutcomeCallable ListEntityOwnersCallable(const ListEntityOwnersRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListEntityOwners, request);
        }

        /**
         * An Async wrapper for ListEntityOwners that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntityOwnersRequestT = Model::ListEntityOwnersRequest>
        void ListEntityOwnersAsync(const ListEntityOwnersRequestT& request, const ListEntityOwnersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListEntityOwners, request, handler, context);
        }

        /**
         * <p>Lists existing environment actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListEnvironmentActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentActionsOutcome ListEnvironmentActions(const Model::ListEnvironmentActionsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentActionsRequestT = Model::ListEnvironmentActionsRequest>
        Model::ListEnvironmentActionsOutcomeCallable ListEnvironmentActionsCallable(const ListEnvironmentActionsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListEnvironmentActions, request);
        }

        /**
         * An Async wrapper for ListEnvironmentActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentActionsRequestT = Model::ListEnvironmentActionsRequest>
        void ListEnvironmentActionsAsync(const ListEnvironmentActionsRequestT& request, const ListEnvironmentActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListEnvironmentActions, request, handler, context);
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
         * <p>Lists job runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListJobRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobRunsOutcome ListJobRuns(const Model::ListJobRunsRequest& request) const;

        /**
         * A Callable wrapper for ListJobRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobRunsRequestT = Model::ListJobRunsRequest>
        Model::ListJobRunsOutcomeCallable ListJobRunsCallable(const ListJobRunsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListJobRuns, request);
        }

        /**
         * An Async wrapper for ListJobRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobRunsRequestT = Model::ListJobRunsRequest>
        void ListJobRunsAsync(const ListJobRunsRequestT& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListJobRuns, request, handler, context);
        }

        /**
         * <p>Lists lineage events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListLineageEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLineageEventsOutcome ListLineageEvents(const Model::ListLineageEventsRequest& request) const;

        /**
         * A Callable wrapper for ListLineageEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLineageEventsRequestT = Model::ListLineageEventsRequest>
        Model::ListLineageEventsOutcomeCallable ListLineageEventsCallable(const ListLineageEventsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListLineageEvents, request);
        }

        /**
         * An Async wrapper for ListLineageEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLineageEventsRequestT = Model::ListLineageEventsRequest>
        void ListLineageEventsAsync(const ListLineageEventsRequestT& request, const ListLineageEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListLineageEvents, request, handler, context);
        }

        /**
         * <p>Lists the history of the specified data lineage node.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListLineageNodeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLineageNodeHistoryOutcome ListLineageNodeHistory(const Model::ListLineageNodeHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListLineageNodeHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLineageNodeHistoryRequestT = Model::ListLineageNodeHistoryRequest>
        Model::ListLineageNodeHistoryOutcomeCallable ListLineageNodeHistoryCallable(const ListLineageNodeHistoryRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListLineageNodeHistory, request);
        }

        /**
         * An Async wrapper for ListLineageNodeHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLineageNodeHistoryRequestT = Model::ListLineageNodeHistoryRequest>
        void ListLineageNodeHistoryAsync(const ListLineageNodeHistoryRequestT& request, const ListLineageNodeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListLineageNodeHistory, request, handler, context);
        }

        /**
         * <p>Lists all metadata generation runs.</p> <p>Metadata generation runs represent
         * automated processes that leverage AI/ML capabilities to create or enhance asset
         * metadata at scale. This feature helps organizations maintain comprehensive and
         * consistent metadata across large numbers of assets without manual intervention.
         * It can automatically generate business descriptions, tags, and other metadata
         * elements, significantly reducing the time and effort required for metadata
         * management while improving consistency and completeness.</p>
         * <p>Prerequisites:</p> <ul> <li> <p>Valid domain identifier. </p> </li> <li>
         * <p>User must have access to metadata generation runs in the domain.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListMetadataGenerationRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetadataGenerationRunsOutcome ListMetadataGenerationRuns(const Model::ListMetadataGenerationRunsRequest& request) const;

        /**
         * A Callable wrapper for ListMetadataGenerationRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMetadataGenerationRunsRequestT = Model::ListMetadataGenerationRunsRequest>
        Model::ListMetadataGenerationRunsOutcomeCallable ListMetadataGenerationRunsCallable(const ListMetadataGenerationRunsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListMetadataGenerationRuns, request);
        }

        /**
         * An Async wrapper for ListMetadataGenerationRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMetadataGenerationRunsRequestT = Model::ListMetadataGenerationRunsRequest>
        void ListMetadataGenerationRunsAsync(const ListMetadataGenerationRunsRequestT& request, const ListMetadataGenerationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListMetadataGenerationRuns, request, handler, context);
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
         * <p>Lists policy grants.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListPolicyGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyGrantsOutcome ListPolicyGrants(const Model::ListPolicyGrantsRequest& request) const;

        /**
         * A Callable wrapper for ListPolicyGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPolicyGrantsRequestT = Model::ListPolicyGrantsRequest>
        Model::ListPolicyGrantsOutcomeCallable ListPolicyGrantsCallable(const ListPolicyGrantsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListPolicyGrants, request);
        }

        /**
         * An Async wrapper for ListPolicyGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPolicyGrantsRequestT = Model::ListPolicyGrantsRequest>
        void ListPolicyGrantsAsync(const ListPolicyGrantsRequestT& request, const ListPolicyGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListPolicyGrants, request, handler, context);
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
         * <p>Lists project profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListProjectProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectProfilesOutcome ListProjectProfiles(const Model::ListProjectProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListProjectProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectProfilesRequestT = Model::ListProjectProfilesRequest>
        Model::ListProjectProfilesOutcomeCallable ListProjectProfilesCallable(const ListProjectProfilesRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListProjectProfiles, request);
        }

        /**
         * An Async wrapper for ListProjectProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectProfilesRequestT = Model::ListProjectProfilesRequest>
        void ListProjectProfilesAsync(const ListProjectProfilesRequestT& request, const ListProjectProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListProjectProfiles, request, handler, context);
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
         * <p>Lists existing rules. In Amazon DataZone, a rule is a formal agreement that
         * enforces specific requirements across user workflows (e.g., publishing assets to
         * the catalog, requesting subscriptions, creating projects) within the Amazon
         * DataZone data portal. These rules help maintain consistency, ensure compliance,
         * and uphold governance standards in data management processes. For instance, a
         * metadata enforcement rule can specify the required information for creating a
         * subscription request or publishing a data asset to the catalog, ensuring
         * alignment with organizational standards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        Model::ListRulesOutcomeCallable ListRulesCallable(const ListRulesRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListRules, request);
        }

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        void ListRulesAsync(const ListRulesRequestT& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListRules, request, handler, context);
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
         * <p>Lists time series data points.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListTimeSeriesDataPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTimeSeriesDataPointsOutcome ListTimeSeriesDataPoints(const Model::ListTimeSeriesDataPointsRequest& request) const;

        /**
         * A Callable wrapper for ListTimeSeriesDataPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTimeSeriesDataPointsRequestT = Model::ListTimeSeriesDataPointsRequest>
        Model::ListTimeSeriesDataPointsOutcomeCallable ListTimeSeriesDataPointsCallable(const ListTimeSeriesDataPointsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::ListTimeSeriesDataPoints, request);
        }

        /**
         * An Async wrapper for ListTimeSeriesDataPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTimeSeriesDataPointsRequestT = Model::ListTimeSeriesDataPointsRequest>
        void ListTimeSeriesDataPointsAsync(const ListTimeSeriesDataPointsRequestT& request, const ListTimeSeriesDataPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::ListTimeSeriesDataPoints, request, handler, context);
        }

        /**
         * <p>Posts a data lineage event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PostLineageEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::PostLineageEventOutcome PostLineageEvent(const Model::PostLineageEventRequest& request) const;

        /**
         * A Callable wrapper for PostLineageEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PostLineageEventRequestT = Model::PostLineageEventRequest>
        Model::PostLineageEventOutcomeCallable PostLineageEventCallable(const PostLineageEventRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::PostLineageEvent, request);
        }

        /**
         * An Async wrapper for PostLineageEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PostLineageEventRequestT = Model::PostLineageEventRequest>
        void PostLineageEventAsync(const PostLineageEventRequestT& request, const PostLineageEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::PostLineageEvent, request, handler, context);
        }

        /**
         * <p>Posts time series data points to Amazon DataZone for the specified
         * asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PostTimeSeriesDataPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::PostTimeSeriesDataPointsOutcome PostTimeSeriesDataPoints(const Model::PostTimeSeriesDataPointsRequest& request) const;

        /**
         * A Callable wrapper for PostTimeSeriesDataPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PostTimeSeriesDataPointsRequestT = Model::PostTimeSeriesDataPointsRequest>
        Model::PostTimeSeriesDataPointsOutcomeCallable PostTimeSeriesDataPointsCallable(const PostTimeSeriesDataPointsRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::PostTimeSeriesDataPoints, request);
        }

        /**
         * An Async wrapper for PostTimeSeriesDataPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PostTimeSeriesDataPointsRequestT = Model::PostTimeSeriesDataPointsRequest>
        void PostTimeSeriesDataPointsAsync(const PostTimeSeriesDataPointsRequestT& request, const PostTimeSeriesDataPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::PostTimeSeriesDataPoints, request, handler, context);
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
         * <p>Removes an owner from an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RemoveEntityOwner">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveEntityOwnerOutcome RemoveEntityOwner(const Model::RemoveEntityOwnerRequest& request) const;

        /**
         * A Callable wrapper for RemoveEntityOwner that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveEntityOwnerRequestT = Model::RemoveEntityOwnerRequest>
        Model::RemoveEntityOwnerOutcomeCallable RemoveEntityOwnerCallable(const RemoveEntityOwnerRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::RemoveEntityOwner, request);
        }

        /**
         * An Async wrapper for RemoveEntityOwner that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveEntityOwnerRequestT = Model::RemoveEntityOwnerRequest>
        void RemoveEntityOwnerAsync(const RemoveEntityOwnerRequestT& request, const RemoveEntityOwnerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::RemoveEntityOwner, request, handler, context);
        }

        /**
         * <p>Removes a policy grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RemovePolicyGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePolicyGrantOutcome RemovePolicyGrant(const Model::RemovePolicyGrantRequest& request) const;

        /**
         * A Callable wrapper for RemovePolicyGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemovePolicyGrantRequestT = Model::RemovePolicyGrantRequest>
        Model::RemovePolicyGrantOutcomeCallable RemovePolicyGrantCallable(const RemovePolicyGrantRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::RemovePolicyGrant, request);
        }

        /**
         * An Async wrapper for RemovePolicyGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemovePolicyGrantRequestT = Model::RemovePolicyGrantRequest>
        void RemovePolicyGrantAsync(const RemovePolicyGrantRequestT& request, const RemovePolicyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::RemovePolicyGrant, request, handler, context);
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
         * <p>Searches for assets in Amazon DataZone.</p> <p>Search in Amazon DataZone is a
         * powerful capability that enables users to discover and explore data assets,
         * glossary terms, and data products across their organization. It provides both
         * basic and advanced search functionality, allowing users to find resources based
         * on names, descriptions, metadata, and other attributes. Search can be scoped to
         * specific types of resources (like assets, glossary terms, or data products) and
         * can be filtered using various criteria such as creation date, owner, or status.
         * The search functionality is essential for making the wealth of data resources in
         * an organization discoverable and usable, helping users find the right data for
         * their needs quickly and efficiently.</p> <p>Many search commands in Amazon
         * DataZone are paginated, including <code>search</code> and
         * <code>search-types</code>. When the result set is large, Amazon DataZone returns
         * a <code>nextToken</code> in the response. This token can be used to retrieve the
         * next page of results. </p> <p>Prerequisites:</p> <ul> <li> <p>The
         * --domain-identifier must refer to an existing Amazon DataZone domain. </p> </li>
         * <li> <p>--search-scope must be one of: ASSET, GLOSSARY_TERM, DATA_PRODUCT, or
         * GLOSSARY.</p> </li> <li> <p>The user must have search permissions in the
         * specified domain.</p> </li> <li> <p>If using --filters, ensure that the JSON is
         * well-formed and that each filter includes valid attribute and value keys. </p>
         * </li> <li> <p>For paginated results, be prepared to use --next-token to fetch
         * additional pages.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Searches listings (records of an asset at a given time) in Amazon
         * DataZone.</p><p><h3>See Also:</h3>   <a
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
         * <p>Searches for types in Amazon DataZone.</p> <p>Prerequisites:</p> <ul> <li>
         * <p>The --domain-identifier must refer to an existing Amazon DataZone domain.
         * </p> </li> <li> <p>--search-scope must be one of the valid values including:
         * ASSET_TYPE, GLOSSARY_TERM_TYPE, DATA_PRODUCT_TYPE.</p> </li> <li> <p>The
         * --managed flag must be present without a value.</p> </li> <li> <p>The user must
         * have permissions for form or asset types in the domain.</p> </li> <li> <p>If
         * using --filters, ensure that the JSON is valid.</p> </li> <li> <p>Filters
         * contain correct structure (attribute, value, operator).</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
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
         * <p>Starts the metadata generation run.</p> <p>Prerequisites:</p> <ul> <li>
         * <p>Asset must be created and belong to the specified domain and project. </p>
         * </li> <li> <p>Asset type must be supported for metadata generation (e.g., Amazon
         * Web Services Glue table).</p> </li> <li> <p>Asset must have a structured schema
         * with valid rows and columns.</p> </li> <li> <p>Valid values for --type:
         * BUSINESS_DESCRIPTIONS, BUSINESS_NAMES.</p> </li> <li> <p>The user must have
         * permission to run metadata generation in the domain/project.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/StartMetadataGenerationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMetadataGenerationRunOutcome StartMetadataGenerationRun(const Model::StartMetadataGenerationRunRequest& request) const;

        /**
         * A Callable wrapper for StartMetadataGenerationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMetadataGenerationRunRequestT = Model::StartMetadataGenerationRunRequest>
        Model::StartMetadataGenerationRunOutcomeCallable StartMetadataGenerationRunCallable(const StartMetadataGenerationRunRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::StartMetadataGenerationRun, request);
        }

        /**
         * An Async wrapper for StartMetadataGenerationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMetadataGenerationRunRequestT = Model::StartMetadataGenerationRunRequest>
        void StartMetadataGenerationRunAsync(const StartMetadataGenerationRunRequestT& request, const StartMetadataGenerationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::StartMetadataGenerationRun, request, handler, context);
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
         * <p>Updates the account pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateAccountPool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountPoolOutcome UpdateAccountPool(const Model::UpdateAccountPoolRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountPoolRequestT = Model::UpdateAccountPoolRequest>
        Model::UpdateAccountPoolOutcomeCallable UpdateAccountPoolCallable(const UpdateAccountPoolRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateAccountPool, request);
        }

        /**
         * An Async wrapper for UpdateAccountPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountPoolRequestT = Model::UpdateAccountPoolRequest>
        void UpdateAccountPoolAsync(const UpdateAccountPoolRequestT& request, const UpdateAccountPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateAccountPool, request, handler, context);
        }

        /**
         * <p>Updates an asset filter.</p> <p>Prerequisites:</p> <ul> <li> <p>The domain,
         * asset, and asset filter identifier must all exist. </p> </li> <li> <p>The asset
         * must contain the columns being referenced in the update.</p> </li> <li> <p>If
         * applying a row filter, ensure the column referenced in the expression exists in
         * the asset schema.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateAssetFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetFilterOutcome UpdateAssetFilter(const Model::UpdateAssetFilterRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssetFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAssetFilterRequestT = Model::UpdateAssetFilterRequest>
        Model::UpdateAssetFilterOutcomeCallable UpdateAssetFilterCallable(const UpdateAssetFilterRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateAssetFilter, request);
        }

        /**
         * An Async wrapper for UpdateAssetFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssetFilterRequestT = Model::UpdateAssetFilterRequest>
        void UpdateAssetFilterAsync(const UpdateAssetFilterRequestT& request, const UpdateAssetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateAssetFilter, request, handler, context);
        }

        /**
         * <p>Updates a connection. In Amazon DataZone, a connection enables you to connect
         * your resources (domains, projects, and environments) to external resources and
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
        Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const UpdateConnectionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateConnection, request);
        }

        /**
         * An Async wrapper for UpdateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
        void UpdateConnectionAsync(const UpdateConnectionRequestT& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateConnection, request, handler, context);
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
         * <p>Updates the domain unit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateDomainUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainUnitOutcome UpdateDomainUnit(const Model::UpdateDomainUnitRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainUnitRequestT = Model::UpdateDomainUnitRequest>
        Model::UpdateDomainUnitOutcomeCallable UpdateDomainUnitCallable(const UpdateDomainUnitRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateDomainUnit, request);
        }

        /**
         * An Async wrapper for UpdateDomainUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainUnitRequestT = Model::UpdateDomainUnitRequest>
        void UpdateDomainUnitAsync(const UpdateDomainUnitRequestT& request, const UpdateDomainUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateDomainUnit, request, handler, context);
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
         * <p>Updates an environment action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateEnvironmentAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentActionOutcome UpdateEnvironmentAction(const Model::UpdateEnvironmentActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironmentAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentActionRequestT = Model::UpdateEnvironmentActionRequest>
        Model::UpdateEnvironmentActionOutcomeCallable UpdateEnvironmentActionCallable(const UpdateEnvironmentActionRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateEnvironmentAction, request);
        }

        /**
         * An Async wrapper for UpdateEnvironmentAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentActionRequestT = Model::UpdateEnvironmentActionRequest>
        void UpdateEnvironmentActionAsync(const UpdateEnvironmentActionRequestT& request, const UpdateEnvironmentActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateEnvironmentAction, request, handler, context);
        }

        /**
         * <p>Updates an environment blueprint in Amazon DataZone.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateEnvironmentBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentBlueprintOutcome UpdateEnvironmentBlueprint(const Model::UpdateEnvironmentBlueprintRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironmentBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentBlueprintRequestT = Model::UpdateEnvironmentBlueprintRequest>
        Model::UpdateEnvironmentBlueprintOutcomeCallable UpdateEnvironmentBlueprintCallable(const UpdateEnvironmentBlueprintRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateEnvironmentBlueprint, request);
        }

        /**
         * An Async wrapper for UpdateEnvironmentBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentBlueprintRequestT = Model::UpdateEnvironmentBlueprintRequest>
        void UpdateEnvironmentBlueprintAsync(const UpdateEnvironmentBlueprintRequestT& request, const UpdateEnvironmentBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateEnvironmentBlueprint, request, handler, context);
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
         * <p>Updates the business glossary in Amazon DataZone.</p> <p>Prerequisites:</p>
         * <ul> <li> <p>The glossary must exist in the given domain. </p> </li> <li> <p>The
         * caller must have the <code>datazone:UpdateGlossary</code> permission to update
         * it.</p> </li> <li> <p>When updating the name, the new name must be unique within
         * the domain.</p> </li> <li> <p>The glossary must not be deleted or in a terminal
         * state.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Updates a business glossary term in Amazon DataZone.</p>
         * <p>Prerequisites:</p> <ul> <li> <p>Glossary term must exist in the specified
         * domain. </p> </li> <li> <p>New name must not conflict with existing terms in the
         * same glossary.</p> </li> <li> <p>User must have permissions on the term.</p>
         * </li> <li> <p>The term must not be in DELETED status.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * <p>Updates a project profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateProjectProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectProfileOutcome UpdateProjectProfile(const Model::UpdateProjectProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateProjectProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectProfileRequestT = Model::UpdateProjectProfileRequest>
        Model::UpdateProjectProfileOutcomeCallable UpdateProjectProfileCallable(const UpdateProjectProfileRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateProjectProfile, request);
        }

        /**
         * An Async wrapper for UpdateProjectProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectProfileRequestT = Model::UpdateProjectProfileRequest>
        void UpdateProjectProfileAsync(const UpdateProjectProfileRequestT& request, const UpdateProjectProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateProjectProfile, request, handler, context);
        }

        /**
         * <p>Updates a rule. In Amazon DataZone, a rule is a formal agreement that
         * enforces specific requirements across user workflows (e.g., publishing assets to
         * the catalog, requesting subscriptions, creating projects) within the Amazon
         * DataZone data portal. These rules help maintain consistency, ensure compliance,
         * and uphold governance standards in data management processes. For instance, a
         * metadata enforcement rule can specify the required information for creating a
         * subscription request or publishing a data asset to the catalog, ensuring
         * alignment with organizational standards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UpdateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        Model::UpdateRuleOutcomeCallable UpdateRuleCallable(const UpdateRuleRequestT& request) const
        {
            return SubmitCallable(&DataZoneClient::UpdateRule, request);
        }

        /**
         * An Async wrapper for UpdateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        void UpdateRuleAsync(const UpdateRuleRequestT& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataZoneClient::UpdateRule, request, handler, context);
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
      std::shared_ptr<DataZoneEndpointProviderBase> m_endpointProvider;
  };

} // namespace DataZone
} // namespace Aws
