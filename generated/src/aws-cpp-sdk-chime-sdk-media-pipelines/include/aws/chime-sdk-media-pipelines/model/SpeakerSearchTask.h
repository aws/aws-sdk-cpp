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
   * <p>A representation of an asynchronous request to perform speaker search
   * analysis on a media insights pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/SpeakerSearchTask">AWS
   * API Reference</a></p>
   */
  class SpeakerSearchTask
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API SpeakerSearchTask();
    AWS_CHIMESDKMEDIAPIPELINES_API SpeakerSearchTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SpeakerSearchTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The speaker search task ID.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskId() const{ return m_speakerSearchTaskId; }
    inline bool SpeakerSearchTaskIdHasBeenSet() const { return m_speakerSearchTaskIdHasBeenSet; }
    inline void SetSpeakerSearchTaskId(const Aws::String& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = value; }
    inline void SetSpeakerSearchTaskId(Aws::String&& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = std::move(value); }
    inline void SetSpeakerSearchTaskId(const char* value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId.assign(value); }
    inline SpeakerSearchTask& WithSpeakerSearchTaskId(const Aws::String& value) { SetSpeakerSearchTaskId(value); return *this;}
    inline SpeakerSearchTask& WithSpeakerSearchTaskId(Aws::String&& value) { SetSpeakerSearchTaskId(std::move(value)); return *this;}
    inline SpeakerSearchTask& WithSpeakerSearchTaskId(const char* value) { SetSpeakerSearchTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the speaker search task.</p>
     */
    inline const MediaPipelineTaskStatus& GetSpeakerSearchTaskStatus() const{ return m_speakerSearchTaskStatus; }
    inline bool SpeakerSearchTaskStatusHasBeenSet() const { return m_speakerSearchTaskStatusHasBeenSet; }
    inline void SetSpeakerSearchTaskStatus(const MediaPipelineTaskStatus& value) { m_speakerSearchTaskStatusHasBeenSet = true; m_speakerSearchTaskStatus = value; }
    inline void SetSpeakerSearchTaskStatus(MediaPipelineTaskStatus&& value) { m_speakerSearchTaskStatusHasBeenSet = true; m_speakerSearchTaskStatus = std::move(value); }
    inline SpeakerSearchTask& WithSpeakerSearchTaskStatus(const MediaPipelineTaskStatus& value) { SetSpeakerSearchTaskStatus(value); return *this;}
    inline SpeakerSearchTask& WithSpeakerSearchTaskStatus(MediaPipelineTaskStatus&& value) { SetSpeakerSearchTaskStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a speaker search task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline SpeakerSearchTask& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline SpeakerSearchTask& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a speaker search task was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline SpeakerSearchTask& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline SpeakerSearchTask& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_speakerSearchTaskId;
    bool m_speakerSearchTaskIdHasBeenSet = false;

    MediaPipelineTaskStatus m_speakerSearchTaskStatus;
    bool m_speakerSearchTaskStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
