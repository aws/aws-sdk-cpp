/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

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
 * <p>The width and height of the output video. Used in SubtitlingConfig to
 * determine subtitle layout. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/AspectRatio">AWS
 * API Reference</a></p>
 */
class AspectRatio {
 public:
  AWS_ELEMENTALINFERENCE_API AspectRatio() = default;
  AWS_ELEMENTALINFERENCE_API AspectRatio(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API AspectRatio& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The width component of the aspect ratio (for example, 16 in a 16:9
   * ratio).</p>
   */
  inline int GetWidth() const { return m_width; }
  inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
  inline void SetWidth(int value) {
    m_widthHasBeenSet = true;
    m_width = value;
  }
  inline AspectRatio& WithWidth(int value) {
    SetWidth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The height component of the aspect ratio (for example, 9 in a 16:9
   * ratio).</p>
   */
  inline int GetHeight() const { return m_height; }
  inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
  inline void SetHeight(int value) {
    m_heightHasBeenSet = true;
    m_height = value;
  }
  inline AspectRatio& WithHeight(int value) {
    SetHeight(value);
    return *this;
  }
  ///@}
 private:
  int m_width{0};

  int m_height{0};
  bool m_widthHasBeenSet = false;
  bool m_heightHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
