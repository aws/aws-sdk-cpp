/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/FrameSamplingStrategy.h>
#include <aws/elementalinference/model/FrameSize.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>The frames that a function receives in media.frames on each run: which
 * frames, how many, and at what size. Elemental Inference applies these settings
 * only to a function that references media.frames. </p> <p>When you add or change
 * the function output, Elemental Inference estimates the size of the frames and
 * rejects settings whose frames won't fit in one model request. To send more
 * frames in each request, specify a smaller frameSize. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FrameSettings">AWS
 * API Reference</a></p>
 */
class FrameSettings {
 public:
  AWS_ELEMENTALINFERENCE_API FrameSettings() = default;
  AWS_ELEMENTALINFERENCE_API FrameSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FrameSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The method for choosing which frames to send.</p>
   */
  inline const FrameSamplingStrategy& GetFrameSampling() const { return m_frameSampling; }
  inline bool FrameSamplingHasBeenSet() const { return m_frameSamplingHasBeenSet; }
  template <typename FrameSamplingT = FrameSamplingStrategy>
  void SetFrameSampling(FrameSamplingT&& value) {
    m_frameSamplingHasBeenSet = true;
    m_frameSampling = std::forward<FrameSamplingT>(value);
  }
  template <typename FrameSamplingT = FrameSamplingStrategy>
  FrameSettings& WithFrameSampling(FrameSamplingT&& value) {
    SetFrameSampling(std::forward<FrameSamplingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size to resize each frame to. If you omit this structure, frames keep
   * their source size. Smaller frames reduce the size of the model request. </p>
   */
  inline const FrameSize& GetFrameSize() const { return m_frameSize; }
  inline bool FrameSizeHasBeenSet() const { return m_frameSizeHasBeenSet; }
  template <typename FrameSizeT = FrameSize>
  void SetFrameSize(FrameSizeT&& value) {
    m_frameSizeHasBeenSet = true;
    m_frameSize = std::forward<FrameSizeT>(value);
  }
  template <typename FrameSizeT = FrameSize>
  FrameSettings& WithFrameSize(FrameSizeT&& value) {
    SetFrameSize(std::forward<FrameSizeT>(value));
    return *this;
  }
  ///@}
 private:
  FrameSamplingStrategy m_frameSampling;

  FrameSize m_frameSize;
  bool m_frameSamplingHasBeenSet = false;
  bool m_frameSizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
