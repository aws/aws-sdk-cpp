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


    /**
     * <p>The name of the campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the campaign.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the campaign.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the campaign.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the campaign.</p>
     */
    inline GetCampaignResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the campaign.</p>
     */
    inline GetCampaignResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the campaign.</p>
     */
    inline GetCampaignResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline GetCampaignResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline GetCampaignResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline GetCampaignResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the campaign.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the campaign.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the campaign.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the campaign.</p>
     */
    inline GetCampaignResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the campaign.</p>
     */
    inline GetCampaignResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the campaign.</p>
     */
    inline GetCampaignResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }

    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArn = value; }

    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArn = std::move(value); }

    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArn.assign(value); }

    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline GetCampaignResult& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}

    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline GetCampaignResult& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a signal catalog. </p>
     */
    inline GetCampaignResult& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}


    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }

    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }

    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }

    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline GetCampaignResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline GetCampaignResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the vehicle or the fleet targeted by the campaign. </p>
     */
    inline GetCampaignResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The state of the campaign. The status can be one of: <code>CREATING</code>,
     * <code>WAITING_FOR_APPROVAL</code>, <code>RUNNING</code>, and
     * <code>SUSPENDED</code>. </p>
     */
    inline const CampaignStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the campaign. The status can be one of: <code>CREATING</code>,
     * <code>WAITING_FOR_APPROVAL</code>, <code>RUNNING</code>, and
     * <code>SUSPENDED</code>. </p>
     */
    inline void SetStatus(const CampaignStatus& value) { m_status = value; }

    /**
     * <p>The state of the campaign. The status can be one of: <code>CREATING</code>,
     * <code>WAITING_FOR_APPROVAL</code>, <code>RUNNING</code>, and
     * <code>SUSPENDED</code>. </p>
     */
    inline void SetStatus(CampaignStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The state of the campaign. The status can be one of: <code>CREATING</code>,
     * <code>WAITING_FOR_APPROVAL</code>, <code>RUNNING</code>, and
     * <code>SUSPENDED</code>. </p>
     */
    inline GetCampaignResult& WithStatus(const CampaignStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the campaign. The status can be one of: <code>CREATING</code>,
     * <code>WAITING_FOR_APPROVAL</code>, <code>RUNNING</code>, and
     * <code>SUSPENDED</code>. </p>
     */
    inline GetCampaignResult& WithStatus(CampaignStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The time, in milliseconds, to deliver a campaign after it was approved.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The time, in milliseconds, to deliver a campaign after it was approved.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p> The time, in milliseconds, to deliver a campaign after it was approved.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p> The time, in milliseconds, to deliver a campaign after it was approved.</p>
     */
    inline GetCampaignResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The time, in milliseconds, to deliver a campaign after it was approved.</p>
     */
    inline GetCampaignResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data won't be collected after the campaign
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const{ return m_expiryTime; }

    /**
     * <p> The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data won't be collected after the campaign
     * expires.</p>
     */
    inline void SetExpiryTime(const Aws::Utils::DateTime& value) { m_expiryTime = value; }

    /**
     * <p> The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data won't be collected after the campaign
     * expires.</p>
     */
    inline void SetExpiryTime(Aws::Utils::DateTime&& value) { m_expiryTime = std::move(value); }

    /**
     * <p> The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data won't be collected after the campaign
     * expires.</p>
     */
    inline GetCampaignResult& WithExpiryTime(const Aws::Utils::DateTime& value) { SetExpiryTime(value); return *this;}

    /**
     * <p> The time the campaign expires, in seconds since epoch (January 1, 1970 at
     * midnight UTC time). Vehicle data won't be collected after the campaign
     * expires.</p>
     */
    inline GetCampaignResult& WithExpiryTime(Aws::Utils::DateTime&& value) { SetExpiryTime(std::move(value)); return *this;}


    /**
     * <p> How long (in seconds) to collect raw data after a triggering event initiates
     * the collection. </p>
     */
    inline long long GetPostTriggerCollectionDuration() const{ return m_postTriggerCollectionDuration; }

    /**
     * <p> How long (in seconds) to collect raw data after a triggering event initiates
     * the collection. </p>
     */
    inline void SetPostTriggerCollectionDuration(long long value) { m_postTriggerCollectionDuration = value; }

    /**
     * <p> How long (in seconds) to collect raw data after a triggering event initiates
     * the collection. </p>
     */
    inline GetCampaignResult& WithPostTriggerCollectionDuration(long long value) { SetPostTriggerCollectionDuration(value); return *this;}


    /**
     * <p> Option for a vehicle to send diagnostic trouble codes to Amazon Web Services
     * IoT FleetWise. </p>
     */
    inline const DiagnosticsMode& GetDiagnosticsMode() const{ return m_diagnosticsMode; }

    /**
     * <p> Option for a vehicle to send diagnostic trouble codes to Amazon Web Services
     * IoT FleetWise. </p>
     */
    inline void SetDiagnosticsMode(const DiagnosticsMode& value) { m_diagnosticsMode = value; }

    /**
     * <p> Option for a vehicle to send diagnostic trouble codes to Amazon Web Services
     * IoT FleetWise. </p>
     */
    inline void SetDiagnosticsMode(DiagnosticsMode&& value) { m_diagnosticsMode = std::move(value); }

    /**
     * <p> Option for a vehicle to send diagnostic trouble codes to Amazon Web Services
     * IoT FleetWise. </p>
     */
    inline GetCampaignResult& WithDiagnosticsMode(const DiagnosticsMode& value) { SetDiagnosticsMode(value); return *this;}

    /**
     * <p> Option for a vehicle to send diagnostic trouble codes to Amazon Web Services
     * IoT FleetWise. </p>
     */
    inline GetCampaignResult& WithDiagnosticsMode(DiagnosticsMode&& value) { SetDiagnosticsMode(std::move(value)); return *this;}


    /**
     * <p> Whether to store collected data after a vehicle lost a connection with the
     * cloud. After a connection is re-established, the data is automatically forwarded
     * to Amazon Web Services IoT FleetWise. </p>
     */
    inline const SpoolingMode& GetSpoolingMode() const{ return m_spoolingMode; }

    /**
     * <p> Whether to store collected data after a vehicle lost a connection with the
     * cloud. After a connection is re-established, the data is automatically forwarded
     * to Amazon Web Services IoT FleetWise. </p>
     */
    inline void SetSpoolingMode(const SpoolingMode& value) { m_spoolingMode = value; }

    /**
     * <p> Whether to store collected data after a vehicle lost a connection with the
     * cloud. After a connection is re-established, the data is automatically forwarded
     * to Amazon Web Services IoT FleetWise. </p>
     */
    inline void SetSpoolingMode(SpoolingMode&& value) { m_spoolingMode = std::move(value); }

    /**
     * <p> Whether to store collected data after a vehicle lost a connection with the
     * cloud. After a connection is re-established, the data is automatically forwarded
     * to Amazon Web Services IoT FleetWise. </p>
     */
    inline GetCampaignResult& WithSpoolingMode(const SpoolingMode& value) { SetSpoolingMode(value); return *this;}

    /**
     * <p> Whether to store collected data after a vehicle lost a connection with the
     * cloud. After a connection is re-established, the data is automatically forwarded
     * to Amazon Web Services IoT FleetWise. </p>
     */
    inline GetCampaignResult& WithSpoolingMode(SpoolingMode&& value) { SetSpoolingMode(std::move(value)); return *this;}


    /**
     * <p> Whether to compress signals before transmitting data to Amazon Web Services
     * IoT FleetWise. If <code>OFF</code> is specified, the signals aren't compressed.
     * If it's not specified, <code>SNAPPY</code> is used. </p>
     */
    inline const Compression& GetCompression() const{ return m_compression; }

    /**
     * <p> Whether to compress signals before transmitting data to Amazon Web Services
     * IoT FleetWise. If <code>OFF</code> is specified, the signals aren't compressed.
     * If it's not specified, <code>SNAPPY</code> is used. </p>
     */
    inline void SetCompression(const Compression& value) { m_compression = value; }

    /**
     * <p> Whether to compress signals before transmitting data to Amazon Web Services
     * IoT FleetWise. If <code>OFF</code> is specified, the signals aren't compressed.
     * If it's not specified, <code>SNAPPY</code> is used. </p>
     */
    inline void SetCompression(Compression&& value) { m_compression = std::move(value); }

    /**
     * <p> Whether to compress signals before transmitting data to Amazon Web Services
     * IoT FleetWise. If <code>OFF</code> is specified, the signals aren't compressed.
     * If it's not specified, <code>SNAPPY</code> is used. </p>
     */
    inline GetCampaignResult& WithCompression(const Compression& value) { SetCompression(value); return *this;}

    /**
     * <p> Whether to compress signals before transmitting data to Amazon Web Services
     * IoT FleetWise. If <code>OFF</code> is specified, the signals aren't compressed.
     * If it's not specified, <code>SNAPPY</code> is used. </p>
     */
    inline GetCampaignResult& WithCompression(Compression&& value) { SetCompression(std::move(value)); return *this;}


    /**
     * <p> A number indicating the priority of one campaign over another campaign for a
     * certain vehicle or fleet. A campaign with the lowest value is deployed to
     * vehicles before any other campaigns.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p> A number indicating the priority of one campaign over another campaign for a
     * certain vehicle or fleet. A campaign with the lowest value is deployed to
     * vehicles before any other campaigns.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p> A number indicating the priority of one campaign over another campaign for a
     * certain vehicle or fleet. A campaign with the lowest value is deployed to
     * vehicles before any other campaigns.</p>
     */
    inline GetCampaignResult& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline const Aws::Vector<SignalInformation>& GetSignalsToCollect() const{ return m_signalsToCollect; }

    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline void SetSignalsToCollect(const Aws::Vector<SignalInformation>& value) { m_signalsToCollect = value; }

    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline void SetSignalsToCollect(Aws::Vector<SignalInformation>&& value) { m_signalsToCollect = std::move(value); }

    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline GetCampaignResult& WithSignalsToCollect(const Aws::Vector<SignalInformation>& value) { SetSignalsToCollect(value); return *this;}

    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline GetCampaignResult& WithSignalsToCollect(Aws::Vector<SignalInformation>&& value) { SetSignalsToCollect(std::move(value)); return *this;}

    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline GetCampaignResult& AddSignalsToCollect(const SignalInformation& value) { m_signalsToCollect.push_back(value); return *this; }

    /**
     * <p> Information about a list of signals to collect data on. </p>
     */
    inline GetCampaignResult& AddSignalsToCollect(SignalInformation&& value) { m_signalsToCollect.push_back(std::move(value)); return *this; }


    /**
     * <p> Information about the data collection scheme associated with the campaign.
     * </p>
     */
    inline const CollectionScheme& GetCollectionScheme() const{ return m_collectionScheme; }

    /**
     * <p> Information about the data collection scheme associated with the campaign.
     * </p>
     */
    inline void SetCollectionScheme(const CollectionScheme& value) { m_collectionScheme = value; }

    /**
     * <p> Information about the data collection scheme associated with the campaign.
     * </p>
     */
    inline void SetCollectionScheme(CollectionScheme&& value) { m_collectionScheme = std::move(value); }

    /**
     * <p> Information about the data collection scheme associated with the campaign.
     * </p>
     */
    inline GetCampaignResult& WithCollectionScheme(const CollectionScheme& value) { SetCollectionScheme(value); return *this;}

    /**
     * <p> Information about the data collection scheme associated with the campaign.
     * </p>
     */
    inline GetCampaignResult& WithCollectionScheme(CollectionScheme&& value) { SetCollectionScheme(std::move(value)); return *this;}


    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const{ return m_dataExtraDimensions; }

    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline void SetDataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_dataExtraDimensions = value; }

    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline void SetDataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_dataExtraDimensions = std::move(value); }

    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline GetCampaignResult& WithDataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetDataExtraDimensions(value); return *this;}

    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline GetCampaignResult& WithDataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetDataExtraDimensions(std::move(value)); return *this;}

    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline GetCampaignResult& AddDataExtraDimensions(const Aws::String& value) { m_dataExtraDimensions.push_back(value); return *this; }

    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline GetCampaignResult& AddDataExtraDimensions(Aws::String&& value) { m_dataExtraDimensions.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of vehicle attributes associated with the campaign. </p>
     */
    inline GetCampaignResult& AddDataExtraDimensions(const char* value) { m_dataExtraDimensions.push_back(value); return *this; }


    /**
     * <p> The time the campaign was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time the campaign was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p> The time the campaign was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p> The time the campaign was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline GetCampaignResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time the campaign was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline GetCampaignResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the campaign was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The last time the campaign was modified.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The last time the campaign was modified.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The last time the campaign was modified.</p>
     */
    inline GetCampaignResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the campaign was modified.</p>
     */
    inline GetCampaignResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
