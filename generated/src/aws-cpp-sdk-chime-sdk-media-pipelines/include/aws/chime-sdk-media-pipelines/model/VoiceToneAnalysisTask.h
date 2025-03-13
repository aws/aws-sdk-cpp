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
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceToneAnalysisTask() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceToneAnalysisTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceToneAnalysisTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskId() const { return m_voiceToneAnalysisTaskId; }
    inline bool VoiceToneAnalysisTaskIdHasBeenSet() const { return m_voiceToneAnalysisTaskIdHasBeenSet; }
    template<typename VoiceToneAnalysisTaskIdT = Aws::String>
    void SetVoiceToneAnalysisTaskId(VoiceToneAnalysisTaskIdT&& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = std::forward<VoiceToneAnalysisTaskIdT>(value); }
    template<typename VoiceToneAnalysisTaskIdT = Aws::String>
    VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskId(VoiceToneAnalysisTaskIdT&& value) { SetVoiceToneAnalysisTaskId(std::forward<VoiceToneAnalysisTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a voice tone analysis task.</p>
     */
    inline MediaPipelineTaskStatus GetVoiceToneAnalysisTaskStatus() const { return m_voiceToneAnalysisTaskStatus; }
    inline bool VoiceToneAnalysisTaskStatusHasBeenSet() const { return m_voiceToneAnalysisTaskStatusHasBeenSet; }
    inline void SetVoiceToneAnalysisTaskStatus(MediaPipelineTaskStatus value) { m_voiceToneAnalysisTaskStatusHasBeenSet = true; m_voiceToneAnalysisTaskStatus = value; }
    inline VoiceToneAnalysisTask& WithVoiceToneAnalysisTaskStatus(MediaPipelineTaskStatus value) { SetVoiceToneAnalysisTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice tone analysis task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    VoiceToneAnalysisTask& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice tone analysis task was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    VoiceToneAnalysisTask& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceToneAnalysisTaskId;
    bool m_voiceToneAnalysisTaskIdHasBeenSet = false;

    MediaPipelineTaskStatus m_voiceToneAnalysisTaskStatus{MediaPipelineTaskStatus::NOT_SET};
    bool m_voiceToneAnalysisTaskStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
