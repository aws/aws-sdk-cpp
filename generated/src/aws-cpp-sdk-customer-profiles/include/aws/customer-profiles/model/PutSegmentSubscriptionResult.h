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
class PutSegmentSubscriptionResult {
 public:
  AWS_CUSTOMERPROFILES_API PutSegmentSubscriptionResult() = default;
  AWS_CUSTOMERPROFILES_API PutSegmentSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API PutSegmentSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  inline PutSegmentSubscriptionResult& WithStatus(SegmentSubscriptionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule configuration for the subscription, if configured. </p>
   */
  inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  void SetScheduleConfiguration(ScheduleConfigurationT&& value) {
    m_scheduleConfigurationHasBeenSet = true;
    m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value);
  }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  PutSegmentSubscriptionResult& WithScheduleConfiguration(ScheduleConfigurationT&& value) {
    SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the subscription was started. </p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  PutSegmentSubscriptionResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
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
  PutSegmentSubscriptionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SegmentSubscriptionStatus m_status{SegmentSubscriptionStatus::NOT_SET};

  ScheduleConfiguration m_scheduleConfiguration;

  Aws::Utils::DateTime m_startedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_scheduleConfigurationHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
