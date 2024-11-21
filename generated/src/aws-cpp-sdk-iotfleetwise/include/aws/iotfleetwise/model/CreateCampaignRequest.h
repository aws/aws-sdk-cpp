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
    AWS_IOTFLEETWISE_API CreateCampaignRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateCampaignRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateCampaignRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateCampaignRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the campaign to help identify its purpose.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateCampaignRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateCampaignRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateCampaignRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog to associate with the
     * campaign. </p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = value; }
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::move(value); }
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn.assign(value); }
    inline CreateCampaignRequest& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}
    inline CreateCampaignRequest& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}
    inline CreateCampaignRequest& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the vehicle or fleet to deploy a campaign to. </p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline CreateCampaignRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline CreateCampaignRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline CreateCampaignRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, to deliver a campaign after it was approved. If
     * it's not specified, <code>0</code> is used.</p> <p>Default: <code>0</code> </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline CreateCampaignRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline CreateCampaignRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data isn't collected after the campaign expires.
     * </p> <p>Default: 253402214400 (December 31, 9999, 00:00:00 UTC)</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const{ return m_expiryTime; }
    inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }
    inline void SetExpiryTime(const Aws::Utils::DateTime& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = value; }
    inline void SetExpiryTime(Aws::Utils::DateTime&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::move(value); }
    inline CreateCampaignRequest& WithExpiryTime(const Aws::Utils::DateTime& value) { SetExpiryTime(value); return *this;}
    inline CreateCampaignRequest& WithExpiryTime(Aws::Utils::DateTime&& value) { SetExpiryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long (in milliseconds) to collect raw data after a triggering event
     * initiates the collection. If it's not specified, <code>0</code> is used.</p>
     * <p>Default: <code>0</code> </p>
     */
    inline long long GetPostTriggerCollectionDuration() const{ return m_postTriggerCollectionDuration; }
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
    inline const DiagnosticsMode& GetDiagnosticsMode() const{ return m_diagnosticsMode; }
    inline bool DiagnosticsModeHasBeenSet() const { return m_diagnosticsModeHasBeenSet; }
    inline void SetDiagnosticsMode(const DiagnosticsMode& value) { m_diagnosticsModeHasBeenSet = true; m_diagnosticsMode = value; }
    inline void SetDiagnosticsMode(DiagnosticsMode&& value) { m_diagnosticsModeHasBeenSet = true; m_diagnosticsMode = std::move(value); }
    inline CreateCampaignRequest& WithDiagnosticsMode(const DiagnosticsMode& value) { SetDiagnosticsMode(value); return *this;}
    inline CreateCampaignRequest& WithDiagnosticsMode(DiagnosticsMode&& value) { SetDiagnosticsMode(std::move(value)); return *this;}
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
    inline const SpoolingMode& GetSpoolingMode() const{ return m_spoolingMode; }
    inline bool SpoolingModeHasBeenSet() const { return m_spoolingModeHasBeenSet; }
    inline void SetSpoolingMode(const SpoolingMode& value) { m_spoolingModeHasBeenSet = true; m_spoolingMode = value; }
    inline void SetSpoolingMode(SpoolingMode&& value) { m_spoolingModeHasBeenSet = true; m_spoolingMode = std::move(value); }
    inline CreateCampaignRequest& WithSpoolingMode(const SpoolingMode& value) { SetSpoolingMode(value); return *this;}
    inline CreateCampaignRequest& WithSpoolingMode(SpoolingMode&& value) { SetSpoolingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to compress signals before transmitting data to Amazon Web
     * Services IoT FleetWise. If you don't want to compress the signals, use
     * <code>OFF</code>. If it's not specified, <code>SNAPPY</code> is used. </p>
     * <p>Default: <code>SNAPPY</code> </p>
     */
    inline const Compression& GetCompression() const{ return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(const Compression& value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline void SetCompression(Compression&& value) { m_compressionHasBeenSet = true; m_compression = std::move(value); }
    inline CreateCampaignRequest& WithCompression(const Compression& value) { SetCompression(value); return *this;}
    inline CreateCampaignRequest& WithCompression(Compression&& value) { SetCompression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about signals to collect. </p>  <p>If you upload
     * a signal as a condition in a data partition for a campaign, then those same
     * signals must be included in <code>signalsToCollect</code>.</p> 
     */
    inline const Aws::Vector<SignalInformation>& GetSignalsToCollect() const{ return m_signalsToCollect; }
    inline bool SignalsToCollectHasBeenSet() const { return m_signalsToCollectHasBeenSet; }
    inline void SetSignalsToCollect(const Aws::Vector<SignalInformation>& value) { m_signalsToCollectHasBeenSet = true; m_signalsToCollect = value; }
    inline void SetSignalsToCollect(Aws::Vector<SignalInformation>&& value) { m_signalsToCollectHasBeenSet = true; m_signalsToCollect = std::move(value); }
    inline CreateCampaignRequest& WithSignalsToCollect(const Aws::Vector<SignalInformation>& value) { SetSignalsToCollect(value); return *this;}
    inline CreateCampaignRequest& WithSignalsToCollect(Aws::Vector<SignalInformation>&& value) { SetSignalsToCollect(std::move(value)); return *this;}
    inline CreateCampaignRequest& AddSignalsToCollect(const SignalInformation& value) { m_signalsToCollectHasBeenSet = true; m_signalsToCollect.push_back(value); return *this; }
    inline CreateCampaignRequest& AddSignalsToCollect(SignalInformation&& value) { m_signalsToCollectHasBeenSet = true; m_signalsToCollect.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The data collection scheme associated with the campaign. You can specify a
     * scheme that collects data based on time or an event.</p>
     */
    inline const CollectionScheme& GetCollectionScheme() const{ return m_collectionScheme; }
    inline bool CollectionSchemeHasBeenSet() const { return m_collectionSchemeHasBeenSet; }
    inline void SetCollectionScheme(const CollectionScheme& value) { m_collectionSchemeHasBeenSet = true; m_collectionScheme = value; }
    inline void SetCollectionScheme(CollectionScheme&& value) { m_collectionSchemeHasBeenSet = true; m_collectionScheme = std::move(value); }
    inline CreateCampaignRequest& WithCollectionScheme(const CollectionScheme& value) { SetCollectionScheme(value); return *this;}
    inline CreateCampaignRequest& WithCollectionScheme(CollectionScheme&& value) { SetCollectionScheme(std::move(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const{ return m_dataExtraDimensions; }
    inline bool DataExtraDimensionsHasBeenSet() const { return m_dataExtraDimensionsHasBeenSet; }
    inline void SetDataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = value; }
    inline void SetDataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::move(value); }
    inline CreateCampaignRequest& WithDataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetDataExtraDimensions(value); return *this;}
    inline CreateCampaignRequest& WithDataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetDataExtraDimensions(std::move(value)); return *this;}
    inline CreateCampaignRequest& AddDataExtraDimensions(const Aws::String& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(value); return *this; }
    inline CreateCampaignRequest& AddDataExtraDimensions(Aws::String&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(std::move(value)); return *this; }
    inline CreateCampaignRequest& AddDataExtraDimensions(const char* value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the campaign.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCampaignRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCampaignRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCampaignRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateCampaignRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DataDestinationConfig>& GetDataDestinationConfigs() const{ return m_dataDestinationConfigs; }
    inline bool DataDestinationConfigsHasBeenSet() const { return m_dataDestinationConfigsHasBeenSet; }
    inline void SetDataDestinationConfigs(const Aws::Vector<DataDestinationConfig>& value) { m_dataDestinationConfigsHasBeenSet = true; m_dataDestinationConfigs = value; }
    inline void SetDataDestinationConfigs(Aws::Vector<DataDestinationConfig>&& value) { m_dataDestinationConfigsHasBeenSet = true; m_dataDestinationConfigs = std::move(value); }
    inline CreateCampaignRequest& WithDataDestinationConfigs(const Aws::Vector<DataDestinationConfig>& value) { SetDataDestinationConfigs(value); return *this;}
    inline CreateCampaignRequest& WithDataDestinationConfigs(Aws::Vector<DataDestinationConfig>&& value) { SetDataDestinationConfigs(std::move(value)); return *this;}
    inline CreateCampaignRequest& AddDataDestinationConfigs(const DataDestinationConfig& value) { m_dataDestinationConfigsHasBeenSet = true; m_dataDestinationConfigs.push_back(value); return *this; }
    inline CreateCampaignRequest& AddDataDestinationConfigs(DataDestinationConfig&& value) { m_dataDestinationConfigsHasBeenSet = true; m_dataDestinationConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data partitions associated with the signals collected from the
     * vehicle.</p>
     */
    inline const Aws::Vector<DataPartition>& GetDataPartitions() const{ return m_dataPartitions; }
    inline bool DataPartitionsHasBeenSet() const { return m_dataPartitionsHasBeenSet; }
    inline void SetDataPartitions(const Aws::Vector<DataPartition>& value) { m_dataPartitionsHasBeenSet = true; m_dataPartitions = value; }
    inline void SetDataPartitions(Aws::Vector<DataPartition>&& value) { m_dataPartitionsHasBeenSet = true; m_dataPartitions = std::move(value); }
    inline CreateCampaignRequest& WithDataPartitions(const Aws::Vector<DataPartition>& value) { SetDataPartitions(value); return *this;}
    inline CreateCampaignRequest& WithDataPartitions(Aws::Vector<DataPartition>&& value) { SetDataPartitions(std::move(value)); return *this;}
    inline CreateCampaignRequest& AddDataPartitions(const DataPartition& value) { m_dataPartitionsHasBeenSet = true; m_dataPartitions.push_back(value); return *this; }
    inline CreateCampaignRequest& AddDataPartitions(DataPartition&& value) { m_dataPartitionsHasBeenSet = true; m_dataPartitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of information about signals to fetch.</p>
     */
    inline const Aws::Vector<SignalFetchInformation>& GetSignalsToFetch() const{ return m_signalsToFetch; }
    inline bool SignalsToFetchHasBeenSet() const { return m_signalsToFetchHasBeenSet; }
    inline void SetSignalsToFetch(const Aws::Vector<SignalFetchInformation>& value) { m_signalsToFetchHasBeenSet = true; m_signalsToFetch = value; }
    inline void SetSignalsToFetch(Aws::Vector<SignalFetchInformation>&& value) { m_signalsToFetchHasBeenSet = true; m_signalsToFetch = std::move(value); }
    inline CreateCampaignRequest& WithSignalsToFetch(const Aws::Vector<SignalFetchInformation>& value) { SetSignalsToFetch(value); return *this;}
    inline CreateCampaignRequest& WithSignalsToFetch(Aws::Vector<SignalFetchInformation>&& value) { SetSignalsToFetch(std::move(value)); return *this;}
    inline CreateCampaignRequest& AddSignalsToFetch(const SignalFetchInformation& value) { m_signalsToFetchHasBeenSet = true; m_signalsToFetch.push_back(value); return *this; }
    inline CreateCampaignRequest& AddSignalsToFetch(SignalFetchInformation&& value) { m_signalsToFetchHasBeenSet = true; m_signalsToFetch.push_back(std::move(value)); return *this; }
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

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime;
    bool m_expiryTimeHasBeenSet = false;

    long long m_postTriggerCollectionDuration;
    bool m_postTriggerCollectionDurationHasBeenSet = false;

    DiagnosticsMode m_diagnosticsMode;
    bool m_diagnosticsModeHasBeenSet = false;

    SpoolingMode m_spoolingMode;
    bool m_spoolingModeHasBeenSet = false;

    Compression m_compression;
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
