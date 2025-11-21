/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about the incremental scan configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/IncrementalScanDetails">AWS
 * API Reference</a></p>
 */
class IncrementalScanDetails {
 public:
  AWS_GUARDDUTY_API IncrementalScanDetails() = default;
  AWS_GUARDDUTY_API IncrementalScanDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API IncrementalScanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the baseline resource used for incremental
   * scanning. The scan will only process changes since this baseline resource was
   * created.</p>
   */
  inline const Aws::String& GetBaselineResourceArn() const { return m_baselineResourceArn; }
  inline bool BaselineResourceArnHasBeenSet() const { return m_baselineResourceArnHasBeenSet; }
  template <typename BaselineResourceArnT = Aws::String>
  void SetBaselineResourceArn(BaselineResourceArnT&& value) {
    m_baselineResourceArnHasBeenSet = true;
    m_baselineResourceArn = std::forward<BaselineResourceArnT>(value);
  }
  template <typename BaselineResourceArnT = Aws::String>
  IncrementalScanDetails& WithBaselineResourceArn(BaselineResourceArnT&& value) {
    SetBaselineResourceArn(std::forward<BaselineResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baselineResourceArn;
  bool m_baselineResourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
