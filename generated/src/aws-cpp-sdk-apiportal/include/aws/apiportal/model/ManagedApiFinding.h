/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/FindingReason.h>
#include <aws/apiportal/model/PostureStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>Security posture finding attached to this API. Shape mirrors the inventory's
 * Finding sub-document.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ManagedApiFinding">AWS
 * API Reference</a></p>
 */
class ManagedApiFinding {
 public:
  AWS_APIPORTAL_API ManagedApiFinding() = default;
  AWS_APIPORTAL_API ManagedApiFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ManagedApiFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the posture check that produced the finding.</p>
   */
  inline const Aws::String& GetPostureId() const { return m_postureId; }
  inline bool PostureIdHasBeenSet() const { return m_postureIdHasBeenSet; }
  template <typename PostureIdT = Aws::String>
  void SetPostureId(PostureIdT&& value) {
    m_postureIdHasBeenSet = true;
    m_postureId = std::forward<PostureIdT>(value);
  }
  template <typename PostureIdT = Aws::String>
  ManagedApiFinding& WithPostureId(PostureIdT&& value) {
    SetPostureId(std::forward<PostureIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline PostureStatus GetPostureStatus() const { return m_postureStatus; }
  inline bool PostureStatusHasBeenSet() const { return m_postureStatusHasBeenSet; }
  inline void SetPostureStatus(PostureStatus value) {
    m_postureStatusHasBeenSet = true;
    m_postureStatus = value;
  }
  inline ManagedApiFinding& WithPostureStatus(PostureStatus value) {
    SetPostureStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline FindingReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(FindingReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ManagedApiFinding& WithReason(FindingReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the finding was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ManagedApiFinding& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_postureId;

  PostureStatus m_postureStatus{PostureStatus::NOT_SET};

  FindingReason m_reason{FindingReason::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_postureIdHasBeenSet = false;
  bool m_postureStatusHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
