/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseExecutionStatus.h>
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
class ListTestCaseExecutionRecordsRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API ListTestCaseExecutionRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListTestCaseExecutionRecords"; }

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
  ListTestCaseExecutionRecordsRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test case.</p>
   */
  inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
  inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
  template <typename TestCaseIdT = Aws::String>
  void SetTestCaseId(TestCaseIdT&& value) {
    m_testCaseIdHasBeenSet = true;
    m_testCaseId = std::forward<TestCaseIdT>(value);
  }
  template <typename TestCaseIdT = Aws::String>
  ListTestCaseExecutionRecordsRequest& WithTestCaseId(TestCaseIdT&& value) {
    SetTestCaseId(std::forward<TestCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test case execution.</p>
   */
  inline const Aws::String& GetTestCaseExecutionId() const { return m_testCaseExecutionId; }
  inline bool TestCaseExecutionIdHasBeenSet() const { return m_testCaseExecutionIdHasBeenSet; }
  template <typename TestCaseExecutionIdT = Aws::String>
  void SetTestCaseExecutionId(TestCaseExecutionIdT&& value) {
    m_testCaseExecutionIdHasBeenSet = true;
    m_testCaseExecutionId = std::forward<TestCaseExecutionIdT>(value);
  }
  template <typename TestCaseExecutionIdT = Aws::String>
  ListTestCaseExecutionRecordsRequest& WithTestCaseExecutionId(TestCaseExecutionIdT&& value) {
    SetTestCaseExecutionId(std::forward<TestCaseExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter execution records by status.</p>
   */
  inline TestCaseExecutionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TestCaseExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListTestCaseExecutionRecordsRequest& WithStatus(TestCaseExecutionStatus value) {
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
  ListTestCaseExecutionRecordsRequest& WithNextToken(NextTokenT&& value) {
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
  inline ListTestCaseExecutionRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_testCaseId;

  Aws::String m_testCaseExecutionId;

  TestCaseExecutionStatus m_status{TestCaseExecutionStatus::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_instanceIdHasBeenSet = false;
  bool m_testCaseIdHasBeenSet = false;
  bool m_testCaseExecutionIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
