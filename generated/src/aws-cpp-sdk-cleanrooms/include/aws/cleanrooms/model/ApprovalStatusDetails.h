/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ApprovalStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains detailed information about the approval state of a given member in
 * the collaboration for a given collaboration change request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ApprovalStatusDetails">AWS
 * API Reference</a></p>
 */
class ApprovalStatusDetails {
 public:
  AWS_CLEANROOMS_API ApprovalStatusDetails() = default;
  AWS_CLEANROOMS_API ApprovalStatusDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ApprovalStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The approval status of a member's vote on the change request. Valid values
   * are PENDING (if they haven't voted), APPROVED, or DENIED.</p>
   */
  inline ApprovalStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ApprovalStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ApprovalStatusDetails& WithStatus(ApprovalStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  ApprovalStatus m_status{ApprovalStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
