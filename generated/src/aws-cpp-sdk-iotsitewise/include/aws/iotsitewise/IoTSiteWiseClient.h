/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/IoTSiteWisePaginationBase.h>
#include <aws/iotsitewise/IoTSiteWiseServiceClientModel.h>
#include <aws/iotsitewise/IoTSiteWiseWaiter.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
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
class AWS_IOTSITEWISE_API IoTSiteWiseClient : public Aws::Client::AWSJsonClient,
                                              public Aws::Client::ClientWithAsyncTemplateMethods<IoTSiteWiseClient>,
                                              public IoTSiteWisePaginationBase<IoTSiteWiseClient>,
                                              public IoTSiteWiseWaiter<IoTSiteWiseClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef IoTSiteWiseClientConfiguration ClientConfigurationType;
  typedef IoTSiteWiseEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  IoTSiteWiseClient(
      const Aws::IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration = Aws::IoTSiteWise::IoTSiteWiseClientConfiguration(),
      std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  IoTSiteWiseClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider = nullptr,
      const Aws::IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration = Aws::IoTSiteWise::IoTSiteWiseClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  IoTSiteWiseClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider = nullptr,
      const Aws::IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration = Aws::IoTSiteWise::IoTSiteWiseClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  IoTSiteWiseClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  IoTSiteWiseClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

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
  template <typename AssociateAssetsRequestT = Model::AssociateAssetsRequest>
  Model::AssociateAssetsOutcomeCallable AssociateAssetsCallable(const AssociateAssetsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::AssociateAssets, request);
  }

  /**
   * An Async wrapper for AssociateAssets that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename AssociateAssetsRequestT = Model::AssociateAssetsRequest>
  void AssociateAssetsAsync(const AssociateAssetsRequestT& request, const AssociateAssetsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::AssociateAssets, request, handler, context);
  }

  /**
   * <p>Associates a time series (data stream) with an asset property.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociateTimeSeriesToAssetProperty">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateTimeSeriesToAssetPropertyOutcome AssociateTimeSeriesToAssetProperty(
      const Model::AssociateTimeSeriesToAssetPropertyRequest& request) const;

  /**
   * A Callable wrapper for AssociateTimeSeriesToAssetProperty that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename AssociateTimeSeriesToAssetPropertyRequestT = Model::AssociateTimeSeriesToAssetPropertyRequest>
  Model::AssociateTimeSeriesToAssetPropertyOutcomeCallable AssociateTimeSeriesToAssetPropertyCallable(
      const AssociateTimeSeriesToAssetPropertyRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::AssociateTimeSeriesToAssetProperty, request);
  }

  /**
   * An Async wrapper for AssociateTimeSeriesToAssetProperty that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename AssociateTimeSeriesToAssetPropertyRequestT = Model::AssociateTimeSeriesToAssetPropertyRequest>
  void AssociateTimeSeriesToAssetPropertyAsync(const AssociateTimeSeriesToAssetPropertyRequestT& request,
                                               const AssociateTimeSeriesToAssetPropertyResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::AssociateTimeSeriesToAssetProperty, request, handler, context);
  }

  /**
   * <p>Associates a batch of data segments with a curated dataset. Data segments are
   * time-bounded slices of time series data selected from source session datasets.
   * Data segments that belong to the same time series can't overlap in time,
   * regardless of which dataset they belong to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchAssociateDataSegmentsToDataset">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchAssociateDataSegmentsToDatasetOutcome BatchAssociateDataSegmentsToDataset(
      const Model::BatchAssociateDataSegmentsToDatasetRequest& request) const;

  /**
   * A Callable wrapper for BatchAssociateDataSegmentsToDataset that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename BatchAssociateDataSegmentsToDatasetRequestT = Model::BatchAssociateDataSegmentsToDatasetRequest>
  Model::BatchAssociateDataSegmentsToDatasetOutcomeCallable BatchAssociateDataSegmentsToDatasetCallable(
      const BatchAssociateDataSegmentsToDatasetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchAssociateDataSegmentsToDataset, request);
  }

  /**
   * An Async wrapper for BatchAssociateDataSegmentsToDataset that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename BatchAssociateDataSegmentsToDatasetRequestT = Model::BatchAssociateDataSegmentsToDatasetRequest>
  void BatchAssociateDataSegmentsToDatasetAsync(const BatchAssociateDataSegmentsToDatasetRequestT& request,
                                                const BatchAssociateDataSegmentsToDatasetResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchAssociateDataSegmentsToDataset, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Associates a group
   * (batch) of assets with an IoT SiteWise Monitor project.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchAssociateProjectAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchAssociateProjectAssetsOutcome BatchAssociateProjectAssets(
      const Model::BatchAssociateProjectAssetsRequest& request) const;

  /**
   * A Callable wrapper for BatchAssociateProjectAssets that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchAssociateProjectAssetsRequestT = Model::BatchAssociateProjectAssetsRequest>
  Model::BatchAssociateProjectAssetsOutcomeCallable BatchAssociateProjectAssetsCallable(
      const BatchAssociateProjectAssetsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchAssociateProjectAssets, request);
  }

  /**
   * An Async wrapper for BatchAssociateProjectAssets that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchAssociateProjectAssetsRequestT = Model::BatchAssociateProjectAssetsRequest>
  void BatchAssociateProjectAssetsAsync(const BatchAssociateProjectAssetsRequestT& request,
                                        const BatchAssociateProjectAssetsResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchAssociateProjectAssets, request, handler, context);
  }

  /**
   * <p>Deletes a batch of data segments from a session dataset. Deleting a data
   * segment deletes the underlying time series data for the segment's time
   * range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchDeleteDatasetDataSegments">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDeleteDatasetDataSegmentsOutcome BatchDeleteDatasetDataSegments(
      const Model::BatchDeleteDatasetDataSegmentsRequest& request) const;

  /**
   * A Callable wrapper for BatchDeleteDatasetDataSegments that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchDeleteDatasetDataSegmentsRequestT = Model::BatchDeleteDatasetDataSegmentsRequest>
  Model::BatchDeleteDatasetDataSegmentsOutcomeCallable BatchDeleteDatasetDataSegmentsCallable(
      const BatchDeleteDatasetDataSegmentsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchDeleteDatasetDataSegments, request);
  }

  /**
   * An Async wrapper for BatchDeleteDatasetDataSegments that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchDeleteDatasetDataSegmentsRequestT = Model::BatchDeleteDatasetDataSegmentsRequest>
  void BatchDeleteDatasetDataSegmentsAsync(const BatchDeleteDatasetDataSegmentsRequestT& request,
                                           const BatchDeleteDatasetDataSegmentsResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchDeleteDatasetDataSegments, request, handler, context);
  }

  /**
   * <p>Disassociates a batch of data segments from a curated dataset. Disassociating
   * a data segment doesn't delete the underlying data in the source session
   * dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchDisassociateDataSegmentsFromDataset">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDisassociateDataSegmentsFromDatasetOutcome BatchDisassociateDataSegmentsFromDataset(
      const Model::BatchDisassociateDataSegmentsFromDatasetRequest& request) const;

  /**
   * A Callable wrapper for BatchDisassociateDataSegmentsFromDataset that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename BatchDisassociateDataSegmentsFromDatasetRequestT = Model::BatchDisassociateDataSegmentsFromDatasetRequest>
  Model::BatchDisassociateDataSegmentsFromDatasetOutcomeCallable BatchDisassociateDataSegmentsFromDatasetCallable(
      const BatchDisassociateDataSegmentsFromDatasetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchDisassociateDataSegmentsFromDataset, request);
  }

  /**
   * An Async wrapper for BatchDisassociateDataSegmentsFromDataset that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename BatchDisassociateDataSegmentsFromDatasetRequestT = Model::BatchDisassociateDataSegmentsFromDatasetRequest>
  void BatchDisassociateDataSegmentsFromDatasetAsync(
      const BatchDisassociateDataSegmentsFromDatasetRequestT& request,
      const BatchDisassociateDataSegmentsFromDatasetResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchDisassociateDataSegmentsFromDataset, request, handler, context);
  }

  /**
   * <p>Disassociates a group (batch) of assets from an IoT SiteWise Monitor
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchDisassociateProjectAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDisassociateProjectAssetsOutcome BatchDisassociateProjectAssets(
      const Model::BatchDisassociateProjectAssetsRequest& request) const;

  /**
   * A Callable wrapper for BatchDisassociateProjectAssets that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchDisassociateProjectAssetsRequestT = Model::BatchDisassociateProjectAssetsRequest>
  Model::BatchDisassociateProjectAssetsOutcomeCallable BatchDisassociateProjectAssetsCallable(
      const BatchDisassociateProjectAssetsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchDisassociateProjectAssets, request);
  }

  /**
   * An Async wrapper for BatchDisassociateProjectAssets that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchDisassociateProjectAssetsRequestT = Model::BatchDisassociateProjectAssetsRequest>
  void BatchDisassociateProjectAssetsAsync(const BatchDisassociateProjectAssetsRequestT& request,
                                           const BatchDisassociateProjectAssetsResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchDisassociateProjectAssets, request, handler, context);
  }

  /**
   * <p>Gets aggregated values (for example, average, minimum, and maximum) for one
   * or more asset properties. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
   * aggregates</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyAggregates">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetAssetPropertyAggregatesOutcome BatchGetAssetPropertyAggregates(
      const Model::BatchGetAssetPropertyAggregatesRequest& request) const;

  /**
   * A Callable wrapper for BatchGetAssetPropertyAggregates that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchGetAssetPropertyAggregatesRequestT = Model::BatchGetAssetPropertyAggregatesRequest>
  Model::BatchGetAssetPropertyAggregatesOutcomeCallable BatchGetAssetPropertyAggregatesCallable(
      const BatchGetAssetPropertyAggregatesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchGetAssetPropertyAggregates, request);
  }

  /**
   * An Async wrapper for BatchGetAssetPropertyAggregates that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchGetAssetPropertyAggregatesRequestT = Model::BatchGetAssetPropertyAggregatesRequest>
  void BatchGetAssetPropertyAggregatesAsync(const BatchGetAssetPropertyAggregatesRequestT& request,
                                            const BatchGetAssetPropertyAggregatesResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchGetAssetPropertyAggregates, request, handler, context);
  }

  /**
   * <p>Gets the current value for one or more asset properties. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#current-values">Querying
   * current values</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValue">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetAssetPropertyValueOutcome BatchGetAssetPropertyValue(
      const Model::BatchGetAssetPropertyValueRequest& request) const;

  /**
   * A Callable wrapper for BatchGetAssetPropertyValue that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchGetAssetPropertyValueRequestT = Model::BatchGetAssetPropertyValueRequest>
  Model::BatchGetAssetPropertyValueOutcomeCallable BatchGetAssetPropertyValueCallable(
      const BatchGetAssetPropertyValueRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchGetAssetPropertyValue, request);
  }

  /**
   * An Async wrapper for BatchGetAssetPropertyValue that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetAssetPropertyValueRequestT = Model::BatchGetAssetPropertyValueRequest>
  void BatchGetAssetPropertyValueAsync(const BatchGetAssetPropertyValueRequestT& request,
                                       const BatchGetAssetPropertyValueResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchGetAssetPropertyValue, request, handler, context);
  }

  /**
   * <p>Gets the historical values for one or more asset properties. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#historical-values">Querying
   * historical values</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValueHistory">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetAssetPropertyValueHistoryOutcome BatchGetAssetPropertyValueHistory(
      const Model::BatchGetAssetPropertyValueHistoryRequest& request) const;

  /**
   * A Callable wrapper for BatchGetAssetPropertyValueHistory that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename BatchGetAssetPropertyValueHistoryRequestT = Model::BatchGetAssetPropertyValueHistoryRequest>
  Model::BatchGetAssetPropertyValueHistoryOutcomeCallable BatchGetAssetPropertyValueHistoryCallable(
      const BatchGetAssetPropertyValueHistoryRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchGetAssetPropertyValueHistory, request);
  }

  /**
   * An Async wrapper for BatchGetAssetPropertyValueHistory that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchGetAssetPropertyValueHistoryRequestT = Model::BatchGetAssetPropertyValueHistoryRequest>
  void BatchGetAssetPropertyValueHistoryAsync(const BatchGetAssetPropertyValueHistoryRequestT& request,
                                              const BatchGetAssetPropertyValueHistoryResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchGetAssetPropertyValueHistory, request, handler, context);
  }

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
  virtual Model::BatchPutAssetPropertyValueOutcome BatchPutAssetPropertyValue(
      const Model::BatchPutAssetPropertyValueRequest& request) const;

  /**
   * A Callable wrapper for BatchPutAssetPropertyValue that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchPutAssetPropertyValueRequestT = Model::BatchPutAssetPropertyValueRequest>
  Model::BatchPutAssetPropertyValueOutcomeCallable BatchPutAssetPropertyValueCallable(
      const BatchPutAssetPropertyValueRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::BatchPutAssetPropertyValue, request);
  }

  /**
   * An Async wrapper for BatchPutAssetPropertyValue that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchPutAssetPropertyValueRequestT = Model::BatchPutAssetPropertyValueRequest>
  void BatchPutAssetPropertyValueAsync(const BatchPutAssetPropertyValueRequestT& request,
                                       const BatchPutAssetPropertyValueResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::BatchPutAssetPropertyValue, request, handler, context);
  }

  /**
   * <p>Cancels a running or pending enrichment job. This is an idempotent
   * operation—calling it multiple times with the same jobId is safe and returns the
   * current status.</p> <h2>Behavior</h2> <ul> <li>Jobs in PENDING or RUNNING status
   * transition to CANCELLED</li> <li>Jobs in RUNNING state may not be cancellable
   * once they have progressed to certain processing stages</li> <li>Jobs already in
   * terminal states (COMPLETED, FAILED, TIMED_OUT) cannot be cancelled; the
   * operation returns a ConflictingOperationException</li> <li>Cancelling an
   * already-CANCELLED job is a no-op and returns the current status (idempotent
   * behavior)</li> <li>The API responds immediately after recording the
   * cancellation</li> <li>Cleanup of job resources happens asynchronously in the
   * background</li> </ul> <h2>When to Cancel</h2> <p>Cancel a job when:</p> <ul>
   * <li>The job is taking longer than expected</li> <li>The job was created with
   * incorrect parameters</li> <li>You no longer need the results</li> </ul>
   * <h2>Idempotency</h2> <p>You can safely retry cancellation requests. Calling
   * CancelEnrichmentJob multiple times for the same job returns the current status
   * without error as long as the job is not in a terminal state other than
   * CANCELLED.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CancelEnrichmentJob">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelEnrichmentJobOutcome CancelEnrichmentJob(const Model::CancelEnrichmentJobRequest& request) const;

  /**
   * A Callable wrapper for CancelEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelEnrichmentJobRequestT = Model::CancelEnrichmentJobRequest>
  Model::CancelEnrichmentJobOutcomeCallable CancelEnrichmentJobCallable(const CancelEnrichmentJobRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CancelEnrichmentJob, request);
  }

  /**
   * An Async wrapper for CancelEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CancelEnrichmentJobRequestT = Model::CancelEnrichmentJobRequest>
  void CancelEnrichmentJobAsync(const CancelEnrichmentJobRequestT& request, const CancelEnrichmentJobResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CancelEnrichmentJob, request, handler, context);
  }

  /**
   * <p>Cancels a pipeline execution in the specified workspace. If the execution is
   * not in a terminal state (such as NOT_STARTED or RUNNING), it transitions to
   * CANCELLING and asynchronously to CANCELLED. This operation is idempotent:
   * calling it on an execution that is already CANCELLING or CANCELLED returns
   * success with the current state. Calling it on a terminal execution (SUCCEEDED or
   * FAILED) returns a conflict error. You can optionally provide a reason; it is
   * returned in the stateDetails field when you describe the
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CancelPipelineExecution">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelPipelineExecutionOutcome CancelPipelineExecution(const Model::CancelPipelineExecutionRequest& request) const;

  /**
   * A Callable wrapper for CancelPipelineExecution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelPipelineExecutionRequestT = Model::CancelPipelineExecutionRequest>
  Model::CancelPipelineExecutionOutcomeCallable CancelPipelineExecutionCallable(const CancelPipelineExecutionRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CancelPipelineExecution, request);
  }

  /**
   * An Async wrapper for CancelPipelineExecution that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CancelPipelineExecutionRequestT = Model::CancelPipelineExecutionRequest>
  void CancelPipelineExecutionAsync(const CancelPipelineExecutionRequestT& request,
                                    const CancelPipelineExecutionResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CancelPipelineExecution, request, handler, context);
  }

  /**
   * <p>Cancels a running query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CancelQuery">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelQueryOutcome CancelQuery(const Model::CancelQueryRequest& request) const;

  /**
   * A Callable wrapper for CancelQuery that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CancelQueryRequestT = Model::CancelQueryRequest>
  Model::CancelQueryOutcomeCallable CancelQueryCallable(const CancelQueryRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CancelQuery, request);
  }

  /**
   * An Async wrapper for CancelQuery that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CancelQueryRequestT = Model::CancelQueryRequest>
  void CancelQueryAsync(const CancelQueryRequestT& request, const CancelQueryResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CancelQuery, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Creates an access
   * policy that grants the specified identity (IAM Identity Center user, IAM
   * Identity Center group, or IAM user) access to the specified IoT SiteWise Monitor
   * portal or project resource.</p>  <p>Support for access policies that use
   * an SSO Group as the identity is not supported at this time.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAccessPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAccessPolicyOutcome CreateAccessPolicy(const Model::CreateAccessPolicyRequest& request) const;

  /**
   * A Callable wrapper for CreateAccessPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAccessPolicyRequestT = Model::CreateAccessPolicyRequest>
  Model::CreateAccessPolicyOutcomeCallable CreateAccessPolicyCallable(const CreateAccessPolicyRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateAccessPolicy, request);
  }

  /**
   * An Async wrapper for CreateAccessPolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAccessPolicyRequestT = Model::CreateAccessPolicyRequest>
  void CreateAccessPolicyAsync(const CreateAccessPolicyRequestT& request, const CreateAccessPolicyResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateAccessPolicy, request, handler, context);
  }

  /**
   * <p>Creates a new application for the workspace and IdC application
   * provided</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

  /**
   * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateApplicationRequestT = Model::CreateApplicationRequest>
  Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateApplication, request);
  }

  /**
   * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateApplicationRequestT = Model::CreateApplicationRequest>
  void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateApplication, request, handler, context);
  }

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
  template <typename CreateAssetRequestT = Model::CreateAssetRequest>
  Model::CreateAssetOutcomeCallable CreateAssetCallable(const CreateAssetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateAsset, request);
  }

  /**
   * An Async wrapper for CreateAsset that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateAssetRequestT = Model::CreateAssetRequest>
  void CreateAssetAsync(const CreateAssetRequestT& request, const CreateAssetResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateAsset, request, handler, context);
  }

  /**
   * <p>Creates an asset model from specified property and hierarchy definitions. You
   * create assets from asset models. With asset models, you can easily create assets
   * of the same type that have standardized definitions. Each asset created from a
   * model inherits the asset model's property and hierarchy definitions. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/define-models.html">Defining
   * asset models</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can create
   * three types of asset models, <code>ASSET_MODEL</code>,
   * <code>COMPONENT_MODEL</code>, or an <code>INTERFACE</code>.</p> <ul> <li> <p>
   * <b>ASSET_MODEL</b> – (default) An asset model that you can use to create assets.
   * Can't be included as a component in another asset model.</p> </li> <li> <p>
   * <b>COMPONENT_MODEL</b> – A reusable component that you can include in the
   * composite models of other asset models. You can't create assets directly from
   * this type of asset model. </p> </li> <li> <p> <b>INTERFACE</b> – An interface is
   * a type of model that defines a standard structure that can be applied to
   * different asset models.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAssetModel">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAssetModelOutcome CreateAssetModel(const Model::CreateAssetModelRequest& request) const;

  /**
   * A Callable wrapper for CreateAssetModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAssetModelRequestT = Model::CreateAssetModelRequest>
  Model::CreateAssetModelOutcomeCallable CreateAssetModelCallable(const CreateAssetModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateAssetModel, request);
  }

  /**
   * An Async wrapper for CreateAssetModel that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAssetModelRequestT = Model::CreateAssetModelRequest>
  void CreateAssetModelAsync(const CreateAssetModelRequestT& request, const CreateAssetModelResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateAssetModel, request, handler, context);
  }

  /**
   * <p>Creates a custom composite model from specified property and hierarchy
   * definitions. There are two types of custom composite models, <code>inline</code>
   * and <code>component-model-based</code>. </p> <p>Use component-model-based custom
   * composite models to define standard, reusable components. A
   * component-model-based custom composite model consists of a name, a description,
   * and the ID of the component model it references. A component-model-based custom
   * composite model has no properties of its own; its referenced component model
   * provides its associated properties to any created assets. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/custom-composite-models.html">Custom
   * composite models (Components)</a> in the <i>IoT SiteWise User Guide</i>.</p>
   * <p>Use inline custom composite models to organize the properties of an asset
   * model. The properties of inline custom composite models are local to the asset
   * model where they are included and can't be used to create multiple assets.</p>
   * <p>To create a component-model-based model, specify the
   * <code>composedAssetModelId</code> of an existing asset model with
   * <code>assetModelType</code> of <code>COMPONENT_MODEL</code>.</p> <p>To create an
   * inline model, specify the <code>assetModelCompositeModelProperties</code> and
   * don't include an <code>composedAssetModelId</code>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateAssetModelCompositeModel">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAssetModelCompositeModelOutcome CreateAssetModelCompositeModel(
      const Model::CreateAssetModelCompositeModelRequest& request) const;

  /**
   * A Callable wrapper for CreateAssetModelCompositeModel that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateAssetModelCompositeModelRequestT = Model::CreateAssetModelCompositeModelRequest>
  Model::CreateAssetModelCompositeModelOutcomeCallable CreateAssetModelCompositeModelCallable(
      const CreateAssetModelCompositeModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateAssetModelCompositeModel, request);
  }

  /**
   * An Async wrapper for CreateAssetModelCompositeModel that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateAssetModelCompositeModelRequestT = Model::CreateAssetModelCompositeModelRequest>
  void CreateAssetModelCompositeModelAsync(const CreateAssetModelCompositeModelRequestT& request,
                                           const CreateAssetModelCompositeModelResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateAssetModelCompositeModel, request, handler, context);
  }

  /**
   * <p>Defines a job to ingest data to IoT SiteWise from Amazon S3. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/CreateBulkImportJob.html">Create
   * a bulk import job (CLI)</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p>  <p>Before you create a bulk import job that ingests
   * data into time series outside of a workspace, you must enable IoT SiteWise warm
   * tier or IoT SiteWise cold tier. For more information about how to configure
   * storage settings, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_PutStorageConfiguration.html">PutStorageConfiguration</a>.
   * This requirement doesn't apply to bulk import jobs that ingest data into a
   * session dataset in a workspace (jobs that specify a <code>workspaceName</code>
   * and <code>datasetId</code>). Those jobs don't use IoT SiteWise warm or cold tier
   * storage.</p> <p>Bulk import is designed to store historical data to IoT
   * SiteWise.</p> <ul> <li> <p>Newly ingested data in the hot tier triggers
   * notifications and computations.</p> </li> <li> <p>After data moves from the hot
   * tier to the warm or cold tier based on retention settings, it does not trigger
   * computations or notifications.</p> </li> <li> <p>Data older than 7 days does not
   * trigger computations or notifications.</p> </li> </ul> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateBulkImportJob">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBulkImportJobOutcome CreateBulkImportJob(const Model::CreateBulkImportJobRequest& request) const;

  /**
   * A Callable wrapper for CreateBulkImportJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateBulkImportJobRequestT = Model::CreateBulkImportJobRequest>
  Model::CreateBulkImportJobOutcomeCallable CreateBulkImportJobCallable(const CreateBulkImportJobRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateBulkImportJob, request);
  }

  /**
   * An Async wrapper for CreateBulkImportJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateBulkImportJobRequestT = Model::CreateBulkImportJobRequest>
  void CreateBulkImportJobAsync(const CreateBulkImportJobRequestT& request, const CreateBulkImportJobResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateBulkImportJob, request, handler, context);
  }

  /**
   * <p>Create a computation model with a configuration and data
   * binding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateComputationModel">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateComputationModelOutcome CreateComputationModel(const Model::CreateComputationModelRequest& request) const;

  /**
   * A Callable wrapper for CreateComputationModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateComputationModelRequestT = Model::CreateComputationModelRequest>
  Model::CreateComputationModelOutcomeCallable CreateComputationModelCallable(const CreateComputationModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateComputationModel, request);
  }

  /**
   * An Async wrapper for CreateComputationModel that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateComputationModelRequestT = Model::CreateComputationModelRequest>
  void CreateComputationModelAsync(const CreateComputationModelRequestT& request,
                                   const CreateComputationModelResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateComputationModel, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Creates a
   * dashboard in an IoT SiteWise Monitor project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;

  /**
   * A Callable wrapper for CreateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateDashboardRequestT = Model::CreateDashboardRequest>
  Model::CreateDashboardOutcomeCallable CreateDashboardCallable(const CreateDashboardRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateDashboard, request);
  }

  /**
   * An Async wrapper for CreateDashboard that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateDashboardRequestT = Model::CreateDashboardRequest>
  void CreateDashboardAsync(const CreateDashboardRequestT& request, const CreateDashboardResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateDashboard, request, handler, context);
  }

  /**
   * <p>Creates a dataset. Session and curated datasets are created in a workspace. A
   * session dataset contains data segments of time series data, and a curated
   * dataset curates data segments selected from source session datasets. A dataset
   * that connects to an external datasource is created outside of a
   * workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDataset">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

  /**
   * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateDatasetRequestT = Model::CreateDatasetRequest>
  Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const CreateDatasetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateDataset, request);
  }

  /**
   * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateDatasetRequestT = Model::CreateDatasetRequest>
  void CreateDatasetAsync(const CreateDatasetRequestT& request, const CreateDatasetResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateDataset, request, handler, context);
  }

  /**
   * <p>Starts an asynchronous job that exports dataset and time-series data from a
   * workspace to Amazon S3. The operation returns a jobId immediately; poll
   * DescribeDatasetExportJob to track progress and ListDatasetExportJobs to
   * enumerate a workspace's jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDatasetExportJob">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDatasetExportJobOutcome CreateDatasetExportJob(const Model::CreateDatasetExportJobRequest& request) const;

  /**
   * A Callable wrapper for CreateDatasetExportJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateDatasetExportJobRequestT = Model::CreateDatasetExportJobRequest>
  Model::CreateDatasetExportJobOutcomeCallable CreateDatasetExportJobCallable(const CreateDatasetExportJobRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateDatasetExportJob, request);
  }

  /**
   * An Async wrapper for CreateDatasetExportJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateDatasetExportJobRequestT = Model::CreateDatasetExportJobRequest>
  void CreateDatasetExportJobAsync(const CreateDatasetExportJobRequestT& request,
                                   const CreateDatasetExportJobResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateDatasetExportJob, request, handler, context);
  }

  /**
   * <p>Creates an asynchronous enrichment job to analyze time-series sensor data.
   * The operation returns immediately with job details while processing continues in
   * the background.</p> <h2>Idempotency</h2> <p>Include a clientToken to make the
   * operation idempotent. If you submit the same request with the same token within
   * the idempotency window, you receive the original job details without creating a
   * duplicate.</p> <h2>Prerequisites</h2> <p>Before creating a job, ensure:</p> <ul>
   * <li>The workspace is in ACTIVE state (not being deleted)</li> <li>You have IAM
   * permissions for the workspace, dataset, and time-series resources</li> <li>You
   * have KMS Decrypt permission on the workspace's customer-managed encryption
   * key</li> <li>No duplicate job (same workspace, dataset, property, and job type)
   * is currently running</li> </ul> <h2>Workflow</h2> <ol> <li>Submit the job with
   * configuration specifying which video data to analyze and the time range</li>
   * <li>Capture the jobId from the response</li> <li>Use DescribeEnrichmentJob to
   * monitor progress and check job status</li> <li>When status reaches a terminal
   * state (COMPLETED, FAILED, TIMED_OUT, CANCELLED), check results</li> <li>For
   * COMPLETED jobs, query IoT SiteWise for semantic search on video events</li>
   * </ol> <h2>Error Handling</h2> <ul> <li>ConflictingOperationException: A
   * duplicate job is already running for the same configuration</li>
   * <li>InvalidRequestException: Invalid parameters (e.g., both timeSeriesId and
   * propertyAlias specified)</li> <li>AccessDeniedException: Insufficient IAM or KMS
   * permissions</li> <li>LimitExceededException: Too many concurrent jobs or
   * requests</li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateEnrichmentJob">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateEnrichmentJobOutcome CreateEnrichmentJob(const Model::CreateEnrichmentJobRequest& request) const;

  /**
   * A Callable wrapper for CreateEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateEnrichmentJobRequestT = Model::CreateEnrichmentJobRequest>
  Model::CreateEnrichmentJobOutcomeCallable CreateEnrichmentJobCallable(const CreateEnrichmentJobRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateEnrichmentJob, request);
  }

  /**
   * An Async wrapper for CreateEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateEnrichmentJobRequestT = Model::CreateEnrichmentJobRequest>
  void CreateEnrichmentJobAsync(const CreateEnrichmentJobRequestT& request, const CreateEnrichmentJobResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateEnrichmentJob, request, handler, context);
  }

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
  template <typename CreateGatewayRequestT = Model::CreateGatewayRequest>
  Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const CreateGatewayRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateGateway, request);
  }

  /**
   * An Async wrapper for CreateGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateGatewayRequestT = Model::CreateGatewayRequest>
  void CreateGatewayAsync(const CreateGatewayRequestT& request, const CreateGatewayResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateGateway, request, handler, context);
  }

  /**
   * <p>Creates a new pipeline in the specified workspace. A pipeline defines a
   * directed acyclic graph (DAG) of compute nodes, where each node references a task
   * and can declare dependencies on other nodes. Cyclic dependencies are not
   * allowed. Nodes without dependencies run in parallel, while nodes with
   * dependencies wait for all upstream nodes to complete successfully before
   * starting.</p> <p>You can set environment variables at the pipeline level that
   * are shared across all compute nodes, and override them at the individual compute
   * node level.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

  /**
   * A Callable wrapper for CreatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePipelineRequestT = Model::CreatePipelineRequest>
  Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const CreatePipelineRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreatePipeline, request);
  }

  /**
   * An Async wrapper for CreatePipeline that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePipelineRequestT = Model::CreatePipelineRequest>
  void CreatePipelineAsync(const CreatePipelineRequestT& request, const CreatePipelineResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreatePipeline, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Creates a portal,
   * which can contain projects and dashboards. IoT SiteWise Monitor uses IAM
   * Identity Center or IAM to authenticate portal users and manage user
   * permissions.</p>  <p>Before you can sign in to a new portal, you must add
   * at least one identity to that portal. For more information, see <a
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
  template <typename CreatePortalRequestT = Model::CreatePortalRequest>
  Model::CreatePortalOutcomeCallable CreatePortalCallable(const CreatePortalRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreatePortal, request);
  }

  /**
   * An Async wrapper for CreatePortal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePortalRequestT = Model::CreatePortalRequest>
  void CreatePortalAsync(const CreatePortalRequestT& request, const CreatePortalResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreatePortal, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Creates a project
   * in the specified portal.</p>  <p>Make sure that the project name and
   * description don't contain confidential information.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateProject">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

  /**
   * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateProjectRequestT = Model::CreateProjectRequest>
  Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateProject, request);
  }

  /**
   * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateProjectRequestT = Model::CreateProjectRequest>
  void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateProject, request, handler, context);
  }

  /**
   * <p>Creates a new task in the specified workspace. A task defines a reusable
   * containerized compute workload that can be referenced by one or more pipeline
   * compute nodes.</p> <p>Specify a <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_ContainerTaskConfiguration.html"><code>containerTaskConfiguration</code></a>
   * for custom container workloads with configurable ECR image, processing type,
   * processing unit, and environment variables.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateTask">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTaskOutcome CreateTask(const Model::CreateTaskRequest& request) const;

  /**
   * A Callable wrapper for CreateTask that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateTaskRequestT = Model::CreateTaskRequest>
  Model::CreateTaskOutcomeCallable CreateTaskCallable(const CreateTaskRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateTask, request);
  }

  /**
   * An Async wrapper for CreateTask that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateTaskRequestT = Model::CreateTaskRequest>
  void CreateTaskAsync(const CreateTaskRequestT& request, const CreateTaskResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateTask, request, handler, context);
  }

  /**
   * <p>Creates a workspace in IoT SiteWise. A workspace isolates its resources, such
   * as datasets, time series, pipelines, and tasks, and their data from other
   * workspaces, and has its own quotas and throttling limits. You must specify an
   * encryption configuration when you create a workspace. The operation returns
   * immediately with the workspace in the <code>CREATING</code> state. Provisioning
   * completes asynchronously, after which the workspace state is
   * <code>ACTIVE</code>, or <code>FAILED</code> if provisioning doesn't
   * complete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateWorkspace">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest& request) const;

  /**
   * A Callable wrapper for CreateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
  Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const CreateWorkspaceRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::CreateWorkspace, request);
  }

  /**
   * An Async wrapper for CreateWorkspace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
  void CreateWorkspaceAsync(const CreateWorkspaceRequestT& request, const CreateWorkspaceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::CreateWorkspace, request, handler, context);
  }

  /**
   * <p>Deletes an access policy that grants the specified identity access to the
   * specified IoT SiteWise Monitor resource. You can use this operation to revoke
   * access to an IoT SiteWise Monitor resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAccessPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAccessPolicyOutcome DeleteAccessPolicy(const Model::DeleteAccessPolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteAccessPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAccessPolicyRequestT = Model::DeleteAccessPolicyRequest>
  Model::DeleteAccessPolicyOutcomeCallable DeleteAccessPolicyCallable(const DeleteAccessPolicyRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteAccessPolicy, request);
  }

  /**
   * An Async wrapper for DeleteAccessPolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAccessPolicyRequestT = Model::DeleteAccessPolicyRequest>
  void DeleteAccessPolicyAsync(const DeleteAccessPolicyRequestT& request, const DeleteAccessPolicyResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteAccessPolicy, request, handler, context);
  }

  /**
   * <p>Deletes an application by ID</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

  /**
   * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
  Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteApplication, request);
  }

  /**
   * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
  void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteApplication, request, handler, context);
  }

  /**
   * <p>Deletes an asset. This action can't be undone. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
   * assets and models</a> in the <i>IoT SiteWise User Guide</i>.</p>  <p>You
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
  template <typename DeleteAssetRequestT = Model::DeleteAssetRequest>
  Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const DeleteAssetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteAsset, request);
  }

  /**
   * An Async wrapper for DeleteAsset that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteAssetRequestT = Model::DeleteAssetRequest>
  void DeleteAssetAsync(const DeleteAssetRequestT& request, const DeleteAssetResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteAsset, request, handler, context);
  }

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
   * A Callable wrapper for DeleteAssetModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAssetModelRequestT = Model::DeleteAssetModelRequest>
  Model::DeleteAssetModelOutcomeCallable DeleteAssetModelCallable(const DeleteAssetModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteAssetModel, request);
  }

  /**
   * An Async wrapper for DeleteAssetModel that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAssetModelRequestT = Model::DeleteAssetModelRequest>
  void DeleteAssetModelAsync(const DeleteAssetModelRequestT& request, const DeleteAssetModelResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteAssetModel, request, handler, context);
  }

  /**
   * <p>Deletes a composite model. This action can't be undone. You must delete all
   * assets created from a composite model before you can delete the model. Also, you
   * can't delete a composite model if a parent asset model exists that contains a
   * property formula expression that depends on the asset model that you want to
   * delete. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting
   * assets and models</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAssetModelCompositeModel">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAssetModelCompositeModelOutcome DeleteAssetModelCompositeModel(
      const Model::DeleteAssetModelCompositeModelRequest& request) const;

  /**
   * A Callable wrapper for DeleteAssetModelCompositeModel that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteAssetModelCompositeModelRequestT = Model::DeleteAssetModelCompositeModelRequest>
  Model::DeleteAssetModelCompositeModelOutcomeCallable DeleteAssetModelCompositeModelCallable(
      const DeleteAssetModelCompositeModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteAssetModelCompositeModel, request);
  }

  /**
   * An Async wrapper for DeleteAssetModelCompositeModel that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteAssetModelCompositeModelRequestT = Model::DeleteAssetModelCompositeModelRequest>
  void DeleteAssetModelCompositeModelAsync(const DeleteAssetModelCompositeModelRequestT& request,
                                           const DeleteAssetModelCompositeModelResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteAssetModelCompositeModel, request, handler, context);
  }

  /**
   * <p>Deletes an interface relationship between an asset model and an interface
   * asset model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteAssetModelInterfaceRelationship">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAssetModelInterfaceRelationshipOutcome DeleteAssetModelInterfaceRelationship(
      const Model::DeleteAssetModelInterfaceRelationshipRequest& request) const;

  /**
   * A Callable wrapper for DeleteAssetModelInterfaceRelationship that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DeleteAssetModelInterfaceRelationshipRequestT = Model::DeleteAssetModelInterfaceRelationshipRequest>
  Model::DeleteAssetModelInterfaceRelationshipOutcomeCallable DeleteAssetModelInterfaceRelationshipCallable(
      const DeleteAssetModelInterfaceRelationshipRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteAssetModelInterfaceRelationship, request);
  }

  /**
   * An Async wrapper for DeleteAssetModelInterfaceRelationship that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DeleteAssetModelInterfaceRelationshipRequestT = Model::DeleteAssetModelInterfaceRelationshipRequest>
  void DeleteAssetModelInterfaceRelationshipAsync(const DeleteAssetModelInterfaceRelationshipRequestT& request,
                                                  const DeleteAssetModelInterfaceRelationshipResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteAssetModelInterfaceRelationship, request, handler, context);
  }

  /**
   * <p>Deletes a computation model. This action can't be undone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteComputationModel">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteComputationModelOutcome DeleteComputationModel(const Model::DeleteComputationModelRequest& request) const;

  /**
   * A Callable wrapper for DeleteComputationModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteComputationModelRequestT = Model::DeleteComputationModelRequest>
  Model::DeleteComputationModelOutcomeCallable DeleteComputationModelCallable(const DeleteComputationModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteComputationModel, request);
  }

  /**
   * An Async wrapper for DeleteComputationModel that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteComputationModelRequestT = Model::DeleteComputationModelRequest>
  void DeleteComputationModelAsync(const DeleteComputationModelRequestT& request,
                                   const DeleteComputationModelResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteComputationModel, request, handler, context);
  }

  /**
   * <p>Deletes a dashboard from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;

  /**
   * A Callable wrapper for DeleteDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteDashboardRequestT = Model::DeleteDashboardRequest>
  Model::DeleteDashboardOutcomeCallable DeleteDashboardCallable(const DeleteDashboardRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteDashboard, request);
  }

  /**
   * An Async wrapper for DeleteDashboard that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteDashboardRequestT = Model::DeleteDashboardRequest>
  void DeleteDashboardAsync(const DeleteDashboardRequestT& request, const DeleteDashboardResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteDashboard, request, handler, context);
  }

  /**
   * <p>Deletes a dataset. This can't be undone. Deleting a session dataset also
   * deletes the underlying time series data in the session. You can't delete a
   * session dataset while a curated dataset references its data segments. First
   * delete the curated dataset or disassociate the data segments. Deleting a curated
   * dataset doesn't delete the underlying data in the source session
   * datasets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteDataset">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

  /**
   * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
  Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const DeleteDatasetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteDataset, request);
  }

  /**
   * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
  void DeleteDatasetAsync(const DeleteDatasetRequestT& request, const DeleteDatasetResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteDataset, request, handler, context);
  }

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
  template <typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
  Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const DeleteGatewayRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteGateway, request);
  }

  /**
   * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
  void DeleteGatewayAsync(const DeleteGatewayRequestT& request, const DeleteGatewayResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteGateway, request, handler, context);
  }

  /**
   * <p>Deletes a pipeline from the specified workspace. A pipeline cannot be deleted
   * if it has any active executions. Wait for all executions to complete before
   * attempting to delete the pipeline, or use <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CancelPipelineExecution.html">CancelPipelineExecution</a>
   * to stop a running execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeletePipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

  /**
   * A Callable wrapper for DeletePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeletePipelineRequestT = Model::DeletePipelineRequest>
  Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const DeletePipelineRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeletePipeline, request);
  }

  /**
   * An Async wrapper for DeletePipeline that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeletePipelineRequestT = Model::DeletePipelineRequest>
  void DeletePipelineAsync(const DeletePipelineRequestT& request, const DeletePipelineResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeletePipeline, request, handler, context);
  }

  /**
   * <p>Deletes a portal from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeletePortal">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePortalOutcome DeletePortal(const Model::DeletePortalRequest& request) const;

  /**
   * A Callable wrapper for DeletePortal that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeletePortalRequestT = Model::DeletePortalRequest>
  Model::DeletePortalOutcomeCallable DeletePortalCallable(const DeletePortalRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeletePortal, request);
  }

  /**
   * An Async wrapper for DeletePortal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeletePortalRequestT = Model::DeletePortalRequest>
  void DeletePortalAsync(const DeletePortalRequestT& request, const DeletePortalResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeletePortal, request, handler, context);
  }

  /**
   * <p>Deletes a project from IoT SiteWise Monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteProject">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

  /**
   * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteProjectRequestT = Model::DeleteProjectRequest>
  Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteProject, request);
  }

  /**
   * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteProjectRequestT = Model::DeleteProjectRequest>
  void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteProject, request, handler, context);
  }

  /**
   * <p>Deletes a task from the specified workspace. A task cannot be deleted if it
   * is currently referenced by any existing pipeline. Remove the task from all
   * pipelines before attempting to delete it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteTask">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest& request) const;

  /**
   * A Callable wrapper for DeleteTask that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteTaskRequestT = Model::DeleteTaskRequest>
  Model::DeleteTaskOutcomeCallable DeleteTaskCallable(const DeleteTaskRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteTask, request);
  }

  /**
   * An Async wrapper for DeleteTask that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteTaskRequestT = Model::DeleteTaskRequest>
  void DeleteTaskAsync(const DeleteTaskRequestT& request, const DeleteTaskResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteTask, request, handler, context);
  }

  /**
   * <p>Deletes a time series (data stream). If you delete a time series that's
   * associated with an asset property, the asset property still exists, but the time
   * series will no longer be associated with this asset property. You can't delete a
   * time series until all of its data segments have been deleted from session
   * datasets.</p> <p>To identify a time series, do one of the following:</p> <ul>
   * <li> <p>If the time series isn't associated with an asset property, specify the
   * <code>alias</code> of the time series.</p> </li> <li> <p>If the time series is
   * associated with an asset property, specify one of the following: </p> <ul> <li>
   * <p>The <code>alias</code> of the time series.</p> </li> <li> <p>The
   * <code>assetId</code> and <code>propertyId</code> that identifies the asset
   * property.</p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteTimeSeries">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTimeSeriesOutcome DeleteTimeSeries(const Model::DeleteTimeSeriesRequest& request = {}) const;

  /**
   * A Callable wrapper for DeleteTimeSeries that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteTimeSeriesRequestT = Model::DeleteTimeSeriesRequest>
  Model::DeleteTimeSeriesOutcomeCallable DeleteTimeSeriesCallable(const DeleteTimeSeriesRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteTimeSeries, request);
  }

  /**
   * An Async wrapper for DeleteTimeSeries that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteTimeSeriesRequestT = Model::DeleteTimeSeriesRequest>
  void DeleteTimeSeriesAsync(const DeleteTimeSeriesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const DeleteTimeSeriesRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteTimeSeries, request, handler, context);
  }

  /**
   * <p>Deletes a workspace. Before you delete a workspace, you must delete all
   * resources contained in or associated with the workspace, such as datasets, time
   * series, pipelines, and tasks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DeleteWorkspace">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
  Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const DeleteWorkspaceRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DeleteWorkspace, request);
  }

  /**
   * An Async wrapper for DeleteWorkspace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
  void DeleteWorkspaceAsync(const DeleteWorkspaceRequestT& request, const DeleteWorkspaceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DeleteWorkspace, request, handler, context);
  }

  /**
   * <p>Describes an access policy, which specifies an identity's access to an IoT
   * SiteWise Monitor portal or project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAccessPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAccessPolicyOutcome DescribeAccessPolicy(const Model::DescribeAccessPolicyRequest& request) const;

  /**
   * A Callable wrapper for DescribeAccessPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeAccessPolicyRequestT = Model::DescribeAccessPolicyRequest>
  Model::DescribeAccessPolicyOutcomeCallable DescribeAccessPolicyCallable(const DescribeAccessPolicyRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeAccessPolicy, request);
  }

  /**
   * An Async wrapper for DescribeAccessPolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeAccessPolicyRequestT = Model::DescribeAccessPolicyRequest>
  void DescribeAccessPolicyAsync(const DescribeAccessPolicyRequestT& request, const DescribeAccessPolicyResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeAccessPolicy, request, handler, context);
  }

  /**
   * <p>Retrieves information about an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAction">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeActionOutcome DescribeAction(const Model::DescribeActionRequest& request) const;

  /**
   * A Callable wrapper for DescribeAction that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeActionRequestT = Model::DescribeActionRequest>
  Model::DescribeActionOutcomeCallable DescribeActionCallable(const DescribeActionRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeAction, request);
  }

  /**
   * An Async wrapper for DescribeAction that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeActionRequestT = Model::DescribeActionRequest>
  void DescribeActionAsync(const DescribeActionRequestT& request, const DescribeActionResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeAction, request, handler, context);
  }

  /**
   * <p>Retrieves Application details based on the ID</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

  /**
   * A Callable wrapper for DescribeApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
  Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const DescribeApplicationRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeApplication, request);
  }

  /**
   * An Async wrapper for DescribeApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
  void DescribeApplicationAsync(const DescribeApplicationRequestT& request, const DescribeApplicationResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeApplication, request, handler, context);
  }

  /**
   * <p>Retrieves information about an asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAsset">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest& request) const;

  /**
   * A Callable wrapper for DescribeAsset that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeAssetRequestT = Model::DescribeAssetRequest>
  Model::DescribeAssetOutcomeCallable DescribeAssetCallable(const DescribeAssetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeAsset, request);
  }

  /**
   * An Async wrapper for DescribeAsset that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeAssetRequestT = Model::DescribeAssetRequest>
  void DescribeAssetAsync(const DescribeAssetRequestT& request, const DescribeAssetResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeAsset, request, handler, context);
  }

  /**
   * <p>Retrieves information about an asset composite model (also known as an asset
   * component). An <code>AssetCompositeModel</code> is an instance of an
   * <code>AssetModelCompositeModel</code>. If you want to see information about the
   * model this is based on, call <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModelCompositeModel.html">DescribeAssetModelCompositeModel</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetCompositeModel">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAssetCompositeModelOutcome DescribeAssetCompositeModel(
      const Model::DescribeAssetCompositeModelRequest& request) const;

  /**
   * A Callable wrapper for DescribeAssetCompositeModel that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeAssetCompositeModelRequestT = Model::DescribeAssetCompositeModelRequest>
  Model::DescribeAssetCompositeModelOutcomeCallable DescribeAssetCompositeModelCallable(
      const DescribeAssetCompositeModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeAssetCompositeModel, request);
  }

  /**
   * An Async wrapper for DescribeAssetCompositeModel that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeAssetCompositeModelRequestT = Model::DescribeAssetCompositeModelRequest>
  void DescribeAssetCompositeModelAsync(const DescribeAssetCompositeModelRequestT& request,
                                        const DescribeAssetCompositeModelResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeAssetCompositeModel, request, handler, context);
  }

  /**
   * <p>Retrieves information about an asset model. This includes details about the
   * asset model's properties, hierarchies, composite models, and any interface
   * relationships if the asset model implements interfaces.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetModel">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAssetModelOutcome DescribeAssetModel(const Model::DescribeAssetModelRequest& request) const;

  /**
   * A Callable wrapper for DescribeAssetModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeAssetModelRequestT = Model::DescribeAssetModelRequest>
  Model::DescribeAssetModelOutcomeCallable DescribeAssetModelCallable(const DescribeAssetModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeAssetModel, request);
  }

  /**
   * An Async wrapper for DescribeAssetModel that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeAssetModelRequestT = Model::DescribeAssetModelRequest>
  void DescribeAssetModelAsync(const DescribeAssetModelRequestT& request, const DescribeAssetModelResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeAssetModel, request, handler, context);
  }

  /**
   * <p>Retrieves information about an asset model composite model (also known as an
   * asset model component). For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/custom-composite-models.html">Custom
   * composite models (Components)</a> in the <i>IoT SiteWise User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetModelCompositeModel">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAssetModelCompositeModelOutcome DescribeAssetModelCompositeModel(
      const Model::DescribeAssetModelCompositeModelRequest& request) const;

  /**
   * A Callable wrapper for DescribeAssetModelCompositeModel that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DescribeAssetModelCompositeModelRequestT = Model::DescribeAssetModelCompositeModelRequest>
  Model::DescribeAssetModelCompositeModelOutcomeCallable DescribeAssetModelCompositeModelCallable(
      const DescribeAssetModelCompositeModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeAssetModelCompositeModel, request);
  }

  /**
   * An Async wrapper for DescribeAssetModelCompositeModel that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DescribeAssetModelCompositeModelRequestT = Model::DescribeAssetModelCompositeModelRequest>
  void DescribeAssetModelCompositeModelAsync(const DescribeAssetModelCompositeModelRequestT& request,
                                             const DescribeAssetModelCompositeModelResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeAssetModelCompositeModel, request, handler, context);
  }

  /**
   * <p>Retrieves information about an interface relationship between an asset model
   * and an interface asset model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeAssetModelInterfaceRelationship">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAssetModelInterfaceRelationshipOutcome DescribeAssetModelInterfaceRelationship(
      const Model::DescribeAssetModelInterfaceRelationshipRequest& request) const;

  /**
   * A Callable wrapper for DescribeAssetModelInterfaceRelationship that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DescribeAssetModelInterfaceRelationshipRequestT = Model::DescribeAssetModelInterfaceRelationshipRequest>
  Model::DescribeAssetModelInterfaceRelationshipOutcomeCallable DescribeAssetModelInterfaceRelationshipCallable(
      const DescribeAssetModelInterfaceRelationshipRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeAssetModelInterfaceRelationship, request);
  }

  /**
   * An Async wrapper for DescribeAssetModelInterfaceRelationship that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DescribeAssetModelInterfaceRelationshipRequestT = Model::DescribeAssetModelInterfaceRelationshipRequest>
  void DescribeAssetModelInterfaceRelationshipAsync(const DescribeAssetModelInterfaceRelationshipRequestT& request,
                                                    const DescribeAssetModelInterfaceRelationshipResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeAssetModelInterfaceRelationship, request, handler, context);
  }

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
   * A Callable wrapper for DescribeAssetProperty that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeAssetPropertyRequestT = Model::DescribeAssetPropertyRequest>
  Model::DescribeAssetPropertyOutcomeCallable DescribeAssetPropertyCallable(const DescribeAssetPropertyRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeAssetProperty, request);
  }

  /**
   * An Async wrapper for DescribeAssetProperty that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeAssetPropertyRequestT = Model::DescribeAssetPropertyRequest>
  void DescribeAssetPropertyAsync(const DescribeAssetPropertyRequestT& request, const DescribeAssetPropertyResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeAssetProperty, request, handler, context);
  }

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
   * A Callable wrapper for DescribeBulkImportJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeBulkImportJobRequestT = Model::DescribeBulkImportJobRequest>
  Model::DescribeBulkImportJobOutcomeCallable DescribeBulkImportJobCallable(const DescribeBulkImportJobRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeBulkImportJob, request);
  }

  /**
   * An Async wrapper for DescribeBulkImportJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeBulkImportJobRequestT = Model::DescribeBulkImportJobRequest>
  void DescribeBulkImportJobAsync(const DescribeBulkImportJobRequestT& request, const DescribeBulkImportJobResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeBulkImportJob, request, handler, context);
  }

  /**
   * <p>Retrieves information about a computation model.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeComputationModel">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeComputationModelOutcome DescribeComputationModel(const Model::DescribeComputationModelRequest& request) const;

  /**
   * A Callable wrapper for DescribeComputationModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeComputationModelRequestT = Model::DescribeComputationModelRequest>
  Model::DescribeComputationModelOutcomeCallable DescribeComputationModelCallable(const DescribeComputationModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeComputationModel, request);
  }

  /**
   * An Async wrapper for DescribeComputationModel that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeComputationModelRequestT = Model::DescribeComputationModelRequest>
  void DescribeComputationModelAsync(const DescribeComputationModelRequestT& request,
                                     const DescribeComputationModelResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeComputationModel, request, handler, context);
  }

  /**
   * <p>Retrieves information about the execution summary of a computation
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeComputationModelExecutionSummary">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeComputationModelExecutionSummaryOutcome DescribeComputationModelExecutionSummary(
      const Model::DescribeComputationModelExecutionSummaryRequest& request) const;

  /**
   * A Callable wrapper for DescribeComputationModelExecutionSummary that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DescribeComputationModelExecutionSummaryRequestT = Model::DescribeComputationModelExecutionSummaryRequest>
  Model::DescribeComputationModelExecutionSummaryOutcomeCallable DescribeComputationModelExecutionSummaryCallable(
      const DescribeComputationModelExecutionSummaryRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeComputationModelExecutionSummary, request);
  }

  /**
   * An Async wrapper for DescribeComputationModelExecutionSummary that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DescribeComputationModelExecutionSummaryRequestT = Model::DescribeComputationModelExecutionSummaryRequest>
  void DescribeComputationModelExecutionSummaryAsync(
      const DescribeComputationModelExecutionSummaryRequestT& request,
      const DescribeComputationModelExecutionSummaryResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeComputationModelExecutionSummary, request, handler, context);
  }

  /**
   * <p>Retrieves information about a dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest& request) const;

  /**
   * A Callable wrapper for DescribeDashboard that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeDashboardRequestT = Model::DescribeDashboardRequest>
  Model::DescribeDashboardOutcomeCallable DescribeDashboardCallable(const DescribeDashboardRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeDashboard, request);
  }

  /**
   * An Async wrapper for DescribeDashboard that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeDashboardRequestT = Model::DescribeDashboardRequest>
  void DescribeDashboardAsync(const DescribeDashboardRequestT& request, const DescribeDashboardResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeDashboard, request, handler, context);
  }

  /**
   * <p>Retrieves information about a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDataset">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

  /**
   * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
  Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const DescribeDatasetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeDataset, request);
  }

  /**
   * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
  void DescribeDatasetAsync(const DescribeDatasetRequestT& request, const DescribeDatasetResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeDataset, request, handler, context);
  }

  /**
   * <p>Retrieves information about a dataset export job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDatasetExportJob">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeDatasetExportJobOutcome DescribeDatasetExportJob(const Model::DescribeDatasetExportJobRequest& request) const;

  /**
   * A Callable wrapper for DescribeDatasetExportJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeDatasetExportJobRequestT = Model::DescribeDatasetExportJobRequest>
  Model::DescribeDatasetExportJobOutcomeCallable DescribeDatasetExportJobCallable(const DescribeDatasetExportJobRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeDatasetExportJob, request);
  }

  /**
   * An Async wrapper for DescribeDatasetExportJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeDatasetExportJobRequestT = Model::DescribeDatasetExportJobRequest>
  void DescribeDatasetExportJobAsync(const DescribeDatasetExportJobRequestT& request,
                                     const DescribeDatasetExportJobResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeDatasetExportJob, request, handler, context);
  }

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
  virtual Model::DescribeDefaultEncryptionConfigurationOutcome DescribeDefaultEncryptionConfiguration(
      const Model::DescribeDefaultEncryptionConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeDefaultEncryptionConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DescribeDefaultEncryptionConfigurationRequestT = Model::DescribeDefaultEncryptionConfigurationRequest>
  Model::DescribeDefaultEncryptionConfigurationOutcomeCallable DescribeDefaultEncryptionConfigurationCallable(
      const DescribeDefaultEncryptionConfigurationRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeDefaultEncryptionConfiguration, request);
  }

  /**
   * An Async wrapper for DescribeDefaultEncryptionConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DescribeDefaultEncryptionConfigurationRequestT = Model::DescribeDefaultEncryptionConfigurationRequest>
  void DescribeDefaultEncryptionConfigurationAsync(const DescribeDefaultEncryptionConfigurationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                   const DescribeDefaultEncryptionConfigurationRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeDefaultEncryptionConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific enrichment job, including its
   * current status, configuration, and timestamps.</p> <h2>Use Cases</h2> <ul>
   * <li>Monitor job progress by checking status updates with
   * DescribeEnrichmentJob</li> <li>Retrieve the complete job configuration submitted
   * during creation</li> <li>Debug failed jobs by examining the failureMessage
   * field</li> <li>Track job lifecycle with creation, update, completion, and
   * cancellation timestamps</li> </ul> <h2>Status Monitoring</h2> <p>Jobs progress
   * through statuses: PENDING → RUNNING → terminal state</p> <p>Terminal states:</p>
   * <ul> <li>COMPLETED: Job finished successfully; query IoT SiteWise for semantic
   * search results</li> <li>FAILED: Job encountered an error; check failureMessage
   * for details</li> <li>TIMED_OUT: Job exceeded maximum processing time</li>
   * <li>CANCELLED: Job was cancelled via CancelEnrichmentJob</li> </ul> <h2>Response
   * Fields</h2> <p>The response includes:</p> <ul> <li>Current job status and
   * type</li> <li>Full job configuration as originally submitted</li> <li>Lifecycle
   * timestamps (created, updated, completed, cancelled)</li> <li>Failure details if
   * status is FAILED</li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeEnrichmentJob">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeEnrichmentJobOutcome DescribeEnrichmentJob(const Model::DescribeEnrichmentJobRequest& request) const;

  /**
   * A Callable wrapper for DescribeEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeEnrichmentJobRequestT = Model::DescribeEnrichmentJobRequest>
  Model::DescribeEnrichmentJobOutcomeCallable DescribeEnrichmentJobCallable(const DescribeEnrichmentJobRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeEnrichmentJob, request);
  }

  /**
   * An Async wrapper for DescribeEnrichmentJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeEnrichmentJobRequestT = Model::DescribeEnrichmentJobRequest>
  void DescribeEnrichmentJobAsync(const DescribeEnrichmentJobRequestT& request, const DescribeEnrichmentJobResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeEnrichmentJob, request, handler, context);
  }

  /**
   * <p>Retrieves information about the execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeExecution">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest& request) const;

  /**
   * A Callable wrapper for DescribeExecution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeExecutionRequestT = Model::DescribeExecutionRequest>
  Model::DescribeExecutionOutcomeCallable DescribeExecutionCallable(const DescribeExecutionRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeExecution, request);
  }

  /**
   * An Async wrapper for DescribeExecution that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeExecutionRequestT = Model::DescribeExecutionRequest>
  void DescribeExecutionAsync(const DescribeExecutionRequestT& request, const DescribeExecutionResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeExecution, request, handler, context);
  }

  /**
   * <p>Retrieves information about a gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeGatewayOutcome DescribeGateway(const Model::DescribeGatewayRequest& request) const;

  /**
   * A Callable wrapper for DescribeGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeGatewayRequestT = Model::DescribeGatewayRequest>
  Model::DescribeGatewayOutcomeCallable DescribeGatewayCallable(const DescribeGatewayRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeGateway, request);
  }

  /**
   * An Async wrapper for DescribeGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeGatewayRequestT = Model::DescribeGatewayRequest>
  void DescribeGatewayAsync(const DescribeGatewayRequestT& request, const DescribeGatewayResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeGateway, request, handler, context);
  }

  /**
   * <p>Each gateway capability defines data sources for a gateway. This is the
   * namespace of the gateway capability.</p> <p>. The namespace follows the format
   * <code>service:capability:version</code>, where:</p> <ul> <li> <p>
   * <code>service</code> - The service providing the capability, or
   * <code>iotsitewise</code>.</p> </li> <li> <p> <code>capability</code> - The
   * specific capability type. Options include: <code>opcuacollector</code> for the
   * OPC UA data source collector, or <code>publisher</code> for data publisher
   * capability.</p> </li> <li> <p> <code>version</code> - The version number of the
   * capability. Option include <code>2</code> for Classic streams, V2 gateways, and
   * <code>3</code> for MQTT-enabled, V3 gateways.</p> </li> </ul> <p>After updating
   * a capability configuration, the sync status becomes <code>OUT_OF_SYNC</code>
   * until the gateway processes the configuration.Use
   * <code>DescribeGatewayCapabilityConfiguration</code> to check the sync status and
   * verify the configuration was applied.</p> <p>A gateway can have multiple
   * capability configurations with different namespaces.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeGatewayCapabilityConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeGatewayCapabilityConfigurationOutcome DescribeGatewayCapabilityConfiguration(
      const Model::DescribeGatewayCapabilityConfigurationRequest& request) const;

  /**
   * A Callable wrapper for DescribeGatewayCapabilityConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DescribeGatewayCapabilityConfigurationRequestT = Model::DescribeGatewayCapabilityConfigurationRequest>
  Model::DescribeGatewayCapabilityConfigurationOutcomeCallable DescribeGatewayCapabilityConfigurationCallable(
      const DescribeGatewayCapabilityConfigurationRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeGatewayCapabilityConfiguration, request);
  }

  /**
   * An Async wrapper for DescribeGatewayCapabilityConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DescribeGatewayCapabilityConfigurationRequestT = Model::DescribeGatewayCapabilityConfigurationRequest>
  void DescribeGatewayCapabilityConfigurationAsync(const DescribeGatewayCapabilityConfigurationRequestT& request,
                                                   const DescribeGatewayCapabilityConfigurationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeGatewayCapabilityConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves the current IoT SiteWise logging options.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeLoggingOptions">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeLoggingOptions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeLoggingOptionsRequestT = Model::DescribeLoggingOptionsRequest>
  Model::DescribeLoggingOptionsOutcomeCallable DescribeLoggingOptionsCallable(const DescribeLoggingOptionsRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeLoggingOptions, request);
  }

  /**
   * An Async wrapper for DescribeLoggingOptions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeLoggingOptionsRequestT = Model::DescribeLoggingOptionsRequest>
  void DescribeLoggingOptionsAsync(const DescribeLoggingOptionsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const DescribeLoggingOptionsRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeLoggingOptions, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific pipeline in a
   * workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribePipelineOutcome DescribePipeline(const Model::DescribePipelineRequest& request) const;

  /**
   * A Callable wrapper for DescribePipeline that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribePipelineRequestT = Model::DescribePipelineRequest>
  Model::DescribePipelineOutcomeCallable DescribePipelineCallable(const DescribePipelineRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribePipeline, request);
  }

  /**
   * An Async wrapper for DescribePipeline that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribePipelineRequestT = Model::DescribePipelineRequest>
  void DescribePipelineAsync(const DescribePipelineRequestT& request, const DescribePipelineResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribePipeline, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific pipeline execution, including
   * the overall execution status and the status of each individual compute node. Use
   * this operation to monitor execution progress and inspect per-node results,
   * environment variables, and error details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePipelineExecution">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribePipelineExecutionOutcome DescribePipelineExecution(const Model::DescribePipelineExecutionRequest& request) const;

  /**
   * A Callable wrapper for DescribePipelineExecution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribePipelineExecutionRequestT = Model::DescribePipelineExecutionRequest>
  Model::DescribePipelineExecutionOutcomeCallable DescribePipelineExecutionCallable(
      const DescribePipelineExecutionRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribePipelineExecution, request);
  }

  /**
   * An Async wrapper for DescribePipelineExecution that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribePipelineExecutionRequestT = Model::DescribePipelineExecutionRequest>
  void DescribePipelineExecutionAsync(const DescribePipelineExecutionRequestT& request,
                                      const DescribePipelineExecutionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribePipelineExecution, request, handler, context);
  }

  /**
   * <p>Retrieves information about a portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePortal">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribePortalOutcome DescribePortal(const Model::DescribePortalRequest& request) const;

  /**
   * A Callable wrapper for DescribePortal that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribePortalRequestT = Model::DescribePortalRequest>
  Model::DescribePortalOutcomeCallable DescribePortalCallable(const DescribePortalRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribePortal, request);
  }

  /**
   * An Async wrapper for DescribePortal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribePortalRequestT = Model::DescribePortalRequest>
  void DescribePortalAsync(const DescribePortalRequestT& request, const DescribePortalResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribePortal, request, handler, context);
  }

  /**
   * <p>Retrieves information about a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeProject">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

  /**
   * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeProjectRequestT = Model::DescribeProjectRequest>
  Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const DescribeProjectRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeProject, request);
  }

  /**
   * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeProjectRequestT = Model::DescribeProjectRequest>
  void DescribeProjectAsync(const DescribeProjectRequestT& request, const DescribeProjectResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeProject, request, handler, context);
  }

  /**
   * <p>Retrieves information about a query, including its status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeQuery">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeQueryOutcome DescribeQuery(const Model::DescribeQueryRequest& request) const;

  /**
   * A Callable wrapper for DescribeQuery that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeQueryRequestT = Model::DescribeQueryRequest>
  Model::DescribeQueryOutcomeCallable DescribeQueryCallable(const DescribeQueryRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeQuery, request);
  }

  /**
   * An Async wrapper for DescribeQuery that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeQueryRequestT = Model::DescribeQueryRequest>
  void DescribeQueryAsync(const DescribeQueryRequestT& request, const DescribeQueryResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeQuery, request, handler, context);
  }

  /**
   * <p>Returns the current status and metadata of a single search, including the
   * query that was submitted, the search type, and — when the search has failed —
   * the reason. Use this to poll a search started with <code>StartSearch</code>
   * until it reaches a terminal status (<code>SUCCEEDED</code> or
   * <code>FAILED</code>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeSearch">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeSearchOutcome DescribeSearch(const Model::DescribeSearchRequest& request) const;

  /**
   * A Callable wrapper for DescribeSearch that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeSearchRequestT = Model::DescribeSearchRequest>
  Model::DescribeSearchOutcomeCallable DescribeSearchCallable(const DescribeSearchRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeSearch, request);
  }

  /**
   * An Async wrapper for DescribeSearch that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeSearchRequestT = Model::DescribeSearchRequest>
  void DescribeSearchAsync(const DescribeSearchRequestT& request, const DescribeSearchResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeSearch, request, handler, context);
  }

  /**
   * <p>Retrieves information about the storage configuration for IoT
   * SiteWise.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeStorageConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeStorageConfigurationOutcome DescribeStorageConfiguration(
      const Model::DescribeStorageConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeStorageConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeStorageConfigurationRequestT = Model::DescribeStorageConfigurationRequest>
  Model::DescribeStorageConfigurationOutcomeCallable DescribeStorageConfigurationCallable(
      const DescribeStorageConfigurationRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeStorageConfiguration, request);
  }

  /**
   * An Async wrapper for DescribeStorageConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeStorageConfigurationRequestT = Model::DescribeStorageConfigurationRequest>
  void DescribeStorageConfigurationAsync(const DescribeStorageConfigurationResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const DescribeStorageConfigurationRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeStorageConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific task in a
   * workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeTask">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest& request) const;

  /**
   * A Callable wrapper for DescribeTask that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeTaskRequestT = Model::DescribeTaskRequest>
  Model::DescribeTaskOutcomeCallable DescribeTaskCallable(const DescribeTaskRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeTask, request);
  }

  /**
   * An Async wrapper for DescribeTask that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeTaskRequestT = Model::DescribeTaskRequest>
  void DescribeTaskAsync(const DescribeTaskRequestT& request, const DescribeTaskResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeTask, request, handler, context);
  }

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
  virtual Model::DescribeTimeSeriesOutcome DescribeTimeSeries(const Model::DescribeTimeSeriesRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeTimeSeries that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeTimeSeriesRequestT = Model::DescribeTimeSeriesRequest>
  Model::DescribeTimeSeriesOutcomeCallable DescribeTimeSeriesCallable(const DescribeTimeSeriesRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeTimeSeries, request);
  }

  /**
   * An Async wrapper for DescribeTimeSeries that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeTimeSeriesRequestT = Model::DescribeTimeSeriesRequest>
  void DescribeTimeSeriesAsync(const DescribeTimeSeriesResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const DescribeTimeSeriesRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeTimeSeries, request, handler, context);
  }

  /**
   * <p>Retrieves information about a workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeWorkspace">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest& request) const;

  /**
   * A Callable wrapper for DescribeWorkspace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeWorkspaceRequestT = Model::DescribeWorkspaceRequest>
  Model::DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const DescribeWorkspaceRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DescribeWorkspace, request);
  }

  /**
   * An Async wrapper for DescribeWorkspace that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeWorkspaceRequestT = Model::DescribeWorkspaceRequest>
  void DescribeWorkspaceAsync(const DescribeWorkspaceRequestT& request, const DescribeWorkspaceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DescribeWorkspace, request, handler, context);
  }

  /**
   * <p>Disassociates a child asset from the given parent asset through a hierarchy
   * defined in the parent asset's model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateAssetsOutcome DisassociateAssets(const Model::DisassociateAssetsRequest& request) const;

  /**
   * A Callable wrapper for DisassociateAssets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateAssetsRequestT = Model::DisassociateAssetsRequest>
  Model::DisassociateAssetsOutcomeCallable DisassociateAssetsCallable(const DisassociateAssetsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DisassociateAssets, request);
  }

  /**
   * An Async wrapper for DisassociateAssets that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DisassociateAssetsRequestT = Model::DisassociateAssetsRequest>
  void DisassociateAssetsAsync(const DisassociateAssetsRequestT& request, const DisassociateAssetsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DisassociateAssets, request, handler, context);
  }

  /**
   * <p>Disassociates a time series (data stream) from an asset
   * property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DisassociateTimeSeriesFromAssetProperty">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateTimeSeriesFromAssetPropertyOutcome DisassociateTimeSeriesFromAssetProperty(
      const Model::DisassociateTimeSeriesFromAssetPropertyRequest& request) const;

  /**
   * A Callable wrapper for DisassociateTimeSeriesFromAssetProperty that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DisassociateTimeSeriesFromAssetPropertyRequestT = Model::DisassociateTimeSeriesFromAssetPropertyRequest>
  Model::DisassociateTimeSeriesFromAssetPropertyOutcomeCallable DisassociateTimeSeriesFromAssetPropertyCallable(
      const DisassociateTimeSeriesFromAssetPropertyRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::DisassociateTimeSeriesFromAssetProperty, request);
  }

  /**
   * An Async wrapper for DisassociateTimeSeriesFromAssetProperty that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DisassociateTimeSeriesFromAssetPropertyRequestT = Model::DisassociateTimeSeriesFromAssetPropertyRequest>
  void DisassociateTimeSeriesFromAssetPropertyAsync(const DisassociateTimeSeriesFromAssetPropertyRequestT& request,
                                                    const DisassociateTimeSeriesFromAssetPropertyResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::DisassociateTimeSeriesFromAssetProperty, request, handler, context);
  }

  /**
   * <p>Executes an action on a target resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ExecuteAction">AWS
   * API Reference</a></p>
   */
  virtual Model::ExecuteActionOutcome ExecuteAction(const Model::ExecuteActionRequest& request) const;

  /**
   * A Callable wrapper for ExecuteAction that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ExecuteActionRequestT = Model::ExecuteActionRequest>
  Model::ExecuteActionOutcomeCallable ExecuteActionCallable(const ExecuteActionRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ExecuteAction, request);
  }

  /**
   * An Async wrapper for ExecuteAction that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ExecuteActionRequestT = Model::ExecuteActionRequest>
  void ExecuteActionAsync(const ExecuteActionRequestT& request, const ExecuteActionResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ExecuteAction, request, handler, context);
  }

  /**
   * <p>Run SQL queries to retrieve metadata and time-series data from asset models,
   * assets, measurements, metrics, transforms, and aggregates.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ExecuteQuery">AWS
   * API Reference</a></p>
   */
  virtual Model::ExecuteQueryOutcome ExecuteQuery(const Model::ExecuteQueryRequest& request) const;

  /**
   * A Callable wrapper for ExecuteQuery that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ExecuteQueryRequestT = Model::ExecuteQueryRequest>
  Model::ExecuteQueryOutcomeCallable ExecuteQueryCallable(const ExecuteQueryRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ExecuteQuery, request);
  }

  /**
   * An Async wrapper for ExecuteQuery that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ExecuteQueryRequestT = Model::ExecuteQueryRequest>
  void ExecuteQueryAsync(const ExecuteQueryRequestT& request, const ExecuteQueryResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ExecuteQuery, request, handler, context);
  }

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
  virtual Model::GetAssetPropertyAggregatesOutcome GetAssetPropertyAggregates(
      const Model::GetAssetPropertyAggregatesRequest& request) const;

  /**
   * A Callable wrapper for GetAssetPropertyAggregates that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetAssetPropertyAggregatesRequestT = Model::GetAssetPropertyAggregatesRequest>
  Model::GetAssetPropertyAggregatesOutcomeCallable GetAssetPropertyAggregatesCallable(
      const GetAssetPropertyAggregatesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::GetAssetPropertyAggregates, request);
  }

  /**
   * An Async wrapper for GetAssetPropertyAggregates that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAssetPropertyAggregatesRequestT = Model::GetAssetPropertyAggregatesRequest>
  void GetAssetPropertyAggregatesAsync(const GetAssetPropertyAggregatesRequestT& request,
                                       const GetAssetPropertyAggregatesResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::GetAssetPropertyAggregates, request, handler, context);
  }

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
  virtual Model::GetAssetPropertyValueOutcome GetAssetPropertyValue(const Model::GetAssetPropertyValueRequest& request = {}) const;

  /**
   * A Callable wrapper for GetAssetPropertyValue that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAssetPropertyValueRequestT = Model::GetAssetPropertyValueRequest>
  Model::GetAssetPropertyValueOutcomeCallable GetAssetPropertyValueCallable(const GetAssetPropertyValueRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::GetAssetPropertyValue, request);
  }

  /**
   * An Async wrapper for GetAssetPropertyValue that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAssetPropertyValueRequestT = Model::GetAssetPropertyValueRequest>
  void GetAssetPropertyValueAsync(const GetAssetPropertyValueResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const GetAssetPropertyValueRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::GetAssetPropertyValue, request, handler, context);
  }

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
  virtual Model::GetAssetPropertyValueHistoryOutcome GetAssetPropertyValueHistory(
      const Model::GetAssetPropertyValueHistoryRequest& request = {}) const;

  /**
   * A Callable wrapper for GetAssetPropertyValueHistory that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetAssetPropertyValueHistoryRequestT = Model::GetAssetPropertyValueHistoryRequest>
  Model::GetAssetPropertyValueHistoryOutcomeCallable GetAssetPropertyValueHistoryCallable(
      const GetAssetPropertyValueHistoryRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::GetAssetPropertyValueHistory, request);
  }

  /**
   * An Async wrapper for GetAssetPropertyValueHistory that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAssetPropertyValueHistoryRequestT = Model::GetAssetPropertyValueHistoryRequest>
  void GetAssetPropertyValueHistoryAsync(const GetAssetPropertyValueHistoryResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const GetAssetPropertyValueHistoryRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::GetAssetPropertyValueHistory, request, handler, context);
  }

  /**
   * <p>Retrieves video data for a specific time range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetCaptureData">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCaptureDataOutcome GetCaptureData(const Model::GetCaptureDataRequest& request) const;

  /**
   * A Callable wrapper for GetCaptureData that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetCaptureDataRequestT = Model::GetCaptureDataRequest>
  Model::GetCaptureDataOutcomeCallable GetCaptureDataCallable(const GetCaptureDataRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::GetCaptureData, request);
  }

  /**
   * An Async wrapper for GetCaptureData that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetCaptureDataRequestT = Model::GetCaptureDataRequest>
  void GetCaptureDataAsync(const GetCaptureDataRequestT& request, const GetCaptureDataResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::GetCaptureData, request, handler, context);
  }

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
  virtual Model::GetInterpolatedAssetPropertyValuesOutcome GetInterpolatedAssetPropertyValues(
      const Model::GetInterpolatedAssetPropertyValuesRequest& request) const;

  /**
   * A Callable wrapper for GetInterpolatedAssetPropertyValues that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename GetInterpolatedAssetPropertyValuesRequestT = Model::GetInterpolatedAssetPropertyValuesRequest>
  Model::GetInterpolatedAssetPropertyValuesOutcomeCallable GetInterpolatedAssetPropertyValuesCallable(
      const GetInterpolatedAssetPropertyValuesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::GetInterpolatedAssetPropertyValues, request);
  }

  /**
   * An Async wrapper for GetInterpolatedAssetPropertyValues that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetInterpolatedAssetPropertyValuesRequestT = Model::GetInterpolatedAssetPropertyValuesRequest>
  void GetInterpolatedAssetPropertyValuesAsync(const GetInterpolatedAssetPropertyValuesRequestT& request,
                                               const GetInterpolatedAssetPropertyValuesResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::GetInterpolatedAssetPropertyValues, request, handler, context);
  }

  /**
   * <p>Retrieves the paginated results of a query. Returns empty rows if the query
   * is not yet complete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetQueryResults">AWS
   * API Reference</a></p>
   */
  virtual Model::GetQueryResultsOutcome GetQueryResults(const Model::GetQueryResultsRequest& request) const;

  /**
   * A Callable wrapper for GetQueryResults that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetQueryResultsRequestT = Model::GetQueryResultsRequest>
  Model::GetQueryResultsOutcomeCallable GetQueryResultsCallable(const GetQueryResultsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::GetQueryResults, request);
  }

  /**
   * An Async wrapper for GetQueryResults that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetQueryResultsRequestT = Model::GetQueryResultsRequest>
  void GetQueryResultsAsync(const GetQueryResultsRequestT& request, const GetQueryResultsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::GetQueryResults, request, handler, context);
  }

  /**
   * <p>Retrieves the ranked results of a search, ordered by descending relevance
   * score. Results are available only after the search has reached the
   * <code>SUCCEEDED</code> status. Calling this on a search that exists but has not
   * yet completed returns <code>InvalidRequestException</code>, while calling it on
   * a search that does not exist returns <code>ResourceNotFoundException</code>. The
   * response is paginated: when <code>nextToken</code> is present, pass it on a
   * subsequent call to retrieve the next page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetSearchResults">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSearchResultsOutcome GetSearchResults(const Model::GetSearchResultsRequest& request) const;

  /**
   * A Callable wrapper for GetSearchResults that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetSearchResultsRequestT = Model::GetSearchResultsRequest>
  Model::GetSearchResultsOutcomeCallable GetSearchResultsCallable(const GetSearchResultsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::GetSearchResults, request);
  }

  /**
   * An Async wrapper for GetSearchResults that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetSearchResultsRequestT = Model::GetSearchResultsRequest>
  void GetSearchResultsAsync(const GetSearchResultsRequestT& request, const GetSearchResultsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::GetSearchResults, request, handler, context);
  }

  /**
   * <p>Invokes SiteWise Assistant to start or continue a conversation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/InvokeAssistant">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeAssistantOutcome InvokeAssistant(Model::InvokeAssistantRequest& request) const;

  /**
   * A Callable wrapper for InvokeAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename InvokeAssistantRequestT = Model::InvokeAssistantRequest>
  Model::InvokeAssistantOutcomeCallable InvokeAssistantCallable(InvokeAssistantRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::InvokeAssistant, request);
  }

  /**
   * An Async wrapper for InvokeAssistant that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename InvokeAssistantRequestT = Model::InvokeAssistantRequest>
  void InvokeAssistantAsync(InvokeAssistantRequestT& request, const InvokeAssistantResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::InvokeAssistant, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of access policies for an identity (an IAM
   * Identity Center user, an IAM Identity Center group, or an IAM user) or an IoT
   * SiteWise Monitor resource (a portal or project).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAccessPolicies">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAccessPoliciesOutcome ListAccessPolicies(const Model::ListAccessPoliciesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAccessPolicies that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAccessPoliciesRequestT = Model::ListAccessPoliciesRequest>
  Model::ListAccessPoliciesOutcomeCallable ListAccessPoliciesCallable(const ListAccessPoliciesRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListAccessPolicies, request);
  }

  /**
   * An Async wrapper for ListAccessPolicies that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAccessPoliciesRequestT = Model::ListAccessPoliciesRequest>
  void ListAccessPoliciesAsync(const ListAccessPoliciesResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const ListAccessPoliciesRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListAccessPolicies, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of actions for a specific target
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListActions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListActionsOutcome ListActions(const Model::ListActionsRequest& request) const;

  /**
   * A Callable wrapper for ListActions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListActionsRequestT = Model::ListActionsRequest>
  Model::ListActionsOutcomeCallable ListActionsCallable(const ListActionsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListActions, request);
  }

  /**
   * An Async wrapper for ListActions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListActionsRequestT = Model::ListActionsRequest>
  void ListActionsAsync(const ListActionsRequestT& request, const ListActionsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListActions, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of existing applications</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListApplications">AWS
   * API Reference</a></p>
   */
  virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListApplicationsRequestT = Model::ListApplicationsRequest>
  Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListApplications, request);
  }

  /**
   * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListApplicationsRequestT = Model::ListApplicationsRequest>
  void ListApplicationsAsync(const ListApplicationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListApplicationsRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListApplications, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of composite models associated with the asset
   * model</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModelCompositeModels">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssetModelCompositeModelsOutcome ListAssetModelCompositeModels(
      const Model::ListAssetModelCompositeModelsRequest& request) const;

  /**
   * A Callable wrapper for ListAssetModelCompositeModels that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAssetModelCompositeModelsRequestT = Model::ListAssetModelCompositeModelsRequest>
  Model::ListAssetModelCompositeModelsOutcomeCallable ListAssetModelCompositeModelsCallable(
      const ListAssetModelCompositeModelsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListAssetModelCompositeModels, request);
  }

  /**
   * An Async wrapper for ListAssetModelCompositeModels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAssetModelCompositeModelsRequestT = Model::ListAssetModelCompositeModelsRequest>
  void ListAssetModelCompositeModelsAsync(const ListAssetModelCompositeModelsRequestT& request,
                                          const ListAssetModelCompositeModelsResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListAssetModelCompositeModels, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of properties associated with an asset model. If
   * you update properties associated with the model before you finish listing all
   * the properties, you need to start all over again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModelProperties">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssetModelPropertiesOutcome ListAssetModelProperties(const Model::ListAssetModelPropertiesRequest& request) const;

  /**
   * A Callable wrapper for ListAssetModelProperties that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAssetModelPropertiesRequestT = Model::ListAssetModelPropertiesRequest>
  Model::ListAssetModelPropertiesOutcomeCallable ListAssetModelPropertiesCallable(const ListAssetModelPropertiesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListAssetModelProperties, request);
  }

  /**
   * An Async wrapper for ListAssetModelProperties that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAssetModelPropertiesRequestT = Model::ListAssetModelPropertiesRequest>
  void ListAssetModelPropertiesAsync(const ListAssetModelPropertiesRequestT& request,
                                     const ListAssetModelPropertiesResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListAssetModelProperties, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of summaries of all asset models.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetModels">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssetModelsOutcome ListAssetModels(const Model::ListAssetModelsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAssetModels that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListAssetModelsRequestT = Model::ListAssetModelsRequest>
  Model::ListAssetModelsOutcomeCallable ListAssetModelsCallable(const ListAssetModelsRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListAssetModels, request);
  }

  /**
   * An Async wrapper for ListAssetModels that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListAssetModelsRequestT = Model::ListAssetModelsRequest>
  void ListAssetModelsAsync(const ListAssetModelsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListAssetModelsRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListAssetModels, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of properties associated with an asset. If you
   * update properties associated with the model before you finish listing all the
   * properties, you need to start all over again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetProperties">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssetPropertiesOutcome ListAssetProperties(const Model::ListAssetPropertiesRequest& request) const;

  /**
   * A Callable wrapper for ListAssetProperties that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAssetPropertiesRequestT = Model::ListAssetPropertiesRequest>
  Model::ListAssetPropertiesOutcomeCallable ListAssetPropertiesCallable(const ListAssetPropertiesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListAssetProperties, request);
  }

  /**
   * An Async wrapper for ListAssetProperties that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAssetPropertiesRequestT = Model::ListAssetPropertiesRequest>
  void ListAssetPropertiesAsync(const ListAssetPropertiesRequestT& request, const ListAssetPropertiesResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListAssetProperties, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of asset relationships for an asset. You can use
   * this operation to identify an asset's root asset and all associated assets
   * between that asset and its root.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssetRelationships">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssetRelationshipsOutcome ListAssetRelationships(const Model::ListAssetRelationshipsRequest& request) const;

  /**
   * A Callable wrapper for ListAssetRelationships that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAssetRelationshipsRequestT = Model::ListAssetRelationshipsRequest>
  Model::ListAssetRelationshipsOutcomeCallable ListAssetRelationshipsCallable(const ListAssetRelationshipsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListAssetRelationships, request);
  }

  /**
   * An Async wrapper for ListAssetRelationships that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAssetRelationshipsRequestT = Model::ListAssetRelationshipsRequest>
  void ListAssetRelationshipsAsync(const ListAssetRelationshipsRequestT& request,
                                   const ListAssetRelationshipsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListAssetRelationships, request, handler, context);
  }

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
  virtual Model::ListAssetsOutcome ListAssets(const Model::ListAssetsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAssets that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListAssetsRequestT = Model::ListAssetsRequest>
  Model::ListAssetsOutcomeCallable ListAssetsCallable(const ListAssetsRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListAssets, request);
  }

  /**
   * An Async wrapper for ListAssets that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListAssetsRequestT = Model::ListAssetsRequest>
  void ListAssetsAsync(const ListAssetsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                       const ListAssetsRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListAssets, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of associated assets.</p> <p>You can use this
   * operation to do the following:</p> <ul> <li> <p> <code>CHILD</code> - List all
   * child assets associated to the asset.</p> </li> <li> <p> <code>PARENT</code> -
   * List the asset's parent asset.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListAssociatedAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssociatedAssetsOutcome ListAssociatedAssets(const Model::ListAssociatedAssetsRequest& request) const;

  /**
   * A Callable wrapper for ListAssociatedAssets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAssociatedAssetsRequestT = Model::ListAssociatedAssetsRequest>
  Model::ListAssociatedAssetsOutcomeCallable ListAssociatedAssetsCallable(const ListAssociatedAssetsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListAssociatedAssets, request);
  }

  /**
   * An Async wrapper for ListAssociatedAssets that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAssociatedAssetsRequestT = Model::ListAssociatedAssetsRequest>
  void ListAssociatedAssetsAsync(const ListAssociatedAssetsRequestT& request, const ListAssociatedAssetsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListAssociatedAssets, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of bulk import job requests. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ListBulkImportJobs.html">List
   * bulk import jobs (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListBulkImportJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBulkImportJobsOutcome ListBulkImportJobs(const Model::ListBulkImportJobsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListBulkImportJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBulkImportJobsRequestT = Model::ListBulkImportJobsRequest>
  Model::ListBulkImportJobsOutcomeCallable ListBulkImportJobsCallable(const ListBulkImportJobsRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListBulkImportJobs, request);
  }

  /**
   * An Async wrapper for ListBulkImportJobs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListBulkImportJobsRequestT = Model::ListBulkImportJobsRequest>
  void ListBulkImportJobsAsync(const ListBulkImportJobsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const ListBulkImportJobsRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListBulkImportJobs, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of composition relationships for an asset model of
   * type <code>COMPONENT_MODEL</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListCompositionRelationships">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCompositionRelationshipsOutcome ListCompositionRelationships(
      const Model::ListCompositionRelationshipsRequest& request) const;

  /**
   * A Callable wrapper for ListCompositionRelationships that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListCompositionRelationshipsRequestT = Model::ListCompositionRelationshipsRequest>
  Model::ListCompositionRelationshipsOutcomeCallable ListCompositionRelationshipsCallable(
      const ListCompositionRelationshipsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListCompositionRelationships, request);
  }

  /**
   * An Async wrapper for ListCompositionRelationships that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListCompositionRelationshipsRequestT = Model::ListCompositionRelationshipsRequest>
  void ListCompositionRelationshipsAsync(const ListCompositionRelationshipsRequestT& request,
                                         const ListCompositionRelationshipsResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListCompositionRelationships, request, handler, context);
  }

  /**
   * <p> Lists all data binding usages for computation models. This allows to
   * identify where specific data bindings are being utilized across the computation
   * models. This track dependencies between data sources and computation models.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListComputationModelDataBindingUsages">AWS
   * API Reference</a></p>
   */
  virtual Model::ListComputationModelDataBindingUsagesOutcome ListComputationModelDataBindingUsages(
      const Model::ListComputationModelDataBindingUsagesRequest& request) const;

  /**
   * A Callable wrapper for ListComputationModelDataBindingUsages that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListComputationModelDataBindingUsagesRequestT = Model::ListComputationModelDataBindingUsagesRequest>
  Model::ListComputationModelDataBindingUsagesOutcomeCallable ListComputationModelDataBindingUsagesCallable(
      const ListComputationModelDataBindingUsagesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListComputationModelDataBindingUsages, request);
  }

  /**
   * An Async wrapper for ListComputationModelDataBindingUsages that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListComputationModelDataBindingUsagesRequestT = Model::ListComputationModelDataBindingUsagesRequest>
  void ListComputationModelDataBindingUsagesAsync(const ListComputationModelDataBindingUsagesRequestT& request,
                                                  const ListComputationModelDataBindingUsagesResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListComputationModelDataBindingUsages, request, handler, context);
  }

  /**
   * <p>Lists all distinct resources that are resolved from the executed actions of
   * the computation model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListComputationModelResolveToResources">AWS
   * API Reference</a></p>
   */
  virtual Model::ListComputationModelResolveToResourcesOutcome ListComputationModelResolveToResources(
      const Model::ListComputationModelResolveToResourcesRequest& request) const;

  /**
   * A Callable wrapper for ListComputationModelResolveToResources that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListComputationModelResolveToResourcesRequestT = Model::ListComputationModelResolveToResourcesRequest>
  Model::ListComputationModelResolveToResourcesOutcomeCallable ListComputationModelResolveToResourcesCallable(
      const ListComputationModelResolveToResourcesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListComputationModelResolveToResources, request);
  }

  /**
   * An Async wrapper for ListComputationModelResolveToResources that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListComputationModelResolveToResourcesRequestT = Model::ListComputationModelResolveToResourcesRequest>
  void ListComputationModelResolveToResourcesAsync(const ListComputationModelResolveToResourcesRequestT& request,
                                                   const ListComputationModelResolveToResourcesResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListComputationModelResolveToResources, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of summaries of all computation
   * models.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListComputationModels">AWS
   * API Reference</a></p>
   */
  virtual Model::ListComputationModelsOutcome ListComputationModels(const Model::ListComputationModelsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListComputationModels that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListComputationModelsRequestT = Model::ListComputationModelsRequest>
  Model::ListComputationModelsOutcomeCallable ListComputationModelsCallable(const ListComputationModelsRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListComputationModels, request);
  }

  /**
   * An Async wrapper for ListComputationModels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListComputationModelsRequestT = Model::ListComputationModelsRequest>
  void ListComputationModelsAsync(const ListComputationModelsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ListComputationModelsRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListComputationModels, request, handler, context);
  }

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
  template <typename ListDashboardsRequestT = Model::ListDashboardsRequest>
  Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const ListDashboardsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListDashboards, request);
  }

  /**
   * An Async wrapper for ListDashboards that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDashboardsRequestT = Model::ListDashboardsRequest>
  void ListDashboardsAsync(const ListDashboardsRequestT& request, const ListDashboardsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListDashboards, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of data segment relationships for a session
   * dataset. Use this operation to find the curated datasets that reference data
   * segments of the specified session dataset. Use the <code>nextToken</code>
   * parameter to retrieve additional results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDatasetDataSegmentRelationships">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDatasetDataSegmentRelationshipsOutcome ListDatasetDataSegmentRelationships(
      const Model::ListDatasetDataSegmentRelationshipsRequest& request) const;

  /**
   * A Callable wrapper for ListDatasetDataSegmentRelationships that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListDatasetDataSegmentRelationshipsRequestT = Model::ListDatasetDataSegmentRelationshipsRequest>
  Model::ListDatasetDataSegmentRelationshipsOutcomeCallable ListDatasetDataSegmentRelationshipsCallable(
      const ListDatasetDataSegmentRelationshipsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListDatasetDataSegmentRelationships, request);
  }

  /**
   * An Async wrapper for ListDatasetDataSegmentRelationships that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListDatasetDataSegmentRelationshipsRequestT = Model::ListDatasetDataSegmentRelationshipsRequest>
  void ListDatasetDataSegmentRelationshipsAsync(const ListDatasetDataSegmentRelationshipsRequestT& request,
                                                const ListDatasetDataSegmentRelationshipsResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListDatasetDataSegmentRelationships, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of data segments associated with a dataset. Use
   * the <code>nextToken</code> parameter to retrieve additional
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDatasetDataSegments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDatasetDataSegmentsOutcome ListDatasetDataSegments(const Model::ListDatasetDataSegmentsRequest& request) const;

  /**
   * A Callable wrapper for ListDatasetDataSegments that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDatasetDataSegmentsRequestT = Model::ListDatasetDataSegmentsRequest>
  Model::ListDatasetDataSegmentsOutcomeCallable ListDatasetDataSegmentsCallable(const ListDatasetDataSegmentsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListDatasetDataSegments, request);
  }

  /**
   * An Async wrapper for ListDatasetDataSegments that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListDatasetDataSegmentsRequestT = Model::ListDatasetDataSegmentsRequest>
  void ListDatasetDataSegmentsAsync(const ListDatasetDataSegmentsRequestT& request,
                                    const ListDatasetDataSegmentsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListDatasetDataSegments, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of dataset export jobs for a
   * workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDatasetExportJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDatasetExportJobsOutcome ListDatasetExportJobs(const Model::ListDatasetExportJobsRequest& request) const;

  /**
   * A Callable wrapper for ListDatasetExportJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDatasetExportJobsRequestT = Model::ListDatasetExportJobsRequest>
  Model::ListDatasetExportJobsOutcomeCallable ListDatasetExportJobsCallable(const ListDatasetExportJobsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListDatasetExportJobs, request);
  }

  /**
   * An Async wrapper for ListDatasetExportJobs that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListDatasetExportJobsRequestT = Model::ListDatasetExportJobsRequest>
  void ListDatasetExportJobsAsync(const ListDatasetExportJobsRequestT& request, const ListDatasetExportJobsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListDatasetExportJobs, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of datasets for a specific target
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDatasets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

  /**
   * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListDatasetsRequestT = Model::ListDatasetsRequest>
  Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const ListDatasetsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListDatasets, request);
  }

  /**
   * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDatasetsRequestT = Model::ListDatasetsRequest>
  void ListDatasetsAsync(const ListDatasetsRequestT& request, const ListDatasetsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListDatasets, request, handler, context);
  }

  /**
   * <p>Lists enrichment jobs within a workspace with optional filtering and
   * pagination. Results are ordered by createdAt timestamp descending (newest
   * first).</p> <h2>Filtering</h2> <p>Combine filters to narrow results:</p> <ul>
   * <li><strong>datasetId</strong>: Filter by dataset</li>
   * <li><strong>propertyAlias</strong> OR <strong>timeSeriesId</strong>: Filter by
   * time series (specify one, not both)</li> <li><strong>status</strong>: Filter by
   * job status (e.g., RUNNING to find active jobs)</li>
   * <li><strong>jobType</strong>: Filter by enrichment type (currently only
   * EVENT_DETECTION)</li> <li><strong>startDate</strong> and
   * <strong>endDate</strong>: Filter by job creation time range</li> </ul>
   * <h2>Important Constraints</h2> <ul> <li>You must specify either propertyAlias OR
   * timeSeriesId, but not both</li> <li>Attempting to specify both results in an
   * InvalidRequestException</li> <li>Date filters use ISO 8601 format</li>
   * <li>startDate is exclusive, endDate is inclusive</li> </ul> <h2>Pagination</h2>
   * <p>The operation returns up to maxResults jobs per page (default 50). If more
   * results exist, the response includes a nextToken. Submit this token in a
   * subsequent request to retrieve the next page.</p> <h2>Common Use Cases</h2> <ul>
   * <li>Find all running jobs: Filter by status=RUNNING</li> <li>List recent jobs
   * for a dataset: Filter by datasetId with optional date range</li> <li>Monitor
   * jobs for a specific sensor: Filter by propertyAlias or timeSeriesId</li>
   * <li>Track all event detection jobs: Filter by jobType=EVENT_DETECTION</li> </ul>
   * <h2>Performance</h2> <p>Performance is optimal when filtering by supported
   * fields (datasetId, propertyAlias, timeSeriesId, status, jobType).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListEnrichmentJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEnrichmentJobsOutcome ListEnrichmentJobs(const Model::ListEnrichmentJobsRequest& request) const;

  /**
   * A Callable wrapper for ListEnrichmentJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListEnrichmentJobsRequestT = Model::ListEnrichmentJobsRequest>
  Model::ListEnrichmentJobsOutcomeCallable ListEnrichmentJobsCallable(const ListEnrichmentJobsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListEnrichmentJobs, request);
  }

  /**
   * An Async wrapper for ListEnrichmentJobs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListEnrichmentJobsRequestT = Model::ListEnrichmentJobsRequest>
  void ListEnrichmentJobsAsync(const ListEnrichmentJobsRequestT& request, const ListEnrichmentJobsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListEnrichmentJobs, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of summaries of all executions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListExecutions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

  /**
   * A Callable wrapper for ListExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListExecutionsRequestT = Model::ListExecutionsRequest>
  Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const ListExecutionsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListExecutions, request);
  }

  /**
   * An Async wrapper for ListExecutions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListExecutionsRequestT = Model::ListExecutionsRequest>
  void ListExecutionsAsync(const ListExecutionsRequestT& request, const ListExecutionsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListExecutions, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListGateways">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request = {}) const;

  /**
   * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListGatewaysRequestT = Model::ListGatewaysRequest>
  Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const ListGatewaysRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListGateways, request);
  }

  /**
   * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListGatewaysRequestT = Model::ListGatewaysRequest>
  void ListGatewaysAsync(const ListGatewaysResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListGatewaysRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListGateways, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of asset models that have a specific interface
   * asset model applied to them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListInterfaceRelationships">AWS
   * API Reference</a></p>
   */
  virtual Model::ListInterfaceRelationshipsOutcome ListInterfaceRelationships(
      const Model::ListInterfaceRelationshipsRequest& request) const;

  /**
   * A Callable wrapper for ListInterfaceRelationships that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListInterfaceRelationshipsRequestT = Model::ListInterfaceRelationshipsRequest>
  Model::ListInterfaceRelationshipsOutcomeCallable ListInterfaceRelationshipsCallable(
      const ListInterfaceRelationshipsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListInterfaceRelationships, request);
  }

  /**
   * An Async wrapper for ListInterfaceRelationships that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListInterfaceRelationshipsRequestT = Model::ListInterfaceRelationshipsRequest>
  void ListInterfaceRelationshipsAsync(const ListInterfaceRelationshipsRequestT& request,
                                       const ListInterfaceRelationshipsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListInterfaceRelationships, request, handler, context);
  }

  /**
   * <p>Lists pipeline executions for a specific pipeline in a workspace. Supports
   * filtering by state and time range. State can be combined with either startTime
   * or endTime filters. Time range filters are grouped: use startTime filters
   * (startTimeAfter, startTimeBefore) or endTime filters (endTimeAfter,
   * endTimeBefore), but not both. Combining startTime and endTime filters returns an
   * InvalidRequestException. Note: endTime filters only return executions in
   * terminal states, as in-progress executions have no endTime.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPipelineExecutions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPipelineExecutionsOutcome ListPipelineExecutions(const Model::ListPipelineExecutionsRequest& request) const;

  /**
   * A Callable wrapper for ListPipelineExecutions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPipelineExecutionsRequestT = Model::ListPipelineExecutionsRequest>
  Model::ListPipelineExecutionsOutcomeCallable ListPipelineExecutionsCallable(const ListPipelineExecutionsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListPipelineExecutions, request);
  }

  /**
   * An Async wrapper for ListPipelineExecutions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPipelineExecutionsRequestT = Model::ListPipelineExecutionsRequest>
  void ListPipelineExecutionsAsync(const ListPipelineExecutionsRequestT& request,
                                   const ListPipelineExecutionsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListPipelineExecutions, request, handler, context);
  }

  /**
   * <p>Lists pipelines in a workspace. To get complete details about a pipeline, use
   * <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribePipeline.html">DescribePipeline</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPipelines">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

  /**
   * A Callable wrapper for ListPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPipelinesRequestT = Model::ListPipelinesRequest>
  Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const ListPipelinesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListPipelines, request);
  }

  /**
   * An Async wrapper for ListPipelines that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPipelinesRequestT = Model::ListPipelinesRequest>
  void ListPipelinesAsync(const ListPipelinesRequestT& request, const ListPipelinesResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListPipelines, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of IoT SiteWise Monitor portals.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPortals">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPortalsOutcome ListPortals(const Model::ListPortalsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPortals that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPortalsRequestT = Model::ListPortalsRequest>
  Model::ListPortalsOutcomeCallable ListPortalsCallable(const ListPortalsRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListPortals, request);
  }

  /**
   * An Async wrapper for ListPortals that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPortalsRequestT = Model::ListPortalsRequest>
  void ListPortalsAsync(const ListPortalsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListPortalsRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListPortals, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of assets associated with an IoT SiteWise Monitor
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListProjectAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProjectAssetsOutcome ListProjectAssets(const Model::ListProjectAssetsRequest& request) const;

  /**
   * A Callable wrapper for ListProjectAssets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListProjectAssetsRequestT = Model::ListProjectAssetsRequest>
  Model::ListProjectAssetsOutcomeCallable ListProjectAssetsCallable(const ListProjectAssetsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListProjectAssets, request);
  }

  /**
   * An Async wrapper for ListProjectAssets that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListProjectAssetsRequestT = Model::ListProjectAssetsRequest>
  void ListProjectAssetsAsync(const ListProjectAssetsRequestT& request, const ListProjectAssetsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListProjectAssets, request, handler, context);
  }

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
  template <typename ListProjectsRequestT = Model::ListProjectsRequest>
  Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListProjects, request);
  }

  /**
   * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListProjectsRequestT = Model::ListProjectsRequest>
  void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListProjects, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of queries for a workspace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListQueries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListQueriesOutcome ListQueries(const Model::ListQueriesRequest& request) const;

  /**
   * A Callable wrapper for ListQueries that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListQueriesRequestT = Model::ListQueriesRequest>
  Model::ListQueriesOutcomeCallable ListQueriesCallable(const ListQueriesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListQueries, request);
  }

  /**
   * An Async wrapper for ListQueries that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListQueriesRequestT = Model::ListQueriesRequest>
  void ListQueriesAsync(const ListQueriesRequestT& request, const ListQueriesResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListQueries, request, handler, context);
  }

  /**
   * <p>Lists the searches in a workspace, most recently started first. Results can
   * be narrowed with optional filters (status, search type, group, and started-at
   * time range) and are paginated: when <code>nextToken</code> is present, pass it
   * on a subsequent call to retrieve the next page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListSearches">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSearchesOutcome ListSearches(const Model::ListSearchesRequest& request) const;

  /**
   * A Callable wrapper for ListSearches that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListSearchesRequestT = Model::ListSearchesRequest>
  Model::ListSearchesOutcomeCallable ListSearchesCallable(const ListSearchesRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListSearches, request);
  }

  /**
   * An Async wrapper for ListSearches that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListSearchesRequestT = Model::ListSearchesRequest>
  void ListSearchesAsync(const ListSearchesRequestT& request, const ListSearchesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListSearches, request, handler, context);
  }

  /**
   * <p>Retrieves the list of tags for an IoT SiteWise resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Lists tasks in a workspace. To get complete details about a task, use <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeTask.html">DescribeTask</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

  /**
   * A Callable wrapper for ListTasks that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListTasksRequestT = Model::ListTasksRequest>
  Model::ListTasksOutcomeCallable ListTasksCallable(const ListTasksRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::ListTasks, request);
  }

  /**
   * An Async wrapper for ListTasks that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListTasksRequestT = Model::ListTasksRequest>
  void ListTasksAsync(const ListTasksRequestT& request, const ListTasksResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::ListTasks, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of time series (data streams).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListTimeSeries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTimeSeriesOutcome ListTimeSeries(const Model::ListTimeSeriesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListTimeSeries that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListTimeSeriesRequestT = Model::ListTimeSeriesRequest>
  Model::ListTimeSeriesOutcomeCallable ListTimeSeriesCallable(const ListTimeSeriesRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListTimeSeries, request);
  }

  /**
   * An Async wrapper for ListTimeSeries that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListTimeSeriesRequestT = Model::ListTimeSeriesRequest>
  void ListTimeSeriesAsync(const ListTimeSeriesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListTimeSeriesRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListTimeSeries, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of workspaces. Use the <code>nextToken</code>
   * parameter to retrieve additional results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListWorkspaces">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
  Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const ListWorkspacesRequestT& request = {}) const {
    return SubmitCallable(&IoTSiteWiseClient::ListWorkspaces, request);
  }

  /**
   * An Async wrapper for ListWorkspaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
  void ListWorkspacesAsync(const ListWorkspacesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListWorkspacesRequestT& request = {}) const {
    return SubmitAsync(&IoTSiteWiseClient::ListWorkspaces, request, handler, context);
  }

  /**
   * <p>Creates or updates an interface relationship between an asset model and an
   * interface asset model. This operation applies an interface to an asset
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutAssetModelInterfaceRelationship">AWS
   * API Reference</a></p>
   */
  virtual Model::PutAssetModelInterfaceRelationshipOutcome PutAssetModelInterfaceRelationship(
      const Model::PutAssetModelInterfaceRelationshipRequest& request) const;

  /**
   * A Callable wrapper for PutAssetModelInterfaceRelationship that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename PutAssetModelInterfaceRelationshipRequestT = Model::PutAssetModelInterfaceRelationshipRequest>
  Model::PutAssetModelInterfaceRelationshipOutcomeCallable PutAssetModelInterfaceRelationshipCallable(
      const PutAssetModelInterfaceRelationshipRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::PutAssetModelInterfaceRelationship, request);
  }

  /**
   * An Async wrapper for PutAssetModelInterfaceRelationship that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename PutAssetModelInterfaceRelationshipRequestT = Model::PutAssetModelInterfaceRelationshipRequest>
  void PutAssetModelInterfaceRelationshipAsync(const PutAssetModelInterfaceRelationshipRequestT& request,
                                               const PutAssetModelInterfaceRelationshipResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::PutAssetModelInterfaceRelationship, request, handler, context);
  }

  /**
   * <p>Sets the default encryption configuration for the Amazon Web Services
   * account. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
   * management</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutDefaultEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutDefaultEncryptionConfigurationOutcome PutDefaultEncryptionConfiguration(
      const Model::PutDefaultEncryptionConfigurationRequest& request) const;

  /**
   * A Callable wrapper for PutDefaultEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename PutDefaultEncryptionConfigurationRequestT = Model::PutDefaultEncryptionConfigurationRequest>
  Model::PutDefaultEncryptionConfigurationOutcomeCallable PutDefaultEncryptionConfigurationCallable(
      const PutDefaultEncryptionConfigurationRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::PutDefaultEncryptionConfiguration, request);
  }

  /**
   * An Async wrapper for PutDefaultEncryptionConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename PutDefaultEncryptionConfigurationRequestT = Model::PutDefaultEncryptionConfigurationRequest>
  void PutDefaultEncryptionConfigurationAsync(const PutDefaultEncryptionConfigurationRequestT& request,
                                              const PutDefaultEncryptionConfigurationResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::PutDefaultEncryptionConfiguration, request, handler, context);
  }

  /**
   * <p>Sets logging options for IoT SiteWise.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutLoggingOptions">AWS
   * API Reference</a></p>
   */
  virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;

  /**
   * A Callable wrapper for PutLoggingOptions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutLoggingOptionsRequestT = Model::PutLoggingOptionsRequest>
  Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const PutLoggingOptionsRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::PutLoggingOptions, request);
  }

  /**
   * An Async wrapper for PutLoggingOptions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutLoggingOptionsRequestT = Model::PutLoggingOptionsRequest>
  void PutLoggingOptionsAsync(const PutLoggingOptionsRequestT& request, const PutLoggingOptionsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::PutLoggingOptions, request, handler, context);
  }

  /**
   * <p>Configures storage settings for IoT SiteWise.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PutStorageConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutStorageConfigurationOutcome PutStorageConfiguration(const Model::PutStorageConfigurationRequest& request) const;

  /**
   * A Callable wrapper for PutStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutStorageConfigurationRequestT = Model::PutStorageConfigurationRequest>
  Model::PutStorageConfigurationOutcomeCallable PutStorageConfigurationCallable(const PutStorageConfigurationRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::PutStorageConfiguration, request);
  }

  /**
   * An Async wrapper for PutStorageConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutStorageConfigurationRequestT = Model::PutStorageConfigurationRequest>
  void PutStorageConfigurationAsync(const PutStorageConfigurationRequestT& request,
                                    const PutStorageConfigurationResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::PutStorageConfiguration, request, handler, context);
  }

  /**
   * <p>Starts execution of a pipeline in the specified workspace. Each compute node
   * runs according to the DAG dependency order defined in the pipeline. Nodes
   * without dependencies start immediately, while dependent nodes wait for all
   * upstream nodes to complete successfully.</p> <p>You can provide runtime
   * environment variable overrides that take the highest priority in the environment
   * variable hierarchy, without modifying the pipeline definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/StartPipelineExecution">AWS
   * API Reference</a></p>
   */
  virtual Model::StartPipelineExecutionOutcome StartPipelineExecution(const Model::StartPipelineExecutionRequest& request) const;

  /**
   * A Callable wrapper for StartPipelineExecution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartPipelineExecutionRequestT = Model::StartPipelineExecutionRequest>
  Model::StartPipelineExecutionOutcomeCallable StartPipelineExecutionCallable(const StartPipelineExecutionRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::StartPipelineExecution, request);
  }

  /**
   * An Async wrapper for StartPipelineExecution that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartPipelineExecutionRequestT = Model::StartPipelineExecutionRequest>
  void StartPipelineExecutionAsync(const StartPipelineExecutionRequestT& request,
                                   const StartPipelineExecutionResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::StartPipelineExecution, request, handler, context);
  }

  /**
   * <p>Starts an asynchronous SQL query against workspace telemetry, annotations,
   * data segment, and dataset data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/StartQuery">AWS
   * API Reference</a></p>
   */
  virtual Model::StartQueryOutcome StartQuery(const Model::StartQueryRequest& request) const;

  /**
   * A Callable wrapper for StartQuery that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartQueryRequestT = Model::StartQueryRequest>
  Model::StartQueryOutcomeCallable StartQueryCallable(const StartQueryRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::StartQuery, request);
  }

  /**
   * An Async wrapper for StartQuery that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartQueryRequestT = Model::StartQueryRequest>
  void StartQueryAsync(const StartQueryRequestT& request, const StartQueryResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::StartQuery, request, handler, context);
  }

  /**
   * <p>Starts an asynchronous search over the data in a workspace. The search runs
   * in the background; the response returns immediately with a <code>searchId</code>
   * and an initial status of <code>QUEUED</code>. Use <code>DescribeSearch</code> to
   * poll for completion and <code>GetSearchResults</code> to retrieve the results
   * once the search reaches <code>SUCCEEDED</code>. The request is idempotent on
   * <code>clientToken</code>: repeating a call with the same token returns the
   * original search instead of starting a new one.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/StartSearch">AWS
   * API Reference</a></p>
   */
  virtual Model::StartSearchOutcome StartSearch(const Model::StartSearchRequest& request) const;

  /**
   * A Callable wrapper for StartSearch that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartSearchRequestT = Model::StartSearchRequest>
  Model::StartSearchOutcomeCallable StartSearchCallable(const StartSearchRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::StartSearch, request);
  }

  /**
   * An Async wrapper for StartSearch that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartSearchRequestT = Model::StartSearchRequest>
  void StartSearchAsync(const StartSearchRequestT& request, const StartSearchResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::StartSearch, request, handler, context);
  }

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
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes a tag from an IoT SiteWise resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UntagResource, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Updates an
   * existing access policy that specifies an identity's access to an IoT SiteWise
   * Monitor portal or project resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAccessPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAccessPolicyOutcome UpdateAccessPolicy(const Model::UpdateAccessPolicyRequest& request) const;

  /**
   * A Callable wrapper for UpdateAccessPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAccessPolicyRequestT = Model::UpdateAccessPolicyRequest>
  Model::UpdateAccessPolicyOutcomeCallable UpdateAccessPolicyCallable(const UpdateAccessPolicyRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateAccessPolicy, request);
  }

  /**
   * An Async wrapper for UpdateAccessPolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAccessPolicyRequestT = Model::UpdateAccessPolicyRequest>
  void UpdateAccessPolicyAsync(const UpdateAccessPolicyRequestT& request, const UpdateAccessPolicyResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateAccessPolicy, request, handler, context);
  }

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
  template <typename UpdateAssetRequestT = Model::UpdateAssetRequest>
  Model::UpdateAssetOutcomeCallable UpdateAssetCallable(const UpdateAssetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateAsset, request);
  }

  /**
   * An Async wrapper for UpdateAsset that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateAssetRequestT = Model::UpdateAssetRequest>
  void UpdateAssetAsync(const UpdateAssetRequestT& request, const UpdateAssetResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateAsset, request, handler, context);
  }

  /**
   * <p>Updates an asset model and all of the assets that were created from the
   * model. Each asset created from the model inherits the updated asset model's
   * property and hierarchy definitions. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
   * assets and models</a> in the <i>IoT SiteWise User Guide</i>.</p>
   * <p>If you remove a property from an asset model, IoT SiteWise deletes all
   * previous data for that property. You can’t change the type or data type of an
   * existing property.</p> <p>To replace an existing asset model property with a new
   * one with the same <code>name</code>, do the following:</p> <ol> <li> <p>Submit
   * an <code>UpdateAssetModel</code> request with the entire existing property
   * removed.</p> </li> <li> <p>Submit a second <code>UpdateAssetModel</code> request
   * that includes the new property. The new asset property will have the same
   * <code>name</code> as the previous one and IoT SiteWise will generate a new
   * unique <code>id</code>.</p> </li> </ol> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetModel">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAssetModelOutcome UpdateAssetModel(const Model::UpdateAssetModelRequest& request) const;

  /**
   * A Callable wrapper for UpdateAssetModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAssetModelRequestT = Model::UpdateAssetModelRequest>
  Model::UpdateAssetModelOutcomeCallable UpdateAssetModelCallable(const UpdateAssetModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateAssetModel, request);
  }

  /**
   * An Async wrapper for UpdateAssetModel that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAssetModelRequestT = Model::UpdateAssetModelRequest>
  void UpdateAssetModelAsync(const UpdateAssetModelRequestT& request, const UpdateAssetModelResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateAssetModel, request, handler, context);
  }

  /**
   * <p>Updates a composite model and all of the assets that were created from the
   * model. Each asset created from the model inherits the updated asset model's
   * property and hierarchy definitions. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating
   * assets and models</a> in the <i>IoT SiteWise User Guide</i>.</p>
   * <p>If you remove a property from a composite asset model, IoT SiteWise deletes
   * all previous data for that property. You can’t change the type or data type of
   * an existing property.</p> <p>To replace an existing composite asset model
   * property with a new one with the same <code>name</code>, do the following:</p>
   * <ol> <li> <p>Submit an <code>UpdateAssetModelCompositeModel</code> request with
   * the entire existing property removed.</p> </li> <li> <p>Submit a second
   * <code>UpdateAssetModelCompositeModel</code> request that includes the new
   * property. The new asset property will have the same <code>name</code> as the
   * previous one and IoT SiteWise will generate a new unique <code>id</code>.</p>
   * </li> </ol> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateAssetModelCompositeModel">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAssetModelCompositeModelOutcome UpdateAssetModelCompositeModel(
      const Model::UpdateAssetModelCompositeModelRequest& request) const;

  /**
   * A Callable wrapper for UpdateAssetModelCompositeModel that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateAssetModelCompositeModelRequestT = Model::UpdateAssetModelCompositeModelRequest>
  Model::UpdateAssetModelCompositeModelOutcomeCallable UpdateAssetModelCompositeModelCallable(
      const UpdateAssetModelCompositeModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateAssetModelCompositeModel, request);
  }

  /**
   * An Async wrapper for UpdateAssetModelCompositeModel that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateAssetModelCompositeModelRequestT = Model::UpdateAssetModelCompositeModelRequest>
  void UpdateAssetModelCompositeModelAsync(const UpdateAssetModelCompositeModelRequestT& request,
                                           const UpdateAssetModelCompositeModelResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateAssetModelCompositeModel, request, handler, context);
  }

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
   * A Callable wrapper for UpdateAssetProperty that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAssetPropertyRequestT = Model::UpdateAssetPropertyRequest>
  Model::UpdateAssetPropertyOutcomeCallable UpdateAssetPropertyCallable(const UpdateAssetPropertyRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateAssetProperty, request);
  }

  /**
   * An Async wrapper for UpdateAssetProperty that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAssetPropertyRequestT = Model::UpdateAssetPropertyRequest>
  void UpdateAssetPropertyAsync(const UpdateAssetPropertyRequestT& request, const UpdateAssetPropertyResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateAssetProperty, request, handler, context);
  }

  /**
   * <p>Updates the computation model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateComputationModel">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateComputationModelOutcome UpdateComputationModel(const Model::UpdateComputationModelRequest& request) const;

  /**
   * A Callable wrapper for UpdateComputationModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateComputationModelRequestT = Model::UpdateComputationModelRequest>
  Model::UpdateComputationModelOutcomeCallable UpdateComputationModelCallable(const UpdateComputationModelRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateComputationModel, request);
  }

  /**
   * An Async wrapper for UpdateComputationModel that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateComputationModelRequestT = Model::UpdateComputationModelRequest>
  void UpdateComputationModelAsync(const UpdateComputationModelRequestT& request,
                                   const UpdateComputationModelResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateComputationModel, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Updates an IoT
   * SiteWise Monitor dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;

  /**
   * A Callable wrapper for UpdateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateDashboardRequestT = Model::UpdateDashboardRequest>
  Model::UpdateDashboardOutcomeCallable UpdateDashboardCallable(const UpdateDashboardRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateDashboard, request);
  }

  /**
   * An Async wrapper for UpdateDashboard that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateDashboardRequestT = Model::UpdateDashboardRequest>
  void UpdateDashboardAsync(const UpdateDashboardRequestT& request, const UpdateDashboardResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateDashboard, request, handler, context);
  }

  /**
   * <p>Updates a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateDataset">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;

  /**
   * A Callable wrapper for UpdateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateDatasetRequestT = Model::UpdateDatasetRequest>
  Model::UpdateDatasetOutcomeCallable UpdateDatasetCallable(const UpdateDatasetRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateDataset, request);
  }

  /**
   * An Async wrapper for UpdateDataset that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateDatasetRequestT = Model::UpdateDatasetRequest>
  void UpdateDatasetAsync(const UpdateDatasetRequestT& request, const UpdateDatasetResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateDataset, request, handler, context);
  }

  /**
   * <p>Updates a gateway's name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;

  /**
   * A Callable wrapper for UpdateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateGatewayRequestT = Model::UpdateGatewayRequest>
  Model::UpdateGatewayOutcomeCallable UpdateGatewayCallable(const UpdateGatewayRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateGateway, request);
  }

  /**
   * An Async wrapper for UpdateGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateGatewayRequestT = Model::UpdateGatewayRequest>
  void UpdateGatewayAsync(const UpdateGatewayRequestT& request, const UpdateGatewayResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateGateway, request, handler, context);
  }

  /**
   * <p>Updates a gateway capability configuration or defines a new capability
   * configuration. Each gateway capability defines data sources for a gateway.</p>
   * <p>Important workflow notes:</p> <p>Each gateway capability defines data sources
   * for a gateway. This is the namespace of the gateway capability.</p> <p>. The
   * namespace follows the format <code>service:capability:version</code>, where:</p>
   * <ul> <li> <p> <code>service</code> - The service providing the capability, or
   * <code>iotsitewise</code>.</p> </li> <li> <p> <code>capability</code> - The
   * specific capability type. Options include: <code>opcuacollector</code> for the
   * OPC UA data source collector, or <code>publisher</code> for data publisher
   * capability.</p> </li> <li> <p> <code>version</code> - The version number of the
   * capability. Option include <code>2</code> for Classic streams, V2 gateways, and
   * <code>3</code> for MQTT-enabled, V3 gateways.</p> </li> </ul> <p>After updating
   * a capability configuration, the sync status becomes <code>OUT_OF_SYNC</code>
   * until the gateway processes the configuration.Use
   * <code>DescribeGatewayCapabilityConfiguration</code> to check the sync status and
   * verify the configuration was applied.</p> <p>A gateway can have multiple
   * capability configurations with different namespaces.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateGatewayCapabilityConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateGatewayCapabilityConfigurationOutcome UpdateGatewayCapabilityConfiguration(
      const Model::UpdateGatewayCapabilityConfigurationRequest& request) const;

  /**
   * A Callable wrapper for UpdateGatewayCapabilityConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename UpdateGatewayCapabilityConfigurationRequestT = Model::UpdateGatewayCapabilityConfigurationRequest>
  Model::UpdateGatewayCapabilityConfigurationOutcomeCallable UpdateGatewayCapabilityConfigurationCallable(
      const UpdateGatewayCapabilityConfigurationRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateGatewayCapabilityConfiguration, request);
  }

  /**
   * An Async wrapper for UpdateGatewayCapabilityConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename UpdateGatewayCapabilityConfigurationRequestT = Model::UpdateGatewayCapabilityConfigurationRequest>
  void UpdateGatewayCapabilityConfigurationAsync(const UpdateGatewayCapabilityConfigurationRequestT& request,
                                                 const UpdateGatewayCapabilityConfigurationResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateGatewayCapabilityConfiguration, request, handler, context);
  }

  /**
   * <p>Updates an existing pipeline in the specified workspace. Only the fields
   * provided in the request are updated; fields not included in the request are
   * preserved unchanged. You can update the pipeline description, environment
   * variables, and the list of compute nodes independently.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdatePipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

  /**
   * A Callable wrapper for UpdatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
  Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const UpdatePipelineRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdatePipeline, request);
  }

  /**
   * An Async wrapper for UpdatePipeline that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
  void UpdatePipelineAsync(const UpdatePipelineRequestT& request, const UpdatePipelineResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdatePipeline, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Updates an IoT
   * SiteWise Monitor portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdatePortal">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePortalOutcome UpdatePortal(const Model::UpdatePortalRequest& request) const;

  /**
   * A Callable wrapper for UpdatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdatePortalRequestT = Model::UpdatePortalRequest>
  Model::UpdatePortalOutcomeCallable UpdatePortalCallable(const UpdatePortalRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdatePortal, request);
  }

  /**
   * An Async wrapper for UpdatePortal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdatePortalRequestT = Model::UpdatePortalRequest>
  void UpdatePortalAsync(const UpdatePortalRequestT& request, const UpdatePortalResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdatePortal, request, handler, context);
  }

  /**
   *  <p>The IoT SiteWise Monitor feature will no longer be open to new
   * customers starting November 7, 2025. If you would like to use the IoT SiteWise
   * Monitor feature, sign up prior to that date. Existing customers can continue to
   * use the service as normal. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/iotsitewise-monitor-availability-change.html">IoT
   * SiteWise Monitor availability change</a>.</p>  <p>Updates an IoT
   * SiteWise Monitor project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateProject">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

  /**
   * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateProjectRequestT = Model::UpdateProjectRequest>
  Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateProject, request);
  }

  /**
   * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateProjectRequestT = Model::UpdateProjectRequest>
  void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateProject, request, handler, context);
  }

  /**
   * <p>Updates an existing task in the specified workspace. Only the fields provided
   * in the request are updated; fields not included in the request are preserved
   * unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateTask">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateTaskOutcome UpdateTask(const Model::UpdateTaskRequest& request) const;

  /**
   * A Callable wrapper for UpdateTask that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateTaskRequestT = Model::UpdateTaskRequest>
  Model::UpdateTaskOutcomeCallable UpdateTaskCallable(const UpdateTaskRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateTask, request);
  }

  /**
   * An Async wrapper for UpdateTask that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateTaskRequestT = Model::UpdateTaskRequest>
  void UpdateTaskAsync(const UpdateTaskRequestT& request, const UpdateTaskResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateTask, request, handler, context);
  }

  /**
   * <p>Updates a workspace. You can update only workspaces in the
   * <code>ACTIVE</code> or <code>FAILED</code> state. Fields that you omit from the
   * request are left unchanged. To recover a workspace in the <code>FAILED</code>
   * state, call this operation and supply its encryption configuration
   * again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/UpdateWorkspace">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWorkspaceOutcome UpdateWorkspace(const Model::UpdateWorkspaceRequest& request) const;

  /**
   * A Callable wrapper for UpdateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateWorkspaceRequestT = Model::UpdateWorkspaceRequest>
  Model::UpdateWorkspaceOutcomeCallable UpdateWorkspaceCallable(const UpdateWorkspaceRequestT& request) const {
    return SubmitCallable(&IoTSiteWiseClient::UpdateWorkspace, request);
  }

  /**
   * An Async wrapper for UpdateWorkspace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateWorkspaceRequestT = Model::UpdateWorkspaceRequest>
  void UpdateWorkspaceAsync(const UpdateWorkspaceRequestT& request, const UpdateWorkspaceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&IoTSiteWiseClient::UpdateWorkspace, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<IoTSiteWiseEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTSiteWiseClient>;
  void init(const IoTSiteWiseClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, IoTSiteWiseError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  IoTSiteWiseClientConfiguration m_clientConfiguration;
  std::shared_ptr<IoTSiteWiseEndpointProviderBase> m_endpointProvider;
};

}  // namespace IoTSiteWise
}  // namespace Aws
