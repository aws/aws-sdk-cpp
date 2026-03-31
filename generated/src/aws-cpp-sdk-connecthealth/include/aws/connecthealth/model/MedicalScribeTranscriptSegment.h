/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>A segment of transcript text with timing and channel
 * information</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeTranscriptSegment">AWS
 * API Reference</a></p>
 */
class MedicalScribeTranscriptSegment {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeTranscriptSegment() = default;
  AWS_CONNECTHEALTH_API MedicalScribeTranscriptSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeTranscriptSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this segment</p>
   */
  inline const Aws::String& GetSegmentId() const { return m_segmentId; }
  inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
  template <typename SegmentIdT = Aws::String>
  void SetSegmentId(SegmentIdT&& value) {
    m_segmentIdHasBeenSet = true;
    m_segmentId = std::forward<SegmentIdT>(value);
  }
  template <typename SegmentIdT = Aws::String>
  MedicalScribeTranscriptSegment& WithSegmentId(SegmentIdT&& value) {
    SetSegmentId(std::forward<SegmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The offset from audio start when the audio for this segment begins</p>
   */
  inline double GetAudioBeginOffset() const { return m_audioBeginOffset; }
  inline bool AudioBeginOffsetHasBeenSet() const { return m_audioBeginOffsetHasBeenSet; }
  inline void SetAudioBeginOffset(double value) {
    m_audioBeginOffsetHasBeenSet = true;
    m_audioBeginOffset = value;
  }
  inline MedicalScribeTranscriptSegment& WithAudioBeginOffset(double value) {
    SetAudioBeginOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The offset from audio start when the audio for this segment ends</p>
   */
  inline double GetAudioEndOffset() const { return m_audioEndOffset; }
  inline bool AudioEndOffsetHasBeenSet() const { return m_audioEndOffsetHasBeenSet; }
  inline void SetAudioEndOffset(double value) {
    m_audioEndOffsetHasBeenSet = true;
    m_audioEndOffset = value;
  }
  inline MedicalScribeTranscriptSegment& WithAudioEndOffset(double value) {
    SetAudioEndOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this is a partial or final transcript</p>
   */
  inline bool GetIsPartial() const { return m_isPartial; }
  inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }
  inline void SetIsPartial(bool value) {
    m_isPartialHasBeenSet = true;
    m_isPartial = value;
  }
  inline MedicalScribeTranscriptSegment& WithIsPartial(bool value) {
    SetIsPartial(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channel identifier for this segment</p>
   */
  inline const Aws::String& GetChannelId() const { return m_channelId; }
  inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
  template <typename ChannelIdT = Aws::String>
  void SetChannelId(ChannelIdT&& value) {
    m_channelIdHasBeenSet = true;
    m_channelId = std::forward<ChannelIdT>(value);
  }
  template <typename ChannelIdT = Aws::String>
  MedicalScribeTranscriptSegment& WithChannelId(ChannelIdT&& value) {
    SetChannelId(std::forward<ChannelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transcript text content</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  MedicalScribeTranscriptSegment& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_segmentId;

  double m_audioBeginOffset{0.0};

  double m_audioEndOffset{0.0};

  bool m_isPartial{false};

  Aws::String m_channelId;

  Aws::String m_content;
  bool m_segmentIdHasBeenSet = false;
  bool m_audioBeginOffsetHasBeenSet = false;
  bool m_audioEndOffsetHasBeenSet = false;
  bool m_isPartialHasBeenSet = false;
  bool m_channelIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
