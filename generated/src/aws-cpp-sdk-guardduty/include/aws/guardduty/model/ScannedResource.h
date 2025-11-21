/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/MalwareProtectionResourceType.h>
#include <aws/guardduty/model/MalwareProtectionScanStatus.h>
#include <aws/guardduty/model/ScanStatusReason.h>
#include <aws/guardduty/model/ScannedResourceDetails.h>

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
 * <p>Contains information about a resource that was scanned as part of the malware
 * scan operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScannedResource">AWS
 * API Reference</a></p>
 */
class ScannedResource {
 public:
  AWS_GUARDDUTY_API ScannedResource() = default;
  AWS_GUARDDUTY_API ScannedResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ScannedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the scanned resource.</p>
   */
  inline const Aws::String& GetScannedResourceArn() const { return m_scannedResourceArn; }
  inline bool ScannedResourceArnHasBeenSet() const { return m_scannedResourceArnHasBeenSet; }
  template <typename ScannedResourceArnT = Aws::String>
  void SetScannedResourceArn(ScannedResourceArnT&& value) {
    m_scannedResourceArnHasBeenSet = true;
    m_scannedResourceArn = std::forward<ScannedResourceArnT>(value);
  }
  template <typename ScannedResourceArnT = Aws::String>
  ScannedResource& WithScannedResourceArn(ScannedResourceArnT&& value) {
    SetScannedResourceArn(std::forward<ScannedResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource type of the scanned resource.</p>
   */
  inline MalwareProtectionResourceType GetScannedResourceType() const { return m_scannedResourceType; }
  inline bool ScannedResourceTypeHasBeenSet() const { return m_scannedResourceTypeHasBeenSet; }
  inline void SetScannedResourceType(MalwareProtectionResourceType value) {
    m_scannedResourceTypeHasBeenSet = true;
    m_scannedResourceType = value;
  }
  inline ScannedResource& WithScannedResourceType(MalwareProtectionResourceType value) {
    SetScannedResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the scanned resource.</p>
   */
  inline MalwareProtectionScanStatus GetScannedResourceStatus() const { return m_scannedResourceStatus; }
  inline bool ScannedResourceStatusHasBeenSet() const { return m_scannedResourceStatusHasBeenSet; }
  inline void SetScannedResourceStatus(MalwareProtectionScanStatus value) {
    m_scannedResourceStatusHasBeenSet = true;
    m_scannedResourceStatus = value;
  }
  inline ScannedResource& WithScannedResourceStatus(MalwareProtectionScanStatus value) {
    SetScannedResourceStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the scan status of this particular resource, if
   * applicable.</p>
   */
  inline ScanStatusReason GetScanStatusReason() const { return m_scanStatusReason; }
  inline bool ScanStatusReasonHasBeenSet() const { return m_scanStatusReasonHasBeenSet; }
  inline void SetScanStatusReason(ScanStatusReason value) {
    m_scanStatusReasonHasBeenSet = true;
    m_scanStatusReason = value;
  }
  inline ScannedResource& WithScanStatusReason(ScanStatusReason value) {
    SetScanStatusReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the scanned resource.</p>
   */
  inline const ScannedResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
  inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
  template <typename ResourceDetailsT = ScannedResourceDetails>
  void SetResourceDetails(ResourceDetailsT&& value) {
    m_resourceDetailsHasBeenSet = true;
    m_resourceDetails = std::forward<ResourceDetailsT>(value);
  }
  template <typename ResourceDetailsT = ScannedResourceDetails>
  ScannedResource& WithResourceDetails(ResourceDetailsT&& value) {
    SetResourceDetails(std::forward<ResourceDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scannedResourceArn;
  bool m_scannedResourceArnHasBeenSet = false;

  MalwareProtectionResourceType m_scannedResourceType{MalwareProtectionResourceType::NOT_SET};
  bool m_scannedResourceTypeHasBeenSet = false;

  MalwareProtectionScanStatus m_scannedResourceStatus{MalwareProtectionScanStatus::NOT_SET};
  bool m_scannedResourceStatusHasBeenSet = false;

  ScanStatusReason m_scanStatusReason{ScanStatusReason::NOT_SET};
  bool m_scanStatusReasonHasBeenSet = false;

  ScannedResourceDetails m_resourceDetails;
  bool m_resourceDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
