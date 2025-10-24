﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ServiceState.h>
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
namespace ApplicationSignals {
namespace Model {
class ListServiceStatesResult {
 public:
  AWS_APPLICATIONSIGNALS_API ListServiceStatesResult() = default;
  AWS_APPLICATIONSIGNALS_API ListServiceStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPLICATIONSIGNALS_API ListServiceStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The start of the time period that the returned information applies to. When
   * used in a raw HTTP Query API, it is formatted as epoch time in seconds. For
   * example, <code>1698778057</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ListServiceStatesResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time period that the returned information applies to. When
   * used in a raw HTTP Query API, it is formatted as epoch time in seconds. For
   * example, <code>1698778057</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ListServiceStatesResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of structures, where each structure contains information about the
   * state of one service, including its latest change events such as
   * deployments.</p>
   */
  inline const Aws::Vector<ServiceState>& GetServiceStates() const { return m_serviceStates; }
  template <typename ServiceStatesT = Aws::Vector<ServiceState>>
  void SetServiceStates(ServiceStatesT&& value) {
    m_serviceStatesHasBeenSet = true;
    m_serviceStates = std::forward<ServiceStatesT>(value);
  }
  template <typename ServiceStatesT = Aws::Vector<ServiceState>>
  ListServiceStatesResult& WithServiceStates(ServiceStatesT&& value) {
    SetServiceStates(std::forward<ServiceStatesT>(value));
    return *this;
  }
  template <typename ServiceStatesT = ServiceState>
  ListServiceStatesResult& AddServiceStates(ServiceStatesT&& value) {
    m_serviceStatesHasBeenSet = true;
    m_serviceStates.emplace_back(std::forward<ServiceStatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Include this value in your next use of this API to get the next set of
   * service states.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListServiceStatesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListServiceStatesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
  bool m_endTimeHasBeenSet = false;

  Aws::Vector<ServiceState> m_serviceStates;
  bool m_serviceStatesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
