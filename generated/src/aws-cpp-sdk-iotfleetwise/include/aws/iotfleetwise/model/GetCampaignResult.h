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
    AWS_IOTFLEETWISE_API GetCampaignResult();
    AWS_IOTFLEETWISE_API GetCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetCampaignResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetCampaignResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetCampaignResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetCampaignResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetCampaignResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetCampaignResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetCampaignResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCampaignResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCampaignResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArn = value; }
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArn = std::move(value); }
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArn.assign(value); }
    inline GetCampaignResult& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}
    inline GetCampaignResult& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}
    inline GetCampaignResult& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }
    inline GetCampaignResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline GetCampaignResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline GetCampaignResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the campaign. The status can be one of: <code>CREATING</code>,
     * <code>WAITING_FOR_APPROVAL</code>, <code>RUNNING</code>, and
     * <code>SUSPENDED</code>. </p>
     */
    inline const CampaignStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CampaignStatus& value) { m_status = value; }
    inline void SetStatus(CampaignStatus&& value) { m_status = std::move(value); }
    inline GetCampaignResult& WithStatus(const CampaignStatus& value) { SetStatus(value); return *this;}
    inline GetCampaignResult& WithStatus(CampaignStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time, in milliseconds, to deliver a campaign after it was approved.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetCampaignResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetCampaignResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data won't be collected after the campaign
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const{ return m_expiryTime; }
    inline void SetExpiryTime(const Aws::Utils::DateTime& value) { m_expiryTime = value; }
    inline void SetExpiryTime(Aws::Utils::DateTime&& value) { m_expiryTime = std::move(value); }
    inline GetCampaignResult& WithExpiryTime(const Aws::Utils::DateTime& value) { SetExpiryTime(value); return *this;}
    inline GetCampaignResult& WithExpiryTime(Aws::Utils::DateTime&& value) { SetExpiryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> How long (in seconds) to collect raw data after a triggering event initiates
     * the collection. </p>
     */
    inline long long GetPostTriggerCollectionDuration() const{ return m_postTriggerCollectionDuration; }
    inline void SetPostTriggerCollectionDuration(long long value) { m_postTriggerCollectionDuration = value; }
    inline GetCampaignResult& WithPostTriggerCollectionDuration(long long value) { SetPostTriggerCollectionDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Option for a vehicle to send diagnostic trouble codes to Amazon Web Services
     * IoT FleetWise. </p>
     */
    inline const DiagnosticsMode& GetDiagnosticsMode() const{ return m_diagnosticsMode; }
    inline void SetDiagnosticsMode(const DiagnosticsMode& value) { m_diagnosticsMode = value; }
    inline void SetDiagnosticsMode(DiagnosticsMode&& value) { m_diagnosticsMode = std::move(value); }
    inline GetCampaignResult& WithDiagnosticsMode(const DiagnosticsMode& value) { SetDiagnosticsMode(value); return *this;}
    inline GetCampaignResult& WithDiagnosticsMode(DiagnosticsMode&& value) { SetDiagnosticsMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether to store collected data after a vehicle lost a connection with the
     * cloud. After a connection is re-established, the data is automatically forwarded
     * to Amazon Web Services IoT FleetWise. </p>
     */
    inline const SpoolingMode& GetSpoolingMode() const{ return m_spoolingMode; }
    inline void SetSpoolingMode(const SpoolingMode& value) { m_spoolingMode = value; }
    inline void SetSpoolingMode(SpoolingMode&& value) { m_spoolingMode = std::move(value); }
    inline GetCampaignResult& WithSpoolingMode(const SpoolingMode& value) { SetSpoolingMode(value); return *this;}
    inline GetCampaignResult& WithSpoolingMode(SpoolingMode&& value) { SetSpoolingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether to compress signals before transmitting data to Amazon Web Services
     * IoT FleetWise. If <code>OFF</code> is specified, the signals aren't compressed.
     * If it's not specified, <code>SNAPPY</code> is used. </p>
     */
    inline const Compression& GetCompression() const{ return m_compression; }
    inline void SetCompression(const Compression& value) { m_compression = value; }
    inline void SetCompression(Compression&& value) { m_compression = std::move(value); }
    inline GetCampaignResult& WithCompression(const Compression& value) { SetCompression(value); return *this;}
    inline GetCampaignResult& WithCompression(Compression&& value) { SetCompression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A number indicating the priority of one campaign over another campaign for a
     * certain vehicle or fleet. A campaign with the lowest value is deployed to
     * vehicles before any other campaigns.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline void SetPriority(int value) { m_priority = value; }
    inline GetCampaignResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline const Aws::Vector<SignalInformation>& GetSignalsToCollect() const{ return m_signalsToCollect; }
    inline void SetSignalsToCollect(const Aws::Vector<SignalInformation>& value) { m_signalsToCollect = value; }
    inline void SetSignalsToCollect(Aws::Vector<SignalInformation>&& value) { m_signalsToCollect = std::move(value); }
    inline GetCampaignResult& WithSignalsToCollect(const Aws::Vector<SignalInformation>& value) { SetSignalsToCollect(value); return *this;}
    inline GetCampaignResult& WithSignalsToCollect(Aws::Vector<SignalInformation>&& value) { SetSignalsToCollect(std::move(value)); return *this;}
    inline GetCampaignResult& AddSignalsToCollect(const SignalInformation& value) { m_signalsToCollect.push_back(value); return *this; }
    inline GetCampaignResult& AddSignalsToCollect(SignalInformation&& value) { m_signalsToCollect.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Information about the data collection scheme associated with the campaign.
     * </p>
     */
    inline const CollectionScheme& GetCollectionScheme() const{ return m_collectionScheme; }
    inline void SetCollectionScheme(const CollectionScheme& value) { m_collectionScheme = value; }
    inline void SetCollectionScheme(CollectionScheme&& value) { m_collectionScheme = std::move(value); }
    inline GetCampaignResult& WithCollectionScheme(const CollectionScheme& value) { SetCollectionScheme(value); return *this;}
    inline GetCampaignResult& WithCollectionScheme(CollectionScheme&& value) { SetCollectionScheme(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const{ return m_dataExtraDimensions; }
    inline void SetDataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_dataExtraDimensions = value; }
    inline void SetDataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_dataExtraDimensions = std::move(value); }
    inline GetCampaignResult& WithDataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetDataExtraDimensions(value); return *this;}
    inline GetCampaignResult& WithDataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetDataExtraDimensions(std::move(value)); return *this;}
    inline GetCampaignResult& AddDataExtraDimensions(const Aws::String& value) { m_dataExtraDimensions.push_back(value); return *this; }
    inline GetCampaignResult& AddDataExtraDimensions(Aws::String&& value) { m_dataExtraDimensions.push_back(std::move(value)); return *this; }
    inline GetCampaignResult& AddDataExtraDimensions(const char* value) { m_dataExtraDimensions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time the campaign was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetCampaignResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetCampaignResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the campaign was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }
    inline GetCampaignResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline GetCampaignResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
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
    inline const Aws::Vector<DataDestinationConfig>& GetDataDestinationConfigs() const{ return m_dataDestinationConfigs; }
    inline void SetDataDestinationConfigs(const Aws::Vector<DataDestinationConfig>& value) { m_dataDestinationConfigs = value; }
    inline void SetDataDestinationConfigs(Aws::Vector<DataDestinationConfig>&& value) { m_dataDestinationConfigs = std::move(value); }
    inline GetCampaignResult& WithDataDestinationConfigs(const Aws::Vector<DataDestinationConfig>& value) { SetDataDestinationConfigs(value); return *this;}
    inline GetCampaignResult& WithDataDestinationConfigs(Aws::Vector<DataDestinationConfig>&& value) { SetDataDestinationConfigs(std::move(value)); return *this;}
    inline GetCampaignResult& AddDataDestinationConfigs(const DataDestinationConfig& value) { m_dataDestinationConfigs.push_back(value); return *this; }
    inline GetCampaignResult& AddDataDestinationConfigs(DataDestinationConfig&& value) { m_dataDestinationConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data partitions associated with the signals collected from the
     * vehicle.</p>
     */
    inline const Aws::Vector<DataPartition>& GetDataPartitions() const{ return m_dataPartitions; }
    inline void SetDataPartitions(const Aws::Vector<DataPartition>& value) { m_dataPartitions = value; }
    inline void SetDataPartitions(Aws::Vector<DataPartition>&& value) { m_dataPartitions = std::move(value); }
    inline GetCampaignResult& WithDataPartitions(const Aws::Vector<DataPartition>& value) { SetDataPartitions(value); return *this;}
    inline GetCampaignResult& WithDataPartitions(Aws::Vector<DataPartition>&& value) { SetDataPartitions(std::move(value)); return *this;}
    inline GetCampaignResult& AddDataPartitions(const DataPartition& value) { m_dataPartitions.push_back(value); return *this; }
    inline GetCampaignResult& AddDataPartitions(DataPartition&& value) { m_dataPartitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about a list of signals to fetch data from.</p>
     */
    inline const Aws::Vector<SignalFetchInformation>& GetSignalsToFetch() const{ return m_signalsToFetch; }
    inline void SetSignalsToFetch(const Aws::Vector<SignalFetchInformation>& value) { m_signalsToFetch = value; }
    inline void SetSignalsToFetch(Aws::Vector<SignalFetchInformation>&& value) { m_signalsToFetch = std::move(value); }
    inline GetCampaignResult& WithSignalsToFetch(const Aws::Vector<SignalFetchInformation>& value) { SetSignalsToFetch(value); return *this;}
    inline GetCampaignResult& WithSignalsToFetch(Aws::Vector<SignalFetchInformation>&& value) { SetSignalsToFetch(std::move(value)); return *this;}
    inline GetCampaignResult& AddSignalsToFetch(const SignalFetchInformation& value) { m_signalsToFetch.push_back(value); return *this; }
    inline GetCampaignResult& AddSignalsToFetch(SignalFetchInformation&& value) { m_signalsToFetch.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCampaignResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCampaignResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCampaignResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_signalCatalogArn;

    Aws::String m_targetArn;

    CampaignStatus m_status;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_expiryTime;

    long long m_postTriggerCollectionDuration;

    DiagnosticsMode m_diagnosticsMode;

    SpoolingMode m_spoolingMode;

    Compression m_compression;

    int m_priority;

    Aws::Vector<SignalInformation> m_signalsToCollect;

    CollectionScheme m_collectionScheme;

    Aws::Vector<Aws::String> m_dataExtraDimensions;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::Vector<DataDestinationConfig> m_dataDestinationConfigs;

    Aws::Vector<DataPartition> m_dataPartitions;

    Aws::Vector<SignalFetchInformation> m_signalsToFetch;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
