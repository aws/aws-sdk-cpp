/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/RdsUngracefulBehavior.h>

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
 * <p>The ungraceful execution settings for an Amazon RDS switchover read replica
 * execution block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/RdsUngraceful">AWS
 * API Reference</a></p>
 */
class RdsUngraceful {
 public:
  AWS_ARCREGIONSWITCH_API RdsUngraceful() = default;
  AWS_ARCREGIONSWITCH_API RdsUngraceful(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API RdsUngraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ungraceful behavior to perform if switching to ungraceful execution.</p>
   */
  inline RdsUngracefulBehavior GetUngraceful() const { return m_ungraceful; }
  inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
  inline void SetUngraceful(RdsUngracefulBehavior value) {
    m_ungracefulHasBeenSet = true;
    m_ungraceful = value;
  }
  inline RdsUngraceful& WithUngraceful(RdsUngracefulBehavior value) {
    SetUngraceful(value);
    return *this;
  }
  ///@}
 private:
  RdsUngracefulBehavior m_ungraceful{RdsUngracefulBehavior::NOT_SET};
  bool m_ungracefulHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
