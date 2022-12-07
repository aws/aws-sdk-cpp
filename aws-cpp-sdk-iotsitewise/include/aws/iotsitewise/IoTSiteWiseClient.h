/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/IoTSiteWiseServiceClientModel.h>

namespace Aws
{
namespace IoTSiteWise
{
  /**
   * <p>Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web
   * Services service that connects <a
   * href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial
   * Internet of Things (IIoT)</a> devices to the power of the Amazon Web Services
   * Cloud. For more information, see the <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise
   * User Guide</a>. For information about IoT SiteWise quotas, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
   * in the <i>IoT SiteWise User Guide</i>.</p>
   */
  class AWS_IOTSITEWISE_API IoTSiteWiseClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTSiteWiseClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSiteWiseClient(const Aws::IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration = Aws::IoTSiteWise::IoTSiteWiseClientConfiguration(),
                          std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSiteWiseClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG),
                          const Aws::IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration = Aws::IoTSiteWise::IoTSiteWiseClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTSiteWiseClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG),
                          const Aws::IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration = Aws::IoTSiteWise::IoTSiteWiseClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSiteWiseClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSiteWiseClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTSiteWiseClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTSiteWiseClient();

        /**
         * <p>Associates a child asset with the given parent asset through a hierarchy
         * defined in the parent asset's model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/add-associated-assets.html">Associating
         * assets</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociateAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAssetsOutcome AssociateAssets(const Model::AssociateAssetsRequest& request) const;

        /**
         * A Callable wrapper for AssociateAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAssetsOutcomeCallable AssociateAssetsCallable(const Model::AssociateAssetsRequest& request) const;

        /**
         * An Async wrapper for AssociateAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAssetsAsync(const Model::AssociateAssetsRequest& request, const AssociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a time series (data stream) with an asset property.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociateTimeSeriesToAssetProperty">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTimeSeriesToAssetPropertyOutcome AssociateTimeSeriesToAssetProperty(const Model::AssociateTimeSeriesToAssetPropertyRequest& request) const;

        /**
         * A Callable wrapper for AssociateTimeSeriesToAssetProperty that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTimeSeriesToAssetPropertyOutcomeCallable AssociateTimeSeriesToAssetPropertyCallable(const Model::AssociateTimeSeriesToAssetPropertyRequest& request) const;

        /**
         * An Async wrapper for AssociateTimeSeriesToAssetProperty that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTimeSeriesToAssetPropertyAsync(const Model::AssociateTimeSeriesToAssetPropertyRequest& request, const AssociateTimeSeriesToAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a group (batch) of assets with an IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchAssociateProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateProjectAssetsOutcome BatchAssociateProjectAssets(const Model::BatchAssociateProjectAssetsRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateProjectAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateProjectAssetsOutcomeCallable BatchAssociateProjectAssetsCallable(const Model::BatchAssociateProjectAssetsRequest& request) const;

        /**
         * An Async wrapper for BatchAssociateProjectAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateProjectAssetsAsync(const Model::BatchAssociateProjectAssetsRequest& request, const BatchAssociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a group (batch) of assets from an IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchDisassociateProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateProjectAssetsOutcome BatchDisassociateProjectAssets(const Model::BatchDisassociateProjectAssetsRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateProjectAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateProjectAssetsOutcomeCallable BatchDisassociateProjectAssetsCallable(const Model::BatchDisassociateProjectAssetsRequest& request) const;

        /**
         * An Async wrapper for BatchDisassociateProjectAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateProjectAssetsAsync(const Model::BatchDisassociateProjectAssetsRequest& request, const BatchDisassociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets aggregated values (for example, average, minimum, and maximum) for one
         * or more asset properties. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
         * aggregates</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyAggregates">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAssetPropertyAggregatesOutcome BatchGetAssetPropertyAggregates(const Model::BatchGetAssetPropertyAggregatesRequest& request) const;

        /**
         * A Callable wrapper for BatchGetAssetPropertyAggregates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetAssetPropertyAggregatesOutcomeCallable BatchGetAssetPropertyAggregatesCallable(const Model::BatchGetAssetPropertyAggregatesRequest& request) const;

        /**
         * An Async wrapper for BatchGetAssetPropertyAggregates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetAssetPropertyAggregatesAsync(const Model::BatchGetAssetPropertyAggregatesRequest& request, const BatchGetAssetPropertyAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the current value for one or more asset properties. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#current-values">Querying
         * current values</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValue">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAssetPropertyValueOutcome BatchGetAssetPropertyValue(const Model::BatchGetAssetPropertyValueRequest& request) const;

        /**
         * A Callable wrapper for BatchGetAssetPropertyValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetAssetPropertyValueOutcomeCallable BatchGetAssetPropertyValueCallable(const Model::BatchGetAssetPropertyValueRequest& request) const;

        /**
         * An Async wrapper for BatchGetAssetPropertyValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetAssetPropertyValueAsync(const Model::BatchGetAssetPropertyValueRequest& request, const BatchGetAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the historical values for one or more asset properties. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#historical-values">Querying
         * historical values</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValueHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAssetPropertyValueHistoryOutcome BatchGetAssetPropertyValueHistory(const Model::BatchGetAssetPropertyValueHistoryRequest& request) const;

        /**
         * A Callable wrapper for BatchGetAssetPropertyValueHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetAssetPropertyValueHistoryOutcomeCallable BatchGetAssetPropertyValueHistoryCallable(const Model::BatchGetAssetPropertyValueHistoryRequest& request) const;

        /**
         * An Async wrapper for BatchGetAssetPropertyValueHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetAssetPropertyValueHistoryAsync(const Model::BatchGetAssetPropertyValueHistoryRequest& request, const BatchGetAssetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a list of asset property values to IoT SiteWise. Each value is a
         * timestamp-quality-value (TQV) data point. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ingest-api.html">Ingesting
         * data using the API</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>To identify
         * an asset property, you must specify one of the following:</p> <ul> <li> <p>The
         * <code>assetId</code> and <code>propertyId</code> of an asset property.</p> </li>
         * <li> <p>A <code>propertyAlias</code>, which is a data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul>  <p>With respect to Unix epoch time, IoT SiteWise accepts
         * only TQVs that have a timestamp of no more than 7 days in the past and no more
         * than 10 minutes in the future. IoT SiteWise rejects timestamps outside of the
         * inclusive range of [-7 days, +10 minutes] and returns a
         * <code>TimestampOutOfRangeException</code> error.</p> <p>For each asset property,
         * IoT SiteWise overwrites TQVs with duplicate timestamps unless the newer TQV has
         * a different quality. For example, if you store a TQV <code>{T1, GOOD,
         * V1}</code>, then storing <code>{T1, GOOD, V2}</code> replaces the existing
         * TQV.</p>  <p>IoT SiteWise authorizes access to each
         * <code>BatchPutAssetPropertyValue</code> entry individually. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-batchputassetpropertyvalue-action">BatchPutAssetPropertyValue
         * authorization</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchPutAssetPropertyValue">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutAssetPropertyValueOutcome BatchPutAssetPropertyValue(const Model::BatchPutAssetPropertyValueRequest& request) const;

        /**
         * A Callable wrapper for BatchPutAssetPropertyValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutAssetPropertyValueOutcomeCallable BatchPutAssetPropertyValueCallable(const Model::BatchPutAssetPropertyValueRequest& request) const;

        /**
         * An Async wrapper for BatchPutAssetPropertyValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutAssetPropertyValueAsync(const Model::BatchPutAssetPropertyValueRequest& request, const BatchPutAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an access policy that grants the specified identity (IAM Identity
         * Center user, IAM Identity Center group, or IAM user) access to the specified IoT
         * SiteWise Monitor portal or project resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPolicyOutcome CreateAccessPolicy(const Model::CreateAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPolicyOutcomeCallable CreateAccessPolicyCallable(const Model::CreateAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for CreateAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPolicyAsync(const Model::CreateAccessPolicyRequest& request, const CreateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an asset from an existing asset model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-assets.html">Creating
         * assets</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest& request) const;

        /**
         * A Callable wrapper for CreateAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssetOutcomeCallable CreateAssetCallable(const Model::CreateAssetRequest& request) const;

        /**
         * An Async wrapper for CreateAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssetAsync(const Model::CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an asset model from specified property and hierarchy definitions. You
         * create assets from asset models. With asset models, you can easily create assets
         * of the same type that have standardized definitions. Each asset created from a
         * model inherits the asset model's property and hierarchy definitions. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/define-models.html">Defining
         * asset models</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetModelOutcome CreateAssetModel(const Model::CreateAssetModelRequest& request) const;

        /**
         * A Callable wrapper for CreateAssetModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssetModelOutcomeCallable CreateAssetModelCallable(const Model::CreateAssetModelRequest& request) const;

        /**
         * An Async wrapper for CreateAssetModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssetModelAsync(const Model::CreateAssetModelRequest& request, const CreateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines a job to ingest data to IoT SiteWise from Amazon S3. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/CreateBulkImportJob.html">Create
         * a bulk import job (CLI)</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p>  <p>You must enable IoT SiteWise to export data to
         * Amazon S3 before you create a bulk import job. For more information about how to
         * configure storage settings, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_PutStorageConfiguration.html">PutStorageConfiguration</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateBulkImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBulkImportJobOutcome CreateBulkImportJob(const Model::CreateBulkImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBulkImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBulkImportJobOutcomeCallable CreateBulkImportJobCallable(const Model::CreateBulkImportJobRequest& request) const;

        /**
         * An Async wrapper for CreateBulkImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBulkImportJobAsync(const Model::CreateBulkImportJobRequest& request, const CreateBulkImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dashboard in an IoT SiteWise Monitor project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;

        /**
         * A Callable wrapper for CreateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDashboardOutcomeCallable CreateDashboardCallable(const Model::CreateDashboardRequest& request) const;

        /**
         * An Async wrapper for CreateDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDashboardAsync(const Model::CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a gateway, which is a virtual or edge device that delivers industrial
         * data streams from local servers to IoT SiteWise. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gateway-connector.html">Ingesting
         * data using a gateway</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayOutcome CreateGateway(const Model::CreateGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const Model::CreateGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGatewayAsync(const Model::CreateGatewayRequest& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a portal, which can contain projects and dashboards. IoT SiteWise
         * Monitor uses IAM Identity Center or IAM to authenticate portal users and manage
         * user permissions.</p>  <p>Before you can sign in to a new portal, you must
         * add at least one identity to that portal. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/administer-portals.html#portal-change-admins">Adding
         * or removing portal administrators</a> in the <i>IoT SiteWise User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortalOutcome CreatePortal(const Model::CreatePortalRequest& request) const;

        /**
         * A Callable wrapper for CreatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortalOutcomeCallable CreatePortalCallable(const Model::CreatePortalRequest& request) const;

        /**
         * An Async wrapper for CreatePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortalAsync(const Model::CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a project in the specified portal.</p>  <p>Make sure that the
         * project name and description don't contain confidential information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an access policy that grants the specified identity access to the
         * specified IoT SiteWise Monitor resource. You can use this operation to revoke
         * access to an IoT SiteWise Monitor resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPolicyOutcome DeleteAccessPolicy(const Model::DeleteAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPolicyOutcomeCallable DeleteAccessPolicyCallable(const Model::DeleteAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPolicyAsync(const Model::DeleteAccessPolicyRequest& request, const DeleteAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an asset. This action can't be undone. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
         * assets and models</a> in the <i>IoT SiteWise User Guide</i>. </p>  <p>You
         * can't delete an asset that's associated to another asset. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DisassociateAssets.html">DisassociateAssets</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;

        /**
         * A Callable wrapper for DeleteAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const Model::DeleteAssetRequest& request) const;

        /**
         * An Async wrapper for DeleteAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssetAsync(const Model::DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an asset model. This action can't be undone. You must delete all
         * assets created from an asset model before you can delete the model. Also, you
         * can't delete an asset model if a parent asset model exists that contains a
         * property formula expression that depends on the asset model that you want to
         * delete. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
         * assets and models</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetModelOutcome DeleteAssetModel(const Model::DeleteAssetModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssetModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssetModelOutcomeCallable DeleteAssetModelCallable(const Model::DeleteAssetModelRequest& request) const;

        /**
         * An Async wrapper for DeleteAssetModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssetModelAsync(const Model::DeleteAssetModelRequest& request, const DeleteAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dashboard from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;

        /**
         * A Callable wrapper for DeleteDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDashboardOutcomeCallable DeleteDashboardCallable(const Model::DeleteDashboardRequest& request) const;

        /**
         * An Async wrapper for DeleteDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDashboardAsync(const Model::DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a gateway from IoT SiteWise. When you delete a gateway, some of the
         * gateway's files remain in your gateway's file system.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a portal from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeletePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortalOutcome DeletePortal(const Model::DeletePortalRequest& request) const;

        /**
         * A Callable wrapper for DeletePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortalOutcomeCallable DeletePortalCallable(const Model::DeletePortalRequest& request) const;

        /**
         * An Async wrapper for DeletePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortalAsync(const Model::DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a project from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a time series (data stream). If you delete a time series that's
         * associated with an asset property, the asset property still exists, but the time
         * series will no longer be associated with this asset property.</p> <p>To identify
         * a time series, do one of the following:</p> <ul> <li> <p>If the time series
         * isn't associated with an asset property, specify the <code>alias</code> of the
         * time series.</p> </li> <li> <p>If the time series is associated with an asset
         * property, specify one of the following: </p> <ul> <li> <p>The <code>alias</code>
         * of the time series.</p> </li> <li> <p>The <code>assetId</code> and
         * <code>propertyId</code> that identifies the asset property.</p> </li> </ul>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteTimeSeries">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTimeSeriesOutcome DeleteTimeSeries(const Model::DeleteTimeSeriesRequest& request) const;

        /**
         * A Callable wrapper for DeleteTimeSeries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTimeSeriesOutcomeCallable DeleteTimeSeriesCallable(const Model::DeleteTimeSeriesRequest& request) const;

        /**
         * An Async wrapper for DeleteTimeSeries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTimeSeriesAsync(const Model::DeleteTimeSeriesRequest& request, const DeleteTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an access policy, which specifies an identity's access to an IoT
         * SiteWise Monitor portal or project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccessPolicyOutcome DescribeAccessPolicy(const Model::DescribeAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccessPolicyOutcomeCallable DescribeAccessPolicyCallable(const Model::DescribeAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccessPolicyAsync(const Model::DescribeAccessPolicyRequest& request, const DescribeAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest& request) const;

        /**
         * A Callable wrapper for DescribeAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssetOutcomeCallable DescribeAssetCallable(const Model::DescribeAssetRequest& request) const;

        /**
         * An Async wrapper for DescribeAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssetAsync(const Model::DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an asset model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetModelOutcome DescribeAssetModel(const Model::DescribeAssetModelRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssetModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssetModelOutcomeCallable DescribeAssetModelCallable(const Model::DescribeAssetModelRequest& request) const;

        /**
         * An Async wrapper for DescribeAssetModel that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeAssetProperty that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssetPropertyOutcomeCallable DescribeAssetPropertyCallable(const Model::DescribeAssetPropertyRequest& request) const;

        /**
         * An Async wrapper for DescribeAssetProperty that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssetPropertyAsync(const Model::DescribeAssetPropertyRequest& request, const DescribeAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a bulk import job request. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/DescribeBulkImportJob.html">Describe
         * a bulk import job (CLI)</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeBulkImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBulkImportJobOutcome DescribeBulkImportJob(const Model::DescribeBulkImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeBulkImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBulkImportJobOutcomeCallable DescribeBulkImportJobCallable(const Model::DescribeBulkImportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeBulkImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBulkImportJobAsync(const Model::DescribeBulkImportJobRequest& request, const DescribeBulkImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest& request) const;

        /**
         * A Callable wrapper for DescribeDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDashboardOutcomeCallable DescribeDashboardCallable(const Model::DescribeDashboardRequest& request) const;

        /**
         * An Async wrapper for DescribeDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDashboardAsync(const Model::DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the default encryption configuration for the
         * Amazon Web Services account in the default or specified Region. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDefaultEncryptionConfigurationOutcome DescribeDefaultEncryptionConfiguration(const Model::DescribeDefaultEncryptionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeDefaultEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDefaultEncryptionConfigurationOutcomeCallable DescribeDefaultEncryptionConfigurationCallable(const Model::DescribeDefaultEncryptionConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeDefaultEncryptionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDefaultEncryptionConfigurationAsync(const Model::DescribeDefaultEncryptionConfigurationRequest& request, const DescribeDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayOutcome DescribeGateway(const Model::DescribeGatewayRequest& request) const;

        /**
         * A Callable wrapper for DescribeGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGatewayOutcomeCallable DescribeGatewayCallable(const Model::DescribeGatewayRequest& request) const;

        /**
         * An Async wrapper for DescribeGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGatewayAsync(const Model::DescribeGatewayRequest& request, const DescribeGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a gateway capability configuration. Each gateway
         * capability defines data sources for a gateway. A capability configuration can
         * contain multiple data source configurations. If you define OPC-UA sources for a
         * gateway in the IoT SiteWise console, all of your OPC-UA sources are stored in
         * one capability configuration. To list all capability configurations for a
         * gateway, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGateway.html">DescribeGateway</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGatewayCapabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayCapabilityConfigurationOutcome DescribeGatewayCapabilityConfiguration(const Model::DescribeGatewayCapabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeGatewayCapabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGatewayCapabilityConfigurationOutcomeCallable DescribeGatewayCapabilityConfigurationCallable(const Model::DescribeGatewayCapabilityConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeGatewayCapabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGatewayCapabilityConfigurationAsync(const Model::DescribeGatewayCapabilityConfigurationRequest& request, const DescribeGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current IoT SiteWise logging options.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoggingOptionsOutcomeCallable DescribeLoggingOptionsCallable(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingOptionsAsync(const Model::DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortalOutcome DescribePortal(const Model::DescribePortalRequest& request) const;

        /**
         * A Callable wrapper for DescribePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePortalOutcomeCallable DescribePortalCallable(const Model::DescribePortalRequest& request) const;

        /**
         * An Async wrapper for DescribePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePortalAsync(const Model::DescribePortalRequest& request, const DescribePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the storage configuration for IoT
         * SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStorageConfigurationOutcome DescribeStorageConfiguration(const Model::DescribeStorageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStorageConfigurationOutcomeCallable DescribeStorageConfigurationCallable(const Model::DescribeStorageConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStorageConfigurationAsync(const Model::DescribeStorageConfigurationRequest& request, const DescribeStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a time series (data stream).</p> <p>To identify a
         * time series, do one of the following:</p> <ul> <li> <p>If the time series isn't
         * associated with an asset property, specify the <code>alias</code> of the time
         * series.</p> </li> <li> <p>If the time series is associated with an asset
         * property, specify one of the following: </p> <ul> <li> <p>The <code>alias</code>
         * of the time series.</p> </li> <li> <p>The <code>assetId</code> and
         * <code>propertyId</code> that identifies the asset property.</p> </li> </ul>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeTimeSeries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTimeSeriesOutcome DescribeTimeSeries(const Model::DescribeTimeSeriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTimeSeries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTimeSeriesOutcomeCallable DescribeTimeSeriesCallable(const Model::DescribeTimeSeriesRequest& request) const;

        /**
         * An Async wrapper for DescribeTimeSeries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTimeSeriesAsync(const Model::DescribeTimeSeriesRequest& request, const DescribeTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a child asset from the given parent asset through a hierarchy
         * defined in the parent asset's model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAssetsOutcome DisassociateAssets(const Model::DisassociateAssetsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAssetsOutcomeCallable DisassociateAssetsCallable(const Model::DisassociateAssetsRequest& request) const;

        /**
         * An Async wrapper for DisassociateAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAssetsAsync(const Model::DisassociateAssetsRequest& request, const DisassociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a time series (data stream) from an asset
         * property.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateTimeSeriesFromAssetProperty">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTimeSeriesFromAssetPropertyOutcome DisassociateTimeSeriesFromAssetProperty(const Model::DisassociateTimeSeriesFromAssetPropertyRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTimeSeriesFromAssetProperty that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTimeSeriesFromAssetPropertyOutcomeCallable DisassociateTimeSeriesFromAssetPropertyCallable(const Model::DisassociateTimeSeriesFromAssetPropertyRequest& request) const;

        /**
         * An Async wrapper for DisassociateTimeSeriesFromAssetProperty that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTimeSeriesFromAssetPropertyAsync(const Model::DisassociateTimeSeriesFromAssetPropertyRequest& request, const DisassociateTimeSeriesFromAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets aggregated values for an asset property. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
         * aggregates</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>To identify an
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
         * A Callable wrapper for GetAssetPropertyAggregates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssetPropertyAggregatesOutcomeCallable GetAssetPropertyAggregatesCallable(const Model::GetAssetPropertyAggregatesRequest& request) const;

        /**
         * An Async wrapper for GetAssetPropertyAggregates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssetPropertyAggregatesAsync(const Model::GetAssetPropertyAggregatesRequest& request, const GetAssetPropertyAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an asset property's current value. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#current-values">Querying
         * current values</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>To identify an
         * asset property, you must specify one of the following:</p> <ul> <li> <p>The
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
         * A Callable wrapper for GetAssetPropertyValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssetPropertyValueOutcomeCallable GetAssetPropertyValueCallable(const Model::GetAssetPropertyValueRequest& request) const;

        /**
         * An Async wrapper for GetAssetPropertyValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssetPropertyValueAsync(const Model::GetAssetPropertyValueRequest& request, const GetAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the history of an asset property's values. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#historical-values">Querying
         * historical values</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>To identify
         * an asset property, you must specify one of the following:</p> <ul> <li> <p>The
         * <code>assetId</code> and <code>propertyId</code> of an asset property.</p> </li>
         * <li> <p>A <code>propertyAlias</code>, which is a data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetAssetPropertyValueHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetPropertyValueHistoryOutcome GetAssetPropertyValueHistory(const Model::GetAssetPropertyValueHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetAssetPropertyValueHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssetPropertyValueHistoryOutcomeCallable GetAssetPropertyValueHistoryCallable(const Model::GetAssetPropertyValueHistoryRequest& request) const;

        /**
         * An Async wrapper for GetAssetPropertyValueHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssetPropertyValueHistoryAsync(const Model::GetAssetPropertyValueHistoryRequest& request, const GetAssetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get interpolated values for an asset property for a specified time interval,
         * during a period of time. If your time series is missing data points during the
         * specified time interval, you can use interpolation to estimate the missing
         * data.</p> <p>For example, you can use this operation to return the interpolated
         * temperature values for a wind turbine every 24 hours over a duration of 7
         * days.</p> <p>To identify an asset property, you must specify one of the
         * following:</p> <ul> <li> <p>The <code>assetId</code> and <code>propertyId</code>
         * of an asset property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a
         * data stream alias (for example,
         * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
         * property's alias, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetInterpolatedAssetPropertyValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInterpolatedAssetPropertyValuesOutcome GetInterpolatedAssetPropertyValues(const Model::GetInterpolatedAssetPropertyValuesRequest& request) const;

        /**
         * A Callable wrapper for GetInterpolatedAssetPropertyValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInterpolatedAssetPropertyValuesOutcomeCallable GetInterpolatedAssetPropertyValuesCallable(const Model::GetInterpolatedAssetPropertyValuesRequest& request) const;

        /**
         * An Async wrapper for GetInterpolatedAssetPropertyValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInterpolatedAssetPropertyValuesAsync(const Model::GetInterpolatedAssetPropertyValuesRequest& request, const GetInterpolatedAssetPropertyValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of access policies for an identity (an IAM
         * Identity Center user, an IAM Identity Center group, or an IAM user) or an IoT
         * SiteWise Monitor resource (a portal or project).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAccessPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPoliciesOutcome ListAccessPolicies(const Model::ListAccessPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPoliciesOutcomeCallable ListAccessPoliciesCallable(const Model::ListAccessPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListAccessPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPoliciesAsync(const Model::ListAccessPoliciesRequest& request, const ListAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of properties associated with an asset model. If
         * you update properties associated with the model before you finish listing all
         * the properties, you need to start all over again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModelProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetModelPropertiesOutcome ListAssetModelProperties(const Model::ListAssetModelPropertiesRequest& request) const;

        /**
         * A Callable wrapper for ListAssetModelProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetModelPropertiesOutcomeCallable ListAssetModelPropertiesCallable(const Model::ListAssetModelPropertiesRequest& request) const;

        /**
         * An Async wrapper for ListAssetModelProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssetModelPropertiesAsync(const Model::ListAssetModelPropertiesRequest& request, const ListAssetModelPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of summaries of all asset models.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetModelsOutcome ListAssetModels(const Model::ListAssetModelsRequest& request) const;

        /**
         * A Callable wrapper for ListAssetModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetModelsOutcomeCallable ListAssetModelsCallable(const Model::ListAssetModelsRequest& request) const;

        /**
         * An Async wrapper for ListAssetModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssetModelsAsync(const Model::ListAssetModelsRequest& request, const ListAssetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of properties associated with an asset. If you
         * update properties associated with the model before you finish listing all the
         * properties, you need to start all over again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetPropertiesOutcome ListAssetProperties(const Model::ListAssetPropertiesRequest& request) const;

        /**
         * A Callable wrapper for ListAssetProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetPropertiesOutcomeCallable ListAssetPropertiesCallable(const Model::ListAssetPropertiesRequest& request) const;

        /**
         * An Async wrapper for ListAssetProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssetPropertiesAsync(const Model::ListAssetPropertiesRequest& request, const ListAssetPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of asset relationships for an asset. You can use
         * this operation to identify an asset's root asset and all associated assets
         * between that asset and its root.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetRelationships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetRelationshipsOutcome ListAssetRelationships(const Model::ListAssetRelationshipsRequest& request) const;

        /**
         * A Callable wrapper for ListAssetRelationships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetRelationshipsOutcomeCallable ListAssetRelationshipsCallable(const Model::ListAssetRelationshipsRequest& request) const;

        /**
         * An Async wrapper for ListAssetRelationships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssetRelationshipsAsync(const Model::ListAssetRelationshipsRequest& request, const ListAssetRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetsOutcomeCallable ListAssetsCallable(const Model::ListAssetsRequest& request) const;

        /**
         * An Async wrapper for ListAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListAssociatedAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedAssetsOutcomeCallable ListAssociatedAssetsCallable(const Model::ListAssociatedAssetsRequest& request) const;

        /**
         * An Async wrapper for ListAssociatedAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedAssetsAsync(const Model::ListAssociatedAssetsRequest& request, const ListAssociatedAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of bulk import job requests. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ListBulkImportJobs.html">List
         * bulk import jobs (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListBulkImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBulkImportJobsOutcome ListBulkImportJobs(const Model::ListBulkImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListBulkImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBulkImportJobsOutcomeCallable ListBulkImportJobsCallable(const Model::ListBulkImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListBulkImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBulkImportJobsAsync(const Model::ListBulkImportJobsRequest& request, const ListBulkImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of dashboards for an IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;

        /**
         * A Callable wrapper for ListDashboards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const Model::ListDashboardsRequest& request) const;

        /**
         * An Async wrapper for ListDashboards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDashboardsAsync(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;

        /**
         * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const Model::ListGatewaysRequest& request) const;

        /**
         * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of IoT SiteWise Monitor portals.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPortals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortalsOutcome ListPortals(const Model::ListPortalsRequest& request) const;

        /**
         * A Callable wrapper for ListPortals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortalsOutcomeCallable ListPortalsCallable(const Model::ListPortalsRequest& request) const;

        /**
         * An Async wrapper for ListPortals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortalsAsync(const Model::ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of assets associated with an IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectAssetsOutcome ListProjectAssets(const Model::ListProjectAssetsRequest& request) const;

        /**
         * A Callable wrapper for ListProjectAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectAssetsOutcomeCallable ListProjectAssetsCallable(const Model::ListProjectAssetsRequest& request) const;

        /**
         * An Async wrapper for ListProjectAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectAssetsAsync(const Model::ListProjectAssetsRequest& request, const ListProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of projects for an IoT SiteWise Monitor
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of tags for an IoT SiteWise resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTagsForResource">AWS
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
         * <p>Retrieves a paginated list of time series (data streams).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTimeSeries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTimeSeriesOutcome ListTimeSeries(const Model::ListTimeSeriesRequest& request) const;

        /**
         * A Callable wrapper for ListTimeSeries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTimeSeriesOutcomeCallable ListTimeSeriesCallable(const Model::ListTimeSeriesRequest& request) const;

        /**
         * An Async wrapper for ListTimeSeries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTimeSeriesAsync(const Model::ListTimeSeriesRequest& request, const ListTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the default encryption configuration for the Amazon Web Services
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDefaultEncryptionConfigurationOutcome PutDefaultEncryptionConfiguration(const Model::PutDefaultEncryptionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutDefaultEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDefaultEncryptionConfigurationOutcomeCallable PutDefaultEncryptionConfigurationCallable(const Model::PutDefaultEncryptionConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutDefaultEncryptionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDefaultEncryptionConfigurationAsync(const Model::PutDefaultEncryptionConfigurationRequest& request, const PutDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets logging options for IoT SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for PutLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLoggingOptionsAsync(const Model::PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures storage settings for IoT SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStorageConfigurationOutcome PutStorageConfiguration(const Model::PutStorageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutStorageConfigurationOutcomeCallable PutStorageConfigurationCallable(const Model::PutStorageConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutStorageConfigurationAsync(const Model::PutStorageConfigurationRequest& request, const PutStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to an IoT SiteWise resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TagResource">AWS
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
         * <p>Removes a tag from an IoT SiteWise resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UntagResource">AWS
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
         * <p>Updates an existing access policy that specifies an identity's access to an
         * IoT SiteWise Monitor portal or project resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessPolicyOutcome UpdateAccessPolicy(const Model::UpdateAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccessPolicyOutcomeCallable UpdateAccessPolicyCallable(const Model::UpdateAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccessPolicyAsync(const Model::UpdateAccessPolicyRequest& request, const UpdateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an asset's name. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
         * assets and models</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetOutcome UpdateAsset(const Model::UpdateAssetRequest& request) const;

        /**
         * A Callable wrapper for UpdateAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssetOutcomeCallable UpdateAssetCallable(const Model::UpdateAssetRequest& request) const;

        /**
         * An Async wrapper for UpdateAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssetAsync(const Model::UpdateAssetRequest& request, const UpdateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an asset model and all of the assets that were created from the
         * model. Each asset created from the model inherits the updated asset model's
         * property and hierarchy definitions. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
         * assets and models</a> in the <i>IoT SiteWise User Guide</i>.</p> 
         * <p>This operation overwrites the existing model with the provided model. To
         * avoid deleting your asset model's properties or hierarchies, you must include
         * their IDs and definitions in the updated asset model payload. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>.</p>
         * <p>If you remove a property from an asset model, IoT SiteWise deletes all
         * previous data for that property. If you remove a hierarchy definition from an
         * asset model, IoT SiteWise disassociates every asset associated with that
         * hierarchy. You can't change the type or data type of an existing property.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetModelOutcome UpdateAssetModel(const Model::UpdateAssetModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssetModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssetModelOutcomeCallable UpdateAssetModelCallable(const Model::UpdateAssetModelRequest& request) const;

        /**
         * An Async wrapper for UpdateAssetModel that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateAssetProperty that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssetPropertyOutcomeCallable UpdateAssetPropertyCallable(const Model::UpdateAssetPropertyRequest& request) const;

        /**
         * An Async wrapper for UpdateAssetProperty that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssetPropertyAsync(const Model::UpdateAssetPropertyRequest& request, const UpdateAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an IoT SiteWise Monitor dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;

        /**
         * A Callable wrapper for UpdateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDashboardOutcomeCallable UpdateDashboardCallable(const Model::UpdateDashboardRequest& request) const;

        /**
         * An Async wrapper for UpdateDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDashboardAsync(const Model::UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a gateway's name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;

        /**
         * A Callable wrapper for UpdateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayOutcomeCallable UpdateGatewayCallable(const Model::UpdateGatewayRequest& request) const;

        /**
         * An Async wrapper for UpdateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayAsync(const Model::UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a gateway capability configuration or defines a new capability
         * configuration. Each gateway capability defines data sources for a gateway. A
         * capability configuration can contain multiple data source configurations. If you
         * define OPC-UA sources for a gateway in the IoT SiteWise console, all of your
         * OPC-UA sources are stored in one capability configuration. To list all
         * capability configurations for a gateway, use <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGateway.html">DescribeGateway</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGatewayCapabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayCapabilityConfigurationOutcome UpdateGatewayCapabilityConfiguration(const Model::UpdateGatewayCapabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewayCapabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayCapabilityConfigurationOutcomeCallable UpdateGatewayCapabilityConfigurationCallable(const Model::UpdateGatewayCapabilityConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateGatewayCapabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayCapabilityConfigurationAsync(const Model::UpdateGatewayCapabilityConfigurationRequest& request, const UpdateGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an IoT SiteWise Monitor portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortalOutcome UpdatePortal(const Model::UpdatePortalRequest& request) const;

        /**
         * A Callable wrapper for UpdatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePortalOutcomeCallable UpdatePortalCallable(const Model::UpdatePortalRequest& request) const;

        /**
         * An Async wrapper for UpdatePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePortalAsync(const Model::UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an IoT SiteWise Monitor project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTSiteWiseEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTSiteWiseClient>;
      void init(const IoTSiteWiseClientConfiguration& clientConfiguration);

      IoTSiteWiseClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTSiteWiseEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTSiteWise
} // namespace Aws
