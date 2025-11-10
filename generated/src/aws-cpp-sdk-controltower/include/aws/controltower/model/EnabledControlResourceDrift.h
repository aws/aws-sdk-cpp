/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/DriftStatus.h>

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
 * <p>Represents drift information related to the underlying Amazon Web Services
 * resources managed by the control.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledControlResourceDrift">AWS
 * API Reference</a></p>
 */
class EnabledControlResourceDrift {
 public:
  AWS_CONTROLTOWER_API EnabledControlResourceDrift() = default;
  AWS_CONTROLTOWER_API EnabledControlResourceDrift(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLTOWER_API EnabledControlResourceDrift& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of resource drift for the enabled control, indicating whether the
   * underlying resources match the expected configuration.</p>
   */
  inline DriftStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DriftStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EnabledControlResourceDrift& WithStatus(DriftStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  DriftStatus m_status{DriftStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
