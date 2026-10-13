/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/SsmSendCommandUngracefulBehavior.h>

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
 * <p>The ungraceful execution settings for an AWS Systems Manager
 * <code>SendCommand</code> execution block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/SsmSendCommandUngraceful">AWS
 * API Reference</a></p>
 */
class SsmSendCommandUngraceful {
 public:
  AWS_ARCREGIONSWITCH_API SsmSendCommandUngraceful() = default;
  AWS_ARCREGIONSWITCH_API SsmSendCommandUngraceful(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API SsmSendCommandUngraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether to skip running this command during an ungraceful
   * execution. Set to <code>skip</code> to skip the command.</p>
   */
  inline SsmSendCommandUngracefulBehavior GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  inline void SetBehavior(SsmSendCommandUngracefulBehavior value) {
    m_behaviorHasBeenSet = true;
    m_behavior = value;
  }
  inline SsmSendCommandUngraceful& WithBehavior(SsmSendCommandUngracefulBehavior value) {
    SetBehavior(value);
    return *this;
  }
  ///@}
 private:
  SsmSendCommandUngracefulBehavior m_behavior{SsmSendCommandUngracefulBehavior::NOT_SET};
  bool m_behaviorHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
