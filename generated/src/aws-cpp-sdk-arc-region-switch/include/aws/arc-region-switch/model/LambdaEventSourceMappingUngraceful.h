/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/LambdaEventSourceMappingUngracefulBehavior.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>Specifies whether to skip enabling or disabling an event source mapping
 * during an ungraceful execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/LambdaEventSourceMappingUngraceful">AWS
 * API Reference</a></p>
 */
class LambdaEventSourceMappingUngraceful {
 public:
  AWS_ARCREGIONSWITCH_API LambdaEventSourceMappingUngraceful() = default;
  AWS_ARCREGIONSWITCH_API LambdaEventSourceMappingUngraceful(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API LambdaEventSourceMappingUngraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Set to <code>skip</code> to skip executing this event source mapping step
   * during an ungraceful execution.</p>
   */
  inline LambdaEventSourceMappingUngracefulBehavior GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  inline void SetBehavior(LambdaEventSourceMappingUngracefulBehavior value) {
    m_behaviorHasBeenSet = true;
    m_behavior = value;
  }
  inline LambdaEventSourceMappingUngraceful& WithBehavior(LambdaEventSourceMappingUngracefulBehavior value) {
    SetBehavior(value);
    return *this;
  }
  ///@}
 private:
  LambdaEventSourceMappingUngracefulBehavior m_behavior{LambdaEventSourceMappingUngracefulBehavior::NOT_SET};
  bool m_behaviorHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
