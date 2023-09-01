/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineTaskStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>A representation of an asynchronous request to perform voice tone analysis on
   * a media insights pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/VoiceToneAnalysisTask">AWS
   * API Reference</a></p>
   */
  class VoiceToneAnalysisTask
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceToneAnalysisTask();
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceToneAnalysisTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceToneAnalysisTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskId() const{ return m_voiceToneAnalysisTaskId; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline bool VoiceToneAnalysisTaskIdHasBeenSet() const { return m_voiceToneAnalysisTaskIdHasBeenSet; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(const Aws::String& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = value; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(Aws::String&& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = std::move(value); }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(const char* value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId.assign(value); }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskId(const Aws::String& value) { SetVoiceToneAnalysisTaskId(value); return *this;}

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskId(Aws::String&& value) { SetVoiceToneAnalysisTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskId(const char* value) { SetVoiceToneAnalysisTaskId(value); return *this;}


    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline const MediaPipelineTaskStatus& GetVoiceToneAnalysisTaskStatus() const{ return m_voiceToneAnalysisTaskStatus; }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline bool VoiceToneAnalysisTaskStatusHasBeenSet() const { return m_voiceToneAnalysisTaskStatusHasBeenSet; }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskStatus(const MediaPipelineTaskStatus& value) { m_voiceToneAnalysisTaskStatusHasBeenSet = true; m_voiceToneAnalysisTaskStatus = value; }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskStatus(MediaPipelineTaskStatus&& value) { m_voiceToneAnalysisTaskStatusHasBeenSet = true; m_voiceToneAnalysisTaskStatus = std::move(value); }

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskStatus(const MediaPipelineTaskStatus& value) { SetVoiceToneAnalysisTaskStatus(value); return *this;}

    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskStatus(MediaPipelineTaskStatus&& value) { SetVoiceToneAnalysisTaskStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline VoiceToneAnalysisTask& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline VoiceToneAnalysisTask& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline VoiceToneAnalysisTask& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline VoiceToneAnalysisTask& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_voiceToneAnalysisTaskId;
    bool m_voiceToneAnalysisTaskIdHasBeenSet = false;

    MediaPipelineTaskStatus m_voiceToneAnalysisTaskStatus;
    bool m_voiceToneAnalysisTaskStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
