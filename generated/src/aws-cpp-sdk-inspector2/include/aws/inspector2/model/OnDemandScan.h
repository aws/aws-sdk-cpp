/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/OnDemandResourceType.h>
#include <aws/inspector2/model/OnDemandScanStatus.h>
#include <aws/inspector2/model/OnDemandScanStatusReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Details of a single on-demand scan of a resource.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/OnDemandScan">AWS
 * API Reference</a></p>
 */
class OnDemandScan {
 public:
  AWS_INSPECTOR2_API OnDemandScan() = default;
  AWS_INSPECTOR2_API OnDemandScan(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API OnDemandScan& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the on-demand scan.</p>
   */
  inline const Aws::String& GetScanId() const { return m_scanId; }
  inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }
  template <typename ScanIdT = Aws::String>
  void SetScanId(ScanIdT&& value) {
    m_scanIdHasBeenSet = true;
    m_scanId = std::forward<ScanIdT>(value);
  }
  template <typename ScanIdT = Aws::String>
  OnDemandScan& WithScanId(ScanIdT&& value) {
    SetScanId(std::forward<ScanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource that was scanned.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  OnDemandScan& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource that was scanned.</p>
   */
  inline OnDemandResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(OnDemandResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline OnDemandScan& WithResourceType(OnDemandResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the on-demand scan.</p>
   */
  inline OnDemandScanStatus GetScanStatus() const { return m_scanStatus; }
  inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }
  inline void SetScanStatus(OnDemandScanStatus value) {
    m_scanStatusHasBeenSet = true;
    m_scanStatus = value;
  }
  inline OnDemandScan& WithScanStatus(OnDemandScanStatus value) {
    SetScanStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason associated with the current on-demand scan status.</p>
   */
  inline OnDemandScanStatusReason GetScanStatusReason() const { return m_scanStatusReason; }
  inline bool ScanStatusReasonHasBeenSet() const { return m_scanStatusReasonHasBeenSet; }
  inline void SetScanStatusReason(OnDemandScanStatusReason value) {
    m_scanStatusReasonHasBeenSet = true;
    m_scanStatusReason = value;
  }
  inline OnDemandScan& WithScanStatusReason(OnDemandScanStatusReason value) {
    SetScanStatusReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in ISO 8601 format, when the on-demand scan started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  OnDemandScan& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in ISO 8601 format, when the on-demand scan completed.
   * This field is absent if the scan has not completed.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  OnDemandScan& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scanId;

  Aws::String m_resourceId;

  OnDemandResourceType m_resourceType{OnDemandResourceType::NOT_SET};

  OnDemandScanStatus m_scanStatus{OnDemandScanStatus::NOT_SET};

  OnDemandScanStatusReason m_scanStatusReason{OnDemandScanStatusReason::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_completedAt{};
  bool m_scanIdHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_scanStatusHasBeenSet = false;
  bool m_scanStatusReasonHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
