/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledBaselineDriftStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ControlTower {
namespace Model {

/**
 * <p>The source drift summary for the enabled baseline. Source drift occurs when
 * an enabled baseline no longer matches the landing zone's
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineSourceDrift">AWS
 * API Reference</a></p>
 */
class EnabledBaselineSourceDrift {
 public:
  AWS_CONTROLTOWER_API EnabledBaselineSourceDrift() = default;
  AWS_CONTROLTOWER_API EnabledBaselineSourceDrift(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLTOWER_API EnabledBaselineSourceDrift& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source drift status for the enabled baseline.</p>
   */
  inline EnabledBaselineDriftStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EnabledBaselineDriftStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EnabledBaselineSourceDrift& WithStatus(EnabledBaselineDriftStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  EnabledBaselineDriftStatus m_status{EnabledBaselineDriftStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
