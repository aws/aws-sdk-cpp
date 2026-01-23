/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseStatus.h>
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
class DescribeTestCaseRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DescribeTestCaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeTestCase"; }

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
  DescribeTestCaseRequest& WithInstanceId(InstanceIdT&& value) {
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
  DescribeTestCaseRequest& WithTestCaseId(TestCaseIdT&& value) {
    SetTestCaseId(std::forward<TestCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the test case version to retrieve. If not specified, returns
   * the published version if available, otherwise returns the saved version.</p>
   */
  inline TestCaseStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TestCaseStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeTestCaseRequest& WithStatus(TestCaseStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_testCaseId;

  TestCaseStatus m_status{TestCaseStatus::NOT_SET};
  bool m_instanceIdHasBeenSet = false;
  bool m_testCaseIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
