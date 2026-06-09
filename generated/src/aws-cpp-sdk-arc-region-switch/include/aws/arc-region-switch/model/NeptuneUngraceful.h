/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/NeptuneUngracefulBehavior.h>

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
 * <p>Configuration for handling failures when performing operations on Neptune
 * global databases.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/NeptuneUngraceful">AWS
 * API Reference</a></p>
 */
class NeptuneUngraceful {
 public:
  AWS_ARCREGIONSWITCH_API NeptuneUngraceful() = default;
  AWS_ARCREGIONSWITCH_API NeptuneUngraceful(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API NeptuneUngraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The settings for ungraceful execution.</p>
   */
  inline NeptuneUngracefulBehavior GetUngraceful() const { return m_ungraceful; }
  inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
  inline void SetUngraceful(NeptuneUngracefulBehavior value) {
    m_ungracefulHasBeenSet = true;
    m_ungraceful = value;
  }
  inline NeptuneUngraceful& WithUngraceful(NeptuneUngracefulBehavior value) {
    SetUngraceful(value);
    return *this;
  }
  ///@}
 private:
  NeptuneUngracefulBehavior m_ungraceful{NeptuneUngracefulBehavior::NOT_SET};
  bool m_ungracefulHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
