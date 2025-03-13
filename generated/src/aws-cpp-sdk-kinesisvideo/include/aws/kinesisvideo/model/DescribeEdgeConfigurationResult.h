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
#include <aws/kinesisvideo/model/EdgeAgentStatus.h>
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
  class DescribeEdgeConfigurationResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeEdgeConfigurationResult() = default;
    AWS_KINESISVIDEO_API DescribeEdgeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeEdgeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the stream from which the edge configuration was updated.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    DescribeEdgeConfigurationResult& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    DescribeEdgeConfigurationResult& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which a stream’s edge configuration was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeEdgeConfigurationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which a stream’s edge configuration was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DescribeEdgeConfigurationResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest status of the edge configuration update.</p>
     */
    inline SyncStatus GetSyncStatus() const { return m_syncStatus; }
    inline void SetSyncStatus(SyncStatus value) { m_syncStatusHasBeenSet = true; m_syncStatus = value; }
    inline DescribeEdgeConfigurationResult& WithSyncStatus(SyncStatus value) { SetSyncStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the generated failure status.</p>
     */
    inline const Aws::String& GetFailedStatusDetails() const { return m_failedStatusDetails; }
    template<typename FailedStatusDetailsT = Aws::String>
    void SetFailedStatusDetails(FailedStatusDetailsT&& value) { m_failedStatusDetailsHasBeenSet = true; m_failedStatusDetails = std::forward<FailedStatusDetailsT>(value); }
    template<typename FailedStatusDetailsT = Aws::String>
    DescribeEdgeConfigurationResult& WithFailedStatusDetails(FailedStatusDetailsT&& value) { SetFailedStatusDetails(std::forward<FailedStatusDetailsT>(value)); return *this;}
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
    DescribeEdgeConfigurationResult& WithEdgeConfig(EdgeConfigT&& value) { SetEdgeConfig(std::forward<EdgeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the latest status details for an edge agent's
     * recorder and uploader jobs. Use this information to determine the current health
     * of an edge agent.</p>
     */
    inline const EdgeAgentStatus& GetEdgeAgentStatus() const { return m_edgeAgentStatus; }
    template<typename EdgeAgentStatusT = EdgeAgentStatus>
    void SetEdgeAgentStatus(EdgeAgentStatusT&& value) { m_edgeAgentStatusHasBeenSet = true; m_edgeAgentStatus = std::forward<EdgeAgentStatusT>(value); }
    template<typename EdgeAgentStatusT = EdgeAgentStatus>
    DescribeEdgeConfigurationResult& WithEdgeAgentStatus(EdgeAgentStatusT&& value) { SetEdgeAgentStatus(std::forward<EdgeAgentStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEdgeConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    EdgeAgentStatus m_edgeAgentStatus;
    bool m_edgeAgentStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
