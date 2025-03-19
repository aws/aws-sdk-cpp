/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/CampaignStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotfleetwise/model/DiagnosticsMode.h>
#include <aws/iotfleetwise/model/SpoolingMode.h>
#include <aws/iotfleetwise/model/Compression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/CollectionScheme.h>
#include <aws/iotfleetwise/model/SignalInformation.h>
#include <aws/iotfleetwise/model/DataDestinationConfig.h>
#include <aws/iotfleetwise/model/DataPartition.h>
#include <aws/iotfleetwise/model/SignalFetchInformation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTFleetWise
{
namespace Model
{
  class GetCampaignResult
  {
  public:
    AWS_IOTFLEETWISE_API GetCampaignResult() = default;
    AWS_IOTFLEETWISE_API GetCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the campaign.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCampaignResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetCampaignResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetCampaignResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline const Aws::String& GetSignalCatalogArn() const { return m_signalCatalogArn; }
    template<typename SignalCatalogArnT = Aws::String>
    void SetSignalCatalogArn(SignalCatalogArnT&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::forward<SignalCatalogArnT>(value); }
    template<typename SignalCatalogArnT = Aws::String>
    GetCampaignResult& WithSignalCatalogArn(SignalCatalogArnT&& value) { SetSignalCatalogArn(std::forward<SignalCatalogArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    GetCampaignResult& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the campaign. The status can be one of: <code>CREATING</code>,
     * <code>WAITING_FOR_APPROVAL</code>, <code>RUNNING</code>, and
     * <code>SUSPENDED</code>. </p>
     */
    inline CampaignStatus GetStatus() const { return m_status; }
    inline void SetStatus(CampaignStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCampaignResult& WithStatus(CampaignStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time, in milliseconds, to deliver a campaign after it was approved.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetCampaignResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data won't be collected after the campaign
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const { return m_expiryTime; }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    GetCampaignResult& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> How long (in seconds) to collect raw data after a triggering event initiates
     * the collection. </p>
     */
    inline long long GetPostTriggerCollectionDuration() const { return m_postTriggerCollectionDuration; }
    inline void SetPostTriggerCollectionDuration(long long value) { m_postTriggerCollectionDurationHasBeenSet = true; m_postTriggerCollectionDuration = value; }
    inline GetCampaignResult& WithPostTriggerCollectionDuration(long long value) { SetPostTriggerCollectionDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Option for a vehicle to send diagnostic trouble codes to Amazon Web Services
     * IoT FleetWise. </p>
     */
    inline DiagnosticsMode GetDiagnosticsMode() const { return m_diagnosticsMode; }
    inline void SetDiagnosticsMode(DiagnosticsMode value) { m_diagnosticsModeHasBeenSet = true; m_diagnosticsMode = value; }
    inline GetCampaignResult& WithDiagnosticsMode(DiagnosticsMode value) { SetDiagnosticsMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether to store collected data after a vehicle lost a connection with the
     * cloud. After a connection is re-established, the data is automatically forwarded
     * to Amazon Web Services IoT FleetWise. </p>
     */
    inline SpoolingMode GetSpoolingMode() const { return m_spoolingMode; }
    inline void SetSpoolingMode(SpoolingMode value) { m_spoolingModeHasBeenSet = true; m_spoolingMode = value; }
    inline GetCampaignResult& WithSpoolingMode(SpoolingMode value) { SetSpoolingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether to compress signals before transmitting data to Amazon Web Services
     * IoT FleetWise. If <code>OFF</code> is specified, the signals aren't compressed.
     * If it's not specified, <code>SNAPPY</code> is used. </p>
     */
    inline Compression GetCompression() const { return m_compression; }
    inline void SetCompression(Compression value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline GetCampaignResult& WithCompression(Compression value) { SetCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A number indicating the priority of one campaign over another campaign for a
     * certain vehicle or fleet. A campaign with the lowest value is deployed to
     * vehicles before any other campaigns.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline GetCampaignResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline const Aws::Vector<SignalInformation>& GetSignalsToCollect() const { return m_signalsToCollect; }
    template<typename SignalsToCollectT = Aws::Vector<SignalInformation>>
    void SetSignalsToCollect(SignalsToCollectT&& value) { m_signalsToCollectHasBeenSet = true; m_signalsToCollect = std::forward<SignalsToCollectT>(value); }
    template<typename SignalsToCollectT = Aws::Vector<SignalInformation>>
    GetCampaignResult& WithSignalsToCollect(SignalsToCollectT&& value) { SetSignalsToCollect(std::forward<SignalsToCollectT>(value)); return *this;}
    template<typename SignalsToCollectT = SignalInformation>
    GetCampaignResult& AddSignalsToCollect(SignalsToCollectT&& value) { m_signalsToCollectHasBeenSet = true; m_signalsToCollect.emplace_back(std::forward<SignalsToCollectT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Information about the data collection scheme associated with the campaign.
     * </p>
     */
    inline const CollectionScheme& GetCollectionScheme() const { return m_collectionScheme; }
    template<typename CollectionSchemeT = CollectionScheme>
    void SetCollectionScheme(CollectionSchemeT&& value) { m_collectionSchemeHasBeenSet = true; m_collectionScheme = std::forward<CollectionSchemeT>(value); }
    template<typename CollectionSchemeT = CollectionScheme>
    GetCampaignResult& WithCollectionScheme(CollectionSchemeT&& value) { SetCollectionScheme(std::forward<CollectionSchemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const { return m_dataExtraDimensions; }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::forward<DataExtraDimensionsT>(value); }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    GetCampaignResult& WithDataExtraDimensions(DataExtraDimensionsT&& value) { SetDataExtraDimensions(std::forward<DataExtraDimensionsT>(value)); return *this;}
    template<typename DataExtraDimensionsT = Aws::String>
    GetCampaignResult& AddDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.emplace_back(std::forward<DataExtraDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time the campaign was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetCampaignResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the campaign was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    GetCampaignResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination where the campaign sends data. You can send data to an MQTT
     * topic, or store it in Amazon S3 or Amazon Timestream.</p> <p>MQTT is the
     * publish/subscribe messaging protocol used by Amazon Web Services IoT to
     * communicate with your devices.</p> <p>Amazon S3 optimizes the cost of data
     * storage and provides additional mechanisms to use vehicle data, such as data
     * lakes, centralized data storage, data processing pipelines, and analytics. </p>
     * <p>You can use Amazon Timestream to access and analyze time series data, and
     * Timestream to query vehicle data so that you can identify trends and
     * patterns.</p>
     */
    inline const Aws::Vector<DataDestinationConfig>& GetDataDestinationConfigs() const { return m_dataDestinationConfigs; }
    template<typename DataDestinationConfigsT = Aws::Vector<DataDestinationConfig>>
    void SetDataDestinationConfigs(DataDestinationConfigsT&& value) { m_dataDestinationConfigsHasBeenSet = true; m_dataDestinationConfigs = std::forward<DataDestinationConfigsT>(value); }
    template<typename DataDestinationConfigsT = Aws::Vector<DataDestinationConfig>>
    GetCampaignResult& WithDataDestinationConfigs(DataDestinationConfigsT&& value) { SetDataDestinationConfigs(std::forward<DataDestinationConfigsT>(value)); return *this;}
    template<typename DataDestinationConfigsT = DataDestinationConfig>
    GetCampaignResult& AddDataDestinationConfigs(DataDestinationConfigsT&& value) { m_dataDestinationConfigsHasBeenSet = true; m_dataDestinationConfigs.emplace_back(std::forward<DataDestinationConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data partitions associated with the signals collected from the
     * vehicle.</p>
     */
    inline const Aws::Vector<DataPartition>& GetDataPartitions() const { return m_dataPartitions; }
    template<typename DataPartitionsT = Aws::Vector<DataPartition>>
    void SetDataPartitions(DataPartitionsT&& value) { m_dataPartitionsHasBeenSet = true; m_dataPartitions = std::forward<DataPartitionsT>(value); }
    template<typename DataPartitionsT = Aws::Vector<DataPartition>>
    GetCampaignResult& WithDataPartitions(DataPartitionsT&& value) { SetDataPartitions(std::forward<DataPartitionsT>(value)); return *this;}
    template<typename DataPartitionsT = DataPartition>
    GetCampaignResult& AddDataPartitions(DataPartitionsT&& value) { m_dataPartitionsHasBeenSet = true; m_dataPartitions.emplace_back(std::forward<DataPartitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about a list of signals to fetch data from.</p>
     */
    inline const Aws::Vector<SignalFetchInformation>& GetSignalsToFetch() const { return m_signalsToFetch; }
    template<typename SignalsToFetchT = Aws::Vector<SignalFetchInformation>>
    void SetSignalsToFetch(SignalsToFetchT&& value) { m_signalsToFetchHasBeenSet = true; m_signalsToFetch = std::forward<SignalsToFetchT>(value); }
    template<typename SignalsToFetchT = Aws::Vector<SignalFetchInformation>>
    GetCampaignResult& WithSignalsToFetch(SignalsToFetchT&& value) { SetSignalsToFetch(std::forward<SignalsToFetchT>(value)); return *this;}
    template<typename SignalsToFetchT = SignalFetchInformation>
    GetCampaignResult& AddSignalsToFetch(SignalsToFetchT&& value) { m_signalsToFetchHasBeenSet = true; m_signalsToFetch.emplace_back(std::forward<SignalsToFetchT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCampaignResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    CampaignStatus m_status{CampaignStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

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

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::Vector<SignalInformation> m_signalsToCollect;
    bool m_signalsToCollectHasBeenSet = false;

    CollectionScheme m_collectionScheme;
    bool m_collectionSchemeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataExtraDimensions;
    bool m_dataExtraDimensionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::Vector<DataDestinationConfig> m_dataDestinationConfigs;
    bool m_dataDestinationConfigsHasBeenSet = false;

    Aws::Vector<DataPartition> m_dataPartitions;
    bool m_dataPartitionsHasBeenSet = false;

    Aws::Vector<SignalFetchInformation> m_signalsToFetch;
    bool m_signalsToFetchHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
