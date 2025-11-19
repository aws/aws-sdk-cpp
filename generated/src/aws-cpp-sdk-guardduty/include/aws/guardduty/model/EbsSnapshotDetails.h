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
 * <p>Contains details about the EBS snapshot that was scanned for
 * malware.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EbsSnapshotDetails">AWS
 * API Reference</a></p>
 */
class EbsSnapshotDetails {
 public:
  AWS_GUARDDUTY_API EbsSnapshotDetails() = default;
  AWS_GUARDDUTY_API EbsSnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API EbsSnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the EBS snapshot.</p>
   */
  inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
  inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
  template <typename SnapshotArnT = Aws::String>
  void SetSnapshotArn(SnapshotArnT&& value) {
    m_snapshotArnHasBeenSet = true;
    m_snapshotArn = std::forward<SnapshotArnT>(value);
  }
  template <typename SnapshotArnT = Aws::String>
  EbsSnapshotDetails& WithSnapshotArn(SnapshotArnT&& value) {
    SetSnapshotArn(std::forward<SnapshotArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotArn;
  bool m_snapshotArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
