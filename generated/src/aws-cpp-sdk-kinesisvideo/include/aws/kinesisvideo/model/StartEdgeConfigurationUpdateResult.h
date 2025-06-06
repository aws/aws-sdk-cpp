﻿/**
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
    AWS_KINESISVIDEO_API StartEdgeConfigurationUpdateResult() = default;
    AWS_KINESISVIDEO_API StartEdgeConfigurationUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API StartEdgeConfigurationUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    StartEdgeConfigurationUpdateResult& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    StartEdgeConfigurationUpdateResult& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which a stream’s edge configuration was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    StartEdgeConfigurationUpdateResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which a stream’s edge configuration was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    StartEdgeConfigurationUpdateResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current sync status of the stream's edge configuration. When you invoke
     * this API, the sync status will be set to the <code>SYNCING</code> state. Use the
     * <code>DescribeEdgeConfiguration</code> API to get the latest status of the edge
     * configuration.</p>
     */
    inline SyncStatus GetSyncStatus() const { return m_syncStatus; }
    inline void SetSyncStatus(SyncStatus value) { m_syncStatusHasBeenSet = true; m_syncStatus = value; }
    inline StartEdgeConfigurationUpdateResult& WithSyncStatus(SyncStatus value) { SetSyncStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the generated failure status.</p>
     */
    inline const Aws::String& GetFailedStatusDetails() const { return m_failedStatusDetails; }
    template<typename FailedStatusDetailsT = Aws::String>
    void SetFailedStatusDetails(FailedStatusDetailsT&& value) { m_failedStatusDetailsHasBeenSet = true; m_failedStatusDetails = std::forward<FailedStatusDetailsT>(value); }
    template<typename FailedStatusDetailsT = Aws::String>
    StartEdgeConfigurationUpdateResult& WithFailedStatusDetails(FailedStatusDetailsT&& value) { SetFailedStatusDetails(std::forward<FailedStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the stream's edge configuration that will be used to sync
     * with the Edge Agent IoT Greengrass component. The Edge Agent component will run
     * on an IoT Hub Device setup at your premise.</p>
     */
    inline const EdgeConfig& GetEdgeConfig() const { return m_edgeConfig; }
    template<typename EdgeConfigT = EdgeConfig>
    void SetEdgeConfig(EdgeConfigT&& value) { m_edgeConfigHasBeenSet = true; m_edgeConfig = std::forward<EdgeConfigT>(value); }
    template<typename EdgeConfigT = EdgeConfig>
    StartEdgeConfigurationUpdateResult& WithEdgeConfig(EdgeConfigT&& value) { SetEdgeConfig(std::forward<EdgeConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartEdgeConfigurationUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    SyncStatus m_syncStatus{SyncStatus::NOT_SET};
    bool m_syncStatusHasBeenSet = false;

    Aws::String m_failedStatusDetails;
    bool m_failedStatusDetailsHasBeenSet = false;

    EdgeConfig m_edgeConfig;
    bool m_edgeConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
