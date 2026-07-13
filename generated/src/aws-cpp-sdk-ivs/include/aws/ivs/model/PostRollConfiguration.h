/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IVS {
namespace Model {

/**
 * <p>Configuration for the post-roll ad break to use for this ad
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/PostRollConfiguration">AWS
 * API Reference</a></p>
 */
class PostRollConfiguration {
 public:
  AWS_IVS_API PostRollConfiguration() = default;
  AWS_IVS_API PostRollConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVS_API PostRollConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Duration of the post-roll ad break, in seconds.</p>
   */
  inline int GetDurationSeconds() const { return m_durationSeconds; }
  inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline PostRollConfiguration& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the post-roll ad configuration is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline PostRollConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  int m_durationSeconds{0};

  bool m_enabled{false};
  bool m_durationSecondsHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
