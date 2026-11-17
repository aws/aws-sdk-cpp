/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/FrameSamplingMode.h>

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
 * <p>Specifies how Elemental Inference chooses frames from the media of each run,
 * and how many frames it chooses. The media of a run is the interval, shot, scene,
 * or clips that the run covers. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FrameSamplingStrategy">AWS
 * API Reference</a></p>
 */
class FrameSamplingStrategy {
 public:
  AWS_ELEMENTALINFERENCE_API FrameSamplingStrategy() = default;
  AWS_ELEMENTALINFERENCE_API FrameSamplingStrategy(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FrameSamplingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Which frames of the window to send: FIRST (the first frames), UNIFORM (frames
   * spread evenly across the window), or LAST (the last frames). </p>
   */
  inline FrameSamplingMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(FrameSamplingMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline FrameSamplingStrategy& WithMode(FrameSamplingMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of frames to send on each run. Valid range: 1 to 64. The default
   * is 1. Each frame adds to the size of the model request and to what the model
   * charges for it. </p>
   */
  inline int GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline FrameSamplingStrategy& WithCount(int value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  FrameSamplingMode m_mode{FrameSamplingMode::NOT_SET};

  int m_count{0};
  bool m_modeHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
