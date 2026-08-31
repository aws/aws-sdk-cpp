/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ScheduleConfiguration.h>
#include <aws/customer-profiles/model/ScheduledExecutions.h>
#include <aws/customer-profiles/model/SegmentSubscriptionStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class GetSegmentSubscriptionResult {
 public:
  AWS_CUSTOMERPROFILES_API GetSegmentSubscriptionResult() = default;
  AWS_CUSTOMERPROFILES_API GetSegmentSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API GetSegmentSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current lifecycle status of the subscription. The following are valid
   * values: </p> <ul> <li> <p> <b>STARTING</b>: Initial snapshot is in progress.
   * </p> </li> <li> <p> <b>RUNNING</b>: Notifications are active and running. </p>
   * </li> <li> <p> <b>STOPPED</b>: Notifications have been stopped. </p> </li> <li>
   * <p> <b>FAILED</b>: Notifications failed (for example, the Amazon Kinesis data
   * stream became inaccessible). </p> </li> </ul>
   */
  inline SegmentSubscriptionStatus GetStatus() const { return m_status; }
  inline void SetStatus(SegmentSubscriptionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetSegmentSubscriptionResult& WithStatus(SegmentSubscriptionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A status message providing additional context, such as a failure reason. </p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  GetSegmentSubscriptionResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule configuration for periodic membership event notifications. </p>
   */
  inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  void SetScheduleConfiguration(ScheduleConfigurationT&& value) {
    m_scheduleConfigurationHasBeenSet = true;
    m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value);
  }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  GetSegmentSubscriptionResult& WithScheduleConfiguration(ScheduleConfigurationT&& value) {
    SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about scheduled execution timestamps. </p>
   */
  inline const ScheduledExecutions& GetScheduledExecutions() const { return m_scheduledExecutions; }
  template <typename ScheduledExecutionsT = ScheduledExecutions>
  void SetScheduledExecutions(ScheduledExecutionsT&& value) {
    m_scheduledExecutionsHasBeenSet = true;
    m_scheduledExecutions = std::forward<ScheduledExecutionsT>(value);
  }
  template <typename ScheduledExecutionsT = ScheduledExecutions>
  GetSegmentSubscriptionResult& WithScheduledExecutions(ScheduledExecutionsT&& value) {
    SetScheduledExecutions(std::forward<ScheduledExecutionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the subscription was first started. </p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetSegmentSubscriptionResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the most recent configuration change. </p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  GetSegmentSubscriptionResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
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
  GetSegmentSubscriptionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SegmentSubscriptionStatus m_status{SegmentSubscriptionStatus::NOT_SET};

  Aws::String m_message;

  ScheduleConfiguration m_scheduleConfiguration;

  ScheduledExecutions m_scheduledExecutions;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_scheduleConfigurationHasBeenSet = false;
  bool m_scheduledExecutionsHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
