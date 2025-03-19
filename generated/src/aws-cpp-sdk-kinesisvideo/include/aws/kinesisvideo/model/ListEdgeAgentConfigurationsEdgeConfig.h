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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>A description of a single stream's edge configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListEdgeAgentConfigurationsEdgeConfig">AWS
   * API Reference</a></p>
   */
  class ListEdgeAgentConfigurationsEdgeConfig
  {
  public:
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsEdgeConfig() = default;
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsEdgeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsEdgeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stream.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    ListEdgeAgentConfigurationsEdgeConfig& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    ListEdgeAgentConfigurationsEdgeConfig& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stream first created the edge config.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ListEdgeAgentConfigurationsEdgeConfig& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stream last updated the edge config.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ListEdgeAgentConfigurationsEdgeConfig& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current sync status of the stream's edge configuration.</p>
     */
    inline SyncStatus GetSyncStatus() const { return m_syncStatus; }
    inline bool SyncStatusHasBeenSet() const { return m_syncStatusHasBeenSet; }
    inline void SetSyncStatus(SyncStatus value) { m_syncStatusHasBeenSet = true; m_syncStatus = value; }
    inline ListEdgeAgentConfigurationsEdgeConfig& WithSyncStatus(SyncStatus value) { SetSyncStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the generated failure status.</p>
     */
    inline const Aws::String& GetFailedStatusDetails() const { return m_failedStatusDetails; }
    inline bool FailedStatusDetailsHasBeenSet() const { return m_failedStatusDetailsHasBeenSet; }
    template<typename FailedStatusDetailsT = Aws::String>
    void SetFailedStatusDetails(FailedStatusDetailsT&& value) { m_failedStatusDetailsHasBeenSet = true; m_failedStatusDetails = std::forward<FailedStatusDetailsT>(value); }
    template<typename FailedStatusDetailsT = Aws::String>
    ListEdgeAgentConfigurationsEdgeConfig& WithFailedStatusDetails(FailedStatusDetailsT&& value) { SetFailedStatusDetails(std::forward<FailedStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EdgeConfig& GetEdgeConfig() const { return m_edgeConfig; }
    inline bool EdgeConfigHasBeenSet() const { return m_edgeConfigHasBeenSet; }
    template<typename EdgeConfigT = EdgeConfig>
    void SetEdgeConfig(EdgeConfigT&& value) { m_edgeConfigHasBeenSet = true; m_edgeConfig = std::forward<EdgeConfigT>(value); }
    template<typename EdgeConfigT = EdgeConfig>
    ListEdgeAgentConfigurationsEdgeConfig& WithEdgeConfig(EdgeConfigT&& value) { SetEdgeConfig(std::forward<EdgeConfigT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
