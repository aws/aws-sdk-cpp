/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/EbsSnapshot.h>
#include <aws/guardduty/model/VolumeDetail.h>

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
 * <p>Contains additional information about a resource that was
 * scanned.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScannedResourceDetails">AWS
 * API Reference</a></p>
 */
class ScannedResourceDetails {
 public:
  AWS_GUARDDUTY_API ScannedResourceDetails() = default;
  AWS_GUARDDUTY_API ScannedResourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ScannedResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains information about the EBS volume that was scanned.</p>
   */
  inline const VolumeDetail& GetEbsVolume() const { return m_ebsVolume; }
  inline bool EbsVolumeHasBeenSet() const { return m_ebsVolumeHasBeenSet; }
  template <typename EbsVolumeT = VolumeDetail>
  void SetEbsVolume(EbsVolumeT&& value) {
    m_ebsVolumeHasBeenSet = true;
    m_ebsVolume = std::forward<EbsVolumeT>(value);
  }
  template <typename EbsVolumeT = VolumeDetail>
  ScannedResourceDetails& WithEbsVolume(EbsVolumeT&& value) {
    SetEbsVolume(std::forward<EbsVolumeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the EBS snapshot that was scanned.</p>
   */
  inline const EbsSnapshot& GetEbsSnapshot() const { return m_ebsSnapshot; }
  inline bool EbsSnapshotHasBeenSet() const { return m_ebsSnapshotHasBeenSet; }
  template <typename EbsSnapshotT = EbsSnapshot>
  void SetEbsSnapshot(EbsSnapshotT&& value) {
    m_ebsSnapshotHasBeenSet = true;
    m_ebsSnapshot = std::forward<EbsSnapshotT>(value);
  }
  template <typename EbsSnapshotT = EbsSnapshot>
  ScannedResourceDetails& WithEbsSnapshot(EbsSnapshotT&& value) {
    SetEbsSnapshot(std::forward<EbsSnapshotT>(value));
    return *this;
  }
  ///@}
 private:
  VolumeDetail m_ebsVolume;

  EbsSnapshot m_ebsSnapshot;
  bool m_ebsVolumeHasBeenSet = false;
  bool m_ebsSnapshotHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
