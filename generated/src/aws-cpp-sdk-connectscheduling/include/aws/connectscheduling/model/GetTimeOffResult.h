/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/connectscheduling/model/ActorInfo.h>
#include <aws/connectscheduling/model/TimeOffStatus.h>
#include <aws/connectscheduling/model/TimeOffValidationResult.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ConnectScheduling {
namespace Model {
/**
 * <p>The response for <code>GetTimeOff</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/GetTimeOffResponse">AWS
 * API Reference</a></p>
 */
class GetTimeOffResult {
 public:
  AWS_CONNECTSCHEDULING_API GetTimeOffResult() = default;
  AWS_CONNECTSCHEDULING_API GetTimeOffResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTSCHEDULING_API GetTimeOffResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the time off request.</p>
   */
  inline const Aws::String& GetTimeOffId() const { return m_timeOffId; }
  template <typename TimeOffIdT = Aws::String>
  void SetTimeOffId(TimeOffIdT&& value) {
    m_timeOffIdHasBeenSet = true;
    m_timeOffId = std::forward<TimeOffIdT>(value);
  }
  template <typename TimeOffIdT = Aws::String>
  GetTimeOffResult& WithTimeOffId(TimeOffIdT&& value) {
    SetTimeOffId(std::forward<TimeOffIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user the time off is for.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  GetTimeOffResult& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the shift activity for the time off request.</p>
   */
  inline const Aws::String& GetShiftActivityId() const { return m_shiftActivityId; }
  template <typename ShiftActivityIdT = Aws::String>
  void SetShiftActivityId(ShiftActivityIdT&& value) {
    m_shiftActivityIdHasBeenSet = true;
    m_shiftActivityId = std::forward<ShiftActivityIdT>(value);
  }
  template <typename ShiftActivityIdT = Aws::String>
  GetTimeOffResult& WithShiftActivityId(ShiftActivityIdT&& value) {
    SetShiftActivityId(std::forward<ShiftActivityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the time off window, inclusive, as sent to
   * <code>CreateTimeOff</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetStartAt() const { return m_startAt; }
  template <typename StartAtT = Aws::Utils::DateTime>
  void SetStartAt(StartAtT&& value) {
    m_startAtHasBeenSet = true;
    m_startAt = std::forward<StartAtT>(value);
  }
  template <typename StartAtT = Aws::Utils::DateTime>
  GetTimeOffResult& WithStartAt(StartAtT&& value) {
    SetStartAt(std::forward<StartAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time off window, exclusive, as sent to
   * <code>CreateTimeOff</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetEndAt() const { return m_endAt; }
  template <typename EndAtT = Aws::Utils::DateTime>
  void SetEndAt(EndAtT&& value) {
    m_endAtHasBeenSet = true;
    m_endAt = std::forward<EndAtT>(value);
  }
  template <typename EndAtT = Aws::Utils::DateTime>
  GetTimeOffResult& WithEndAt(EndAtT&& value) {
    SetEndAt(std::forward<EndAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the time off request.</p> <ul> <li> <p> <code>PENDING</code>:
   * Connect Customer is processing a change to the request, which then changes to
   * another status. An edit in the Connect Customer admin website can also make a
   * request <code>PENDING</code>, so an <code>APPROVED</code> request can become
   * <code>PENDING</code> and then end <code>APPROVED</code> or
   * <code>REJECTED</code>.</p> </li> <li> <p> <code>AWAITING_APPROVAL</code>: the
   * request is waiting for an <code>ApproveTimeOff</code> or
   * <code>RejectTimeOff</code> call.</p> </li> </ul>
   */
  inline TimeOffStatus GetStatus() const { return m_status; }
  inline void SetStatus(TimeOffStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTimeOffResult& WithStatus(TimeOffStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the time off request. <code>CreateTimeOff</code> sets it,
   * and <code>CancelTimeOff</code> replaces or removes it. An edit in the Connect
   * Customer admin website can also change it. <code>GetTimeOff</code> doesn't
   * return descriptions sent with <code>ApproveTimeOff</code> or
   * <code>RejectTimeOff</code>.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetTimeOffResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Warnings or failures produced while processing the time off request.</p>
   */
  inline const Aws::Vector<TimeOffValidationResult>& GetValidationResults() const { return m_validationResults; }
  template <typename ValidationResultsT = Aws::Vector<TimeOffValidationResult>>
  void SetValidationResults(ValidationResultsT&& value) {
    m_validationResultsHasBeenSet = true;
    m_validationResults = std::forward<ValidationResultsT>(value);
  }
  template <typename ValidationResultsT = Aws::Vector<TimeOffValidationResult>>
  GetTimeOffResult& WithValidationResults(ValidationResultsT&& value) {
    SetValidationResults(std::forward<ValidationResultsT>(value));
    return *this;
  }
  template <typename ValidationResultsT = TimeOffValidationResult>
  GetTimeOffResult& AddValidationResults(ValidationResultsT&& value) {
    m_validationResultsHasBeenSet = true;
    m_validationResults.emplace_back(std::forward<ValidationResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity that created the request. Immutable for the life of the
   * request.</p>
   */
  inline const ActorInfo& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = ActorInfo>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = ActorInfo>
  GetTimeOffResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the time off request was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetTimeOffResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity that made the most recent <code>ApproveTimeOff</code>,
   * <code>RejectTimeOff</code>, or <code>CancelTimeOff</code> call on the request,
   * or took the same action in the Connect Customer admin website. Absent until one
   * of those actions is taken, including after Connect Customer decides an
   * <code>AUTOMATIC</code> request. <code>UpdatedAt</code> also changes when a
   * <code>PENDING</code> request changes to another status and for other edits,
   * which don't set <code>UpdatedBy</code>.</p>
   */
  inline const ActorInfo& GetUpdatedBy() const { return m_updatedBy; }
  template <typename UpdatedByT = ActorInfo>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = ActorInfo>
  GetTimeOffResult& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the time off request was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetTimeOffResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTimeOffResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_timeOffId;

  Aws::String m_userId;

  Aws::String m_shiftActivityId;

  Aws::Utils::DateTime m_startAt{};

  Aws::Utils::DateTime m_endAt{};

  TimeOffStatus m_status{TimeOffStatus::NOT_SET};

  Aws::String m_description;

  Aws::Vector<TimeOffValidationResult> m_validationResults;

  ActorInfo m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  ActorInfo m_updatedBy;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_timeOffIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_shiftActivityIdHasBeenSet = false;
  bool m_startAtHasBeenSet = false;
  bool m_endAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_validationResultsHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
