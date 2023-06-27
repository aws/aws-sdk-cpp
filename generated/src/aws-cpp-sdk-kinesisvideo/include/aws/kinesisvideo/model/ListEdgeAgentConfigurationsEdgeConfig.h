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
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsEdgeConfig();
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsEdgeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsEdgeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The timestamp when the stream first created the edge config.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the stream first created the edge config.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp when the stream first created the edge config.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp when the stream first created the edge config.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the stream first created the edge config.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the stream first created the edge config.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the stream last updated the edge config.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The timestamp when the stream last updated the edge config.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The timestamp when the stream last updated the edge config.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The timestamp when the stream last updated the edge config.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The timestamp when the stream last updated the edge config.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The timestamp when the stream last updated the edge config.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The current sync status of the stream's edge configuration.</p>
     */
    inline const SyncStatus& GetSyncStatus() const{ return m_syncStatus; }

    /**
     * <p>The current sync status of the stream's edge configuration.</p>
     */
    inline bool SyncStatusHasBeenSet() const { return m_syncStatusHasBeenSet; }

    /**
     * <p>The current sync status of the stream's edge configuration.</p>
     */
    inline void SetSyncStatus(const SyncStatus& value) { m_syncStatusHasBeenSet = true; m_syncStatus = value; }

    /**
     * <p>The current sync status of the stream's edge configuration.</p>
     */
    inline void SetSyncStatus(SyncStatus&& value) { m_syncStatusHasBeenSet = true; m_syncStatus = std::move(value); }

    /**
     * <p>The current sync status of the stream's edge configuration.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithSyncStatus(const SyncStatus& value) { SetSyncStatus(value); return *this;}

    /**
     * <p>The current sync status of the stream's edge configuration.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithSyncStatus(SyncStatus&& value) { SetSyncStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the generated failure status.</p>
     */
    inline const Aws::String& GetFailedStatusDetails() const{ return m_failedStatusDetails; }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline bool FailedStatusDetailsHasBeenSet() const { return m_failedStatusDetailsHasBeenSet; }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline void SetFailedStatusDetails(const Aws::String& value) { m_failedStatusDetailsHasBeenSet = true; m_failedStatusDetails = value; }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline void SetFailedStatusDetails(Aws::String&& value) { m_failedStatusDetailsHasBeenSet = true; m_failedStatusDetails = std::move(value); }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline void SetFailedStatusDetails(const char* value) { m_failedStatusDetailsHasBeenSet = true; m_failedStatusDetails.assign(value); }

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithFailedStatusDetails(const Aws::String& value) { SetFailedStatusDetails(value); return *this;}

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithFailedStatusDetails(Aws::String&& value) { SetFailedStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A description of the generated failure status.</p>
     */
    inline ListEdgeAgentConfigurationsEdgeConfig& WithFailedStatusDetails(const char* value) { SetFailedStatusDetails(value); return *this;}


    
    inline const EdgeConfig& GetEdgeConfig() const{ return m_edgeConfig; }

    
    inline bool EdgeConfigHasBeenSet() const { return m_edgeConfigHasBeenSet; }

    
    inline void SetEdgeConfig(const EdgeConfig& value) { m_edgeConfigHasBeenSet = true; m_edgeConfig = value; }

    
    inline void SetEdgeConfig(EdgeConfig&& value) { m_edgeConfigHasBeenSet = true; m_edgeConfig = std::move(value); }

    
    inline ListEdgeAgentConfigurationsEdgeConfig& WithEdgeConfig(const EdgeConfig& value) { SetEdgeConfig(value); return *this;}

    
    inline ListEdgeAgentConfigurationsEdgeConfig& WithEdgeConfig(EdgeConfig&& value) { SetEdgeConfig(std::move(value)); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    SyncStatus m_syncStatus;
    bool m_syncStatusHasBeenSet = false;

    Aws::String m_failedStatusDetails;
    bool m_failedStatusDetailsHasBeenSet = false;

    EdgeConfig m_edgeConfig;
    bool m_edgeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
