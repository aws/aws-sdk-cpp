/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/DocumentDbUngracefulBehavior.h>

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
 * <p>Configuration for handling failures when performing operations on DocumentDB
 * global clusters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/DocumentDbUngraceful">AWS
 * API Reference</a></p>
 */
class DocumentDbUngraceful {
 public:
  AWS_ARCREGIONSWITCH_API DocumentDbUngraceful() = default;
  AWS_ARCREGIONSWITCH_API DocumentDbUngraceful(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API DocumentDbUngraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The settings for ungraceful execution.</p>
   */
  inline DocumentDbUngracefulBehavior GetUngraceful() const { return m_ungraceful; }
  inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
  inline void SetUngraceful(DocumentDbUngracefulBehavior value) {
    m_ungracefulHasBeenSet = true;
    m_ungraceful = value;
  }
  inline DocumentDbUngraceful& WithUngraceful(DocumentDbUngracefulBehavior value) {
    SetUngraceful(value);
    return *this;
  }
  ///@}
 private:
  DocumentDbUngracefulBehavior m_ungraceful{DocumentDbUngracefulBehavior::NOT_SET};
  bool m_ungracefulHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
