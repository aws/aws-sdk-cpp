/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/IoTSiteWiseServiceClientModel.h>
#include <aws/iotsitewise/IoTSiteWiseLegacyAsyncMacros.h>

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
  class AWS_IOTSITEWISE_API IoTSiteWiseClient : public Aws::Client::AWSJsonClient
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
         * <p>Associates a child asset with the given parent asset through a hierarchy
         * defined in the parent asset's model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/add-associated-assets.html">Associating
         * assets</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociateAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAssetsOutcome AssociateAssets(const Model::AssociateAssetsRequest& request) const;


        /**
         * <p>Associates a time series (data stream) with an asset property.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociateTimeSeriesToAssetProperty">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTimeSeriesToAssetPropertyOutcome AssociateTimeSeriesToAssetProperty(const Model::AssociateTimeSeriesToAssetPropertyRequest& request) const;


        /**
         * <p>Associates a group (batch) of assets with an IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchAssociateProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateProjectAssetsOutcome BatchAssociateProjectAssets(const Model::BatchAssociateProjectAssetsRequest& request) const;


        /**
         * <p>Disassociates a group (batch) of assets from an IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchDisassociateProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateProjectAssetsOutcome BatchDisassociateProjectAssets(const Model::BatchDisassociateProjectAssetsRequest& request) const;


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
         * <p>Creates an access policy that grants the specified identity (IAM Identity
         * Center user, IAM Identity Center group, or IAM user) access to the specified IoT
         * SiteWise Monitor portal or project resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPolicyOutcome CreateAccessPolicy(const Model::CreateAccessPolicyRequest& request) const;


        /**
         * <p>Creates an asset from an existing asset model. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-assets.html">Creating
         * assets</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest& request) const;


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
         * <p>Creates a dashboard in an IoT SiteWise Monitor project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;


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
         * <p>Creates a project in the specified portal.</p>  <p>Make sure that the
         * project name and description don't contain confidential information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;


        /**
         * <p>Deletes an access policy that grants the specified identity access to the
         * specified IoT SiteWise Monitor resource. You can use this operation to revoke
         * access to an IoT SiteWise Monitor resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPolicyOutcome DeleteAccessPolicy(const Model::DeleteAccessPolicyRequest& request) const;


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
         * <p>Deletes a dashboard from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;


        /**
         * <p>Deletes a gateway from IoT SiteWise. When you delete a gateway, some of the
         * gateway's files remain in your gateway's file system.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;


        /**
         * <p>Deletes a portal from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeletePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortalOutcome DeletePortal(const Model::DeletePortalRequest& request) const;


        /**
         * <p>Deletes a project from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;


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
         * <p>Describes an access policy, which specifies an identity's access to an IoT
         * SiteWise Monitor portal or project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccessPolicyOutcome DescribeAccessPolicy(const Model::DescribeAccessPolicyRequest& request) const;


        /**
         * <p>Retrieves information about an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest& request) const;


        /**
         * <p>Retrieves information about an asset model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetModelOutcome DescribeAssetModel(const Model::DescribeAssetModelRequest& request) const;


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
         * <p>Retrieves information about a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest& request) const;


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
         * <p>Retrieves information about a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayOutcome DescribeGateway(const Model::DescribeGatewayRequest& request) const;


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
         * <p>Retrieves the current IoT SiteWise logging options.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request) const;


        /**
         * <p>Retrieves information about a portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortalOutcome DescribePortal(const Model::DescribePortalRequest& request) const;


        /**
         * <p>Retrieves information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;


        /**
         * <p>Retrieves information about the storage configuration for IoT
         * SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStorageConfigurationOutcome DescribeStorageConfiguration(const Model::DescribeStorageConfigurationRequest& request) const;


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
         * <p>Disassociates a child asset from the given parent asset through a hierarchy
         * defined in the parent asset's model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAssetsOutcome DisassociateAssets(const Model::DisassociateAssetsRequest& request) const;


        /**
         * <p>Disassociates a time series (data stream) from an asset
         * property.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateTimeSeriesFromAssetProperty">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTimeSeriesFromAssetPropertyOutcome DisassociateTimeSeriesFromAssetProperty(const Model::DisassociateTimeSeriesFromAssetPropertyRequest& request) const;


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
         * <p>Retrieves a paginated list of access policies for an identity (an IAM
         * Identity Center user, an IAM Identity Center group, or an IAM user) or an IoT
         * SiteWise Monitor resource (a portal or project).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAccessPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPoliciesOutcome ListAccessPolicies(const Model::ListAccessPoliciesRequest& request) const;


        /**
         * <p>Retrieves a paginated list of properties associated with an asset model. If
         * you update properties associated with the model before you finish listing all
         * the properties, you need to start all over again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModelProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetModelPropertiesOutcome ListAssetModelProperties(const Model::ListAssetModelPropertiesRequest& request) const;


        /**
         * <p>Retrieves a paginated list of summaries of all asset models.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetModelsOutcome ListAssetModels(const Model::ListAssetModelsRequest& request) const;


        /**
         * <p>Retrieves a paginated list of properties associated with an asset. If you
         * update properties associated with the model before you finish listing all the
         * properties, you need to start all over again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetPropertiesOutcome ListAssetProperties(const Model::ListAssetPropertiesRequest& request) const;


        /**
         * <p>Retrieves a paginated list of asset relationships for an asset. You can use
         * this operation to identify an asset's root asset and all associated assets
         * between that asset and its root.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetRelationships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetRelationshipsOutcome ListAssetRelationships(const Model::ListAssetRelationshipsRequest& request) const;


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
         * <p>Retrieves a paginated list of associated assets.</p> <p>You can use this
         * operation to do the following:</p> <ul> <li> <p>List child assets associated to
         * a parent asset by a hierarchy that you specify.</p> </li> <li> <p>List an
         * asset's parent asset.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssociatedAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedAssetsOutcome ListAssociatedAssets(const Model::ListAssociatedAssetsRequest& request) const;


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
         * <p>Retrieves a paginated list of dashboards for an IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;


        /**
         * <p>Retrieves a paginated list of gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;


        /**
         * <p>Retrieves a paginated list of IoT SiteWise Monitor portals.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPortals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortalsOutcome ListPortals(const Model::ListPortalsRequest& request) const;


        /**
         * <p>Retrieves a paginated list of assets associated with an IoT SiteWise Monitor
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjectAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectAssetsOutcome ListProjectAssets(const Model::ListProjectAssetsRequest& request) const;


        /**
         * <p>Retrieves a paginated list of projects for an IoT SiteWise Monitor
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;


        /**
         * <p>Retrieves the list of tags for an IoT SiteWise resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Retrieves a paginated list of time series (data streams).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTimeSeries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTimeSeriesOutcome ListTimeSeries(const Model::ListTimeSeriesRequest& request) const;


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
         * <p>Sets logging options for IoT SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;


        /**
         * <p>Configures storage settings for IoT SiteWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStorageConfigurationOutcome PutStorageConfiguration(const Model::PutStorageConfigurationRequest& request) const;


        /**
         * <p>Adds tags to an IoT SiteWise resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a tag from an IoT SiteWise resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an existing access policy that specifies an identity's access to an
         * IoT SiteWise Monitor portal or project resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessPolicyOutcome UpdateAccessPolicy(const Model::UpdateAccessPolicyRequest& request) const;


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
         * <p>Updates an IoT SiteWise Monitor dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;


        /**
         * <p>Updates a gateway's name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;


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
         * <p>Updates an IoT SiteWise Monitor portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortalOutcome UpdatePortal(const Model::UpdatePortalRequest& request) const;


        /**
         * <p>Updates an IoT SiteWise Monitor project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTSiteWiseEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoTSiteWiseClientConfiguration& clientConfiguration);

      IoTSiteWiseClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTSiteWiseEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTSiteWise
} // namespace Aws
