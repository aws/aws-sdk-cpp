/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Connect {
namespace Model {

/**
 */
class ListTestCaseExecutionsRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API ListTestCaseExecutionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListTestCaseExecutions"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  ListTestCaseExecutionsRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions by test case identifier.</p>
   */
  inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
  inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
  template <typename TestCaseIdT = Aws::String>
  void SetTestCaseId(TestCaseIdT&& value) {
    m_testCaseIdHasBeenSet = true;
    m_testCaseId = std::forward<TestCaseIdT>(value);
  }
  template <typename TestCaseIdT = Aws::String>
  ListTestCaseExecutionsRequest& WithTestCaseId(TestCaseIdT&& value) {
    SetTestCaseId(std::forward<TestCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions by test case name.</p>
   */
  inline const Aws::String& GetTestCaseName() const { return m_testCaseName; }
  inline bool TestCaseNameHasBeenSet() const { return m_testCaseNameHasBeenSet; }
  template <typename TestCaseNameT = Aws::String>
  void SetTestCaseName(TestCaseNameT&& value) {
    m_testCaseNameHasBeenSet = true;
    m_testCaseName = std::forward<TestCaseNameT>(value);
  }
  template <typename TestCaseNameT = Aws::String>
  ListTestCaseExecutionsRequest& WithTestCaseName(TestCaseNameT&& value) {
    SetTestCaseName(std::forward<TestCaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions that started after this time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ListTestCaseExecutionsRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions that started before this time.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ListTestCaseExecutionsRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions by status.</p>
   */
  inline TestCaseExecutionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TestCaseExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListTestCaseExecutionsRequest& WithStatus(TestCaseExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Use the value returned in the previous
   * response in the next request to retrieve the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTestCaseExecutionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListTestCaseExecutionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_testCaseId;

  Aws::String m_testCaseName;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  TestCaseExecutionStatus m_status{TestCaseExecutionStatus::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_instanceIdHasBeenSet = false;
  bool m_testCaseIdHasBeenSet = false;
  bool m_testCaseNameHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
