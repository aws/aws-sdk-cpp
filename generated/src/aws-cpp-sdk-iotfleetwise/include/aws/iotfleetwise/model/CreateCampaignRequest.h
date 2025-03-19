/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotfleetwise/model/DiagnosticsMode.h>
#include <aws/iotfleetwise/model/SpoolingMode.h>
#include <aws/iotfleetwise/model/Compression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/CollectionScheme.h>
#include <aws/iotfleetwise/model/SignalInformation.h>
#include <aws/iotfleetwise/model/Tag.h>
#include <aws/iotfleetwise/model/DataDestinationConfig.h>
#include <aws/iotfleetwise/model/DataPartition.h>
#include <aws/iotfleetwise/model/SignalFetchInformation.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class CreateCampaignRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API CreateCampaignRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCampaign"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the campaign to create. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCampaignRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the campaign to help identify its purpose.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCampaignRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog to associate with the
     * campaign. </p>
     */
    inline const Aws::String& GetSignalCatalogArn() const { return m_signalCatalogArn; }
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }
    template<typename SignalCatalogArnT = Aws::String>
    void SetSignalCatalogArn(SignalCatalogArnT&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::forward<SignalCatalogArnT>(value); }
    template<typename SignalCatalogArnT = Aws::String>
    CreateCampaignRequest& WithSignalCatalogArn(SignalCatalogArnT&& value) { SetSignalCatalogArn(std::forward<SignalCatalogArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the vehicle or fleet to deploy a campaign to. </p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    CreateCampaignRequest& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, to deliver a campaign after it was approved. If
     * it's not specified, <code>0</code> is used.</p> <p>Default: <code>0</code> </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CreateCampaignRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data isn't collected after the campaign expires.
     * </p> <p>Default: 253402214400 (December 31, 9999, 00:00:00 UTC)</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const { return m_expiryTime; }
    inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    CreateCampaignRequest& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long (in milliseconds) to collect raw data after a triggering event
     * initiates the collection. If it's not specified, <code>0</code> is used.</p>
     * <p>Default: <code>0</code> </p>
     */
    inline long long GetPostTriggerCollectionDuration() const { return m_postTriggerCollectionDuration; }
    inline bool PostTriggerCollectionDurationHasBeenSet() const { return m_postTriggerCollectionDurationHasBeenSet; }
    inline void SetPostTriggerCollectionDuration(long long value) { m_postTriggerCollectionDurationHasBeenSet = true; m_postTriggerCollectionDuration = value; }
    inline CreateCampaignRequest& WithPostTriggerCollectionDuration(long long value) { SetPostTriggerCollectionDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Option for a vehicle to send diagnostic trouble codes to Amazon Web Services
     * IoT FleetWise. If you want to send diagnostic trouble codes, use
     * <code>SEND_ACTIVE_DTCS</code>. If it's not specified, <code>OFF</code> is
     * used.</p> <p>Default: <code>OFF</code> </p>
     */
    inline DiagnosticsMode GetDiagnosticsMode() const { return m_diagnosticsMode; }
    inline bool DiagnosticsModeHasBeenSet() const { return m_diagnosticsModeHasBeenSet; }
    inline void SetDiagnosticsMode(DiagnosticsMode value) { m_diagnosticsModeHasBeenSet = true; m_diagnosticsMode = value; }
    inline CreateCampaignRequest& WithDiagnosticsMode(DiagnosticsMode value) { SetDiagnosticsMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to store collected data after a vehicle lost a connection
     * with the cloud. After a connection is re-established, the data is automatically
     * forwarded to Amazon Web Services IoT FleetWise. If you want to store collected
     * data when a vehicle loses connection with the cloud, use <code>TO_DISK</code>.
     * If it's not specified, <code>OFF</code> is used.</p> <p>Default:
     * <code>OFF</code> </p>
     */
    inline SpoolingMode GetSpoolingMode() const { return m_spoolingMode; }
    inline bool SpoolingModeHasBeenSet() const { return m_spoolingModeHasBeenSet; }
    inline void SetSpoolingMode(SpoolingMode value) { m_spoolingModeHasBeenSet = true; m_spoolingMode = value; }
    inline CreateCampaignRequest& WithSpoolingMode(SpoolingMode value) { SetSpoolingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to compress signals before transmitting data to Amazon Web
     * Services IoT FleetWise. If you don't want to compress the signals, use
     * <code>OFF</code>. If it's not specified, <code>SNAPPY</code> is used. </p>
     * <p>Default: <code>SNAPPY</code> </p>
     */
    inline Compression GetCompression() const { return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(Compression value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline CreateCampaignRequest& WithCompression(Compression value) { SetCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about signals to collect. </p>  <p>If you upload
     * a signal as a condition in a data partition for a campaign, then those same
     * signals must be included in <code>signalsToCollect</code>.</p> 
     */
    inline const Aws::Vector<SignalInformation>& GetSignalsToCollect() const { return m_signalsToCollect; }
    inline bool SignalsToCollectHasBeenSet() const { return m_signalsToCollectHasBeenSet; }
    template<typename SignalsToCollectT = Aws::Vector<SignalInformation>>
    void SetSignalsToCollect(SignalsToCollectT&& value) { m_signalsToCollectHasBeenSet = true; m_signalsToCollect = std::forward<SignalsToCollectT>(value); }
    template<typename SignalsToCollectT = Aws::Vector<SignalInformation>>
    CreateCampaignRequest& WithSignalsToCollect(SignalsToCollectT&& value) { SetSignalsToCollect(std::forward<SignalsToCollectT>(value)); return *this;}
    template<typename SignalsToCollectT = SignalInformation>
    CreateCampaignRequest& AddSignalsToCollect(SignalsToCollectT&& value) { m_signalsToCollectHasBeenSet = true; m_signalsToCollect.emplace_back(std::forward<SignalsToCollectT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The data collection scheme associated with the campaign. You can specify a
     * scheme that collects data based on time or an event.</p>
     */
    inline const CollectionScheme& GetCollectionScheme() const { return m_collectionScheme; }
    inline bool CollectionSchemeHasBeenSet() const { return m_collectionSchemeHasBeenSet; }
    template<typename CollectionSchemeT = CollectionScheme>
    void SetCollectionScheme(CollectionSchemeT&& value) { m_collectionSchemeHasBeenSet = true; m_collectionScheme = std::forward<CollectionSchemeT>(value); }
    template<typename CollectionSchemeT = CollectionScheme>
    CreateCampaignRequest& WithCollectionScheme(CollectionSchemeT&& value) { SetCollectionScheme(std::forward<CollectionSchemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of vehicle attributes to associate with a campaign. </p> <p>Enrich the
     * data with specified vehicle attributes. For example, add <code>make</code> and
     * <code>model</code> to the campaign, and Amazon Web Services IoT FleetWise will
     * associate the data with those attributes as dimensions in Amazon Timestream. You
     * can then query the data against <code>make</code> and <code>model</code>.</p>
     * <p>Default: An empty array</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const { return m_dataExtraDimensions; }
    inline bool DataExtraDimensionsHasBeenSet() const { return m_dataExtraDimensionsHasBeenSet; }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::forward<DataExtraDimensionsT>(value); }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    CreateCampaignRequest& WithDataExtraDimensions(DataExtraDimensionsT&& value) { SetDataExtraDimensions(std::forward<DataExtraDimensionsT>(value)); return *this;}
    template<typename DataExtraDimensionsT = Aws::String>
    CreateCampaignRequest& AddDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.emplace_back(std::forward<DataExtraDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the campaign.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCampaignRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCampaignRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination where the campaign sends data. You can send data to an MQTT
     * topic, or store it in Amazon S3 or Amazon Timestream.</p> <p>MQTT is the
     * publish/subscribe messaging protocol used by Amazon Web Services IoT to
     * communicate with your devices.</p> <p>Amazon S3 optimizes the cost of data
     * storage and provides additional mechanisms to use vehicle data, such as data
     * lakes, centralized data storage, data processing pipelines, and analytics.
     * Amazon Web Services IoT FleetWise supports at-least-once file delivery to S3.
     * Your vehicle data is stored on multiple Amazon Web Services IoT FleetWise
     * servers for redundancy and high availability.</p> <p>You can use Amazon
     * Timestream to access and analyze time series data, and Timestream to query
     * vehicle data so that you can identify trends and patterns.</p>
     */
    inline const Aws::Vector<DataDestinationConfig>& GetDataDestinationConfigs() const { return m_dataDestinationConfigs; }
    inline bool DataDestinationConfigsHasBeenSet() const { return m_dataDestinationConfigsHasBeenSet; }
    template<typename DataDestinationConfigsT = Aws::Vector<DataDestinationConfig>>
    void SetDataDestinationConfigs(DataDestinationConfigsT&& value) { m_dataDestinationConfigsHasBeenSet = true; m_dataDestinationConfigs = std::forward<DataDestinationConfigsT>(value); }
    template<typename DataDestinationConfigsT = Aws::Vector<DataDestinationConfig>>
    CreateCampaignRequest& WithDataDestinationConfigs(DataDestinationConfigsT&& value) { SetDataDestinationConfigs(std::forward<DataDestinationConfigsT>(value)); return *this;}
    template<typename DataDestinationConfigsT = DataDestinationConfig>
    CreateCampaignRequest& AddDataDestinationConfigs(DataDestinationConfigsT&& value) { m_dataDestinationConfigsHasBeenSet = true; m_dataDestinationConfigs.emplace_back(std::forward<DataDestinationConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data partitions associated with the signals collected from the
     * vehicle.</p>
     */
    inline const Aws::Vector<DataPartition>& GetDataPartitions() const { return m_dataPartitions; }
    inline bool DataPartitionsHasBeenSet() const { return m_dataPartitionsHasBeenSet; }
    template<typename DataPartitionsT = Aws::Vector<DataPartition>>
    void SetDataPartitions(DataPartitionsT&& value) { m_dataPartitionsHasBeenSet = true; m_dataPartitions = std::forward<DataPartitionsT>(value); }
    template<typename DataPartitionsT = Aws::Vector<DataPartition>>
    CreateCampaignRequest& WithDataPartitions(DataPartitionsT&& value) { SetDataPartitions(std::forward<DataPartitionsT>(value)); return *this;}
    template<typename DataPartitionsT = DataPartition>
    CreateCampaignRequest& AddDataPartitions(DataPartitionsT&& value) { m_dataPartitionsHasBeenSet = true; m_dataPartitions.emplace_back(std::forward<DataPartitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of information about signals to fetch.</p>
     */
    inline const Aws::Vector<SignalFetchInformation>& GetSignalsToFetch() const { return m_signalsToFetch; }
    inline bool SignalsToFetchHasBeenSet() const { return m_signalsToFetchHasBeenSet; }
    template<typename SignalsToFetchT = Aws::Vector<SignalFetchInformation>>
    void SetSignalsToFetch(SignalsToFetchT&& value) { m_signalsToFetchHasBeenSet = true; m_signalsToFetch = std::forward<SignalsToFetchT>(value); }
    template<typename SignalsToFetchT = Aws::Vector<SignalFetchInformation>>
    CreateCampaignRequest& WithSignalsToFetch(SignalsToFetchT&& value) { SetSignalsToFetch(std::forward<SignalsToFetchT>(value)); return *this;}
    template<typename SignalsToFetchT = SignalFetchInformation>
    CreateCampaignRequest& AddSignalsToFetch(SignalsToFetchT&& value) { m_signalsToFetchHasBeenSet = true; m_signalsToFetch.emplace_back(std::forward<SignalsToFetchT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime{};
    bool m_expiryTimeHasBeenSet = false;

    long long m_postTriggerCollectionDuration{0};
    bool m_postTriggerCollectionDurationHasBeenSet = false;

    DiagnosticsMode m_diagnosticsMode{DiagnosticsMode::NOT_SET};
    bool m_diagnosticsModeHasBeenSet = false;

    SpoolingMode m_spoolingMode{SpoolingMode::NOT_SET};
    bool m_spoolingModeHasBeenSet = false;

    Compression m_compression{Compression::NOT_SET};
    bool m_compressionHasBeenSet = false;

    Aws::Vector<SignalInformation> m_signalsToCollect;
    bool m_signalsToCollectHasBeenSet = false;

    CollectionScheme m_collectionScheme;
    bool m_collectionSchemeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataExtraDimensions;
    bool m_dataExtraDimensionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<DataDestinationConfig> m_dataDestinationConfigs;
    bool m_dataDestinationConfigsHasBeenSet = false;

    Aws::Vector<DataPartition> m_dataPartitions;
    bool m_dataPartitionsHasBeenSet = false;

    Aws::Vector<SignalFetchInformation> m_signalsToFetch;
    bool m_signalsToFetchHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
