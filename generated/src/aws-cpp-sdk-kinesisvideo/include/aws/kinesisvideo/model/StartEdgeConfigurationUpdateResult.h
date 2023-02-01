/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesisvideo/model/SyncStatus.h>
#include <aws/kinesisvideo/model/EdgeConfig.h>
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
namespace KinesisVideo
{
namespace Model
{
  class StartEdgeConfigurationUpdateResult
  {
  public:
    AWS_KINESISVIDEO_API StartEdgeConfigurationUpdateResult();
    AWS_KINESISVIDEO_API StartEdgeConfigurationUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API StartEdgeConfigurationUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamName = value; }

    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamName = std::move(value); }

    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline void SetStreamName(const char* value) { m_streamName.assign(value); }

    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The timestamp at which a stream’s edge configuration was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp at which a stream’s edge configuration was first created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp at which a stream’s edge configuration was first created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp at which a stream’s edge configuration was first created.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp at which a stream’s edge configuration was first created.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which a stream’s edge configuration was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The timestamp at which a stream’s edge configuration was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The timestamp at which a stream’s edge configuration was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The timestamp at which a stream’s edge configuration was last updated.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The timestamp at which a stream’s edge configuration was last updated.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p> The current sync status of the stream's edge configuration. When you invoke
     * this API, the sync status will be set to the <code>SYNCING</code> state. Use the
     * <code>DescribeEdgeConfiguration</code> API to get the latest status of the edge
     * configuration.</p>
     */
    inline const SyncStatus& GetSyncStatus() const{ return m_syncStatus; }

    /**
     * <p> The current sync status of the stream's edge configuration. When you invoke
     * this API, the sync status will be set to the <code>SYNCING</code> state. Use the
     * <code>DescribeEdgeConfiguration</code> API to get the latest status of the edge
     * configuration.</p>
     */
    inline void SetSyncStatus(const SyncStatus& value) { m_syncStatus = value; }

    /**
     * <p> The current sync status of the stream's edge configuration. When you invoke
     * this API, the sync status will be set to the <code>SYNCING</code> state. Use the
     * <code>DescribeEdgeConfiguration</code> API to get the latest status of the edge
     * configuration.</p>
     */
    inline void SetSyncStatus(SyncStatus&& value) { m_syncStatus = std::move(value); }

    /**
     * <p> The current sync status of the stream's edge configuration. When you invoke
     * this API, the sync status will be set to the <code>SYNCING</code> state. Use the
     * <code>DescribeEdgeConfiguration</code> API to get the latest status of the edge
     * configuration.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithSyncStatus(const SyncStatus& value) { SetSyncStatus(value); return *this;}

    /**
     * <p> The current sync status of the stream's edge configuration. When you invoke
     * this API, the sync status will be set to the <code>SYNCING</code> state. Use the
     * <code>DescribeEdgeConfiguration</code> API to get the latest status of the edge
     * configuration.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithSyncStatus(SyncStatus&& value) { SetSyncStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the generated failure status.</p>
     */
    inline const Aws::String& GetFailedStatusDetails() const{ return m_failedStatusDetails; }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline void SetFailedStatusDetails(const Aws::String& value) { m_failedStatusDetails = value; }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline void SetFailedStatusDetails(Aws::String&& value) { m_failedStatusDetails = std::move(value); }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline void SetFailedStatusDetails(const char* value) { m_failedStatusDetails.assign(value); }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithFailedStatusDetails(const Aws::String& value) { SetFailedStatusDetails(value); return *this;}

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithFailedStatusDetails(Aws::String&& value) { SetFailedStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithFailedStatusDetails(const char* value) { SetFailedStatusDetails(value); return *this;}


    /**
     * <p>A description of the stream's edge configuration that will be used to sync
     * with the Edge Agent IoT Greengrass component. The Edge Agent component will run
     * on an IoT Hub Device setup at your premise.</p>
     */
    inline const EdgeConfig& GetEdgeConfig() const{ return m_edgeConfig; }

    /**
     * <p>A description of the stream's edge configuration that will be used to sync
     * with the Edge Agent IoT Greengrass component. The Edge Agent component will run
     * on an IoT Hub Device setup at your premise.</p>
     */
    inline void SetEdgeConfig(const EdgeConfig& value) { m_edgeConfig = value; }

    /**
     * <p>A description of the stream's edge configuration that will be used to sync
     * with the Edge Agent IoT Greengrass component. The Edge Agent component will run
     * on an IoT Hub Device setup at your premise.</p>
     */
    inline void SetEdgeConfig(EdgeConfig&& value) { m_edgeConfig = std::move(value); }

    /**
     * <p>A description of the stream's edge configuration that will be used to sync
     * with the Edge Agent IoT Greengrass component. The Edge Agent component will run
     * on an IoT Hub Device setup at your premise.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithEdgeConfig(const EdgeConfig& value) { SetEdgeConfig(value); return *this;}

    /**
     * <p>A description of the stream's edge configuration that will be used to sync
     * with the Edge Agent IoT Greengrass component. The Edge Agent component will run
     * on an IoT Hub Device setup at your premise.</p>
     */
    inline StartEdgeConfigurationUpdateResult& WithEdgeConfig(EdgeConfig&& value) { SetEdgeConfig(std::move(value)); return *this;}

  private:

    Aws::String m_streamName;

    Aws::String m_streamARN;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    SyncStatus m_syncStatus;

    Aws::String m_failedStatusDetails;

    EdgeConfig m_edgeConfig;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
