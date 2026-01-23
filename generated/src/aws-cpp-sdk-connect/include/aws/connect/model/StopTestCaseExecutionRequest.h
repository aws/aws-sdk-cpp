/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class StopTestCaseExecutionRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API StopTestCaseExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopTestCaseExecution"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

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
  StopTestCaseExecutionRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test case execution to stop.</p>
   */
  inline const Aws::String& GetTestCaseExecutionId() const { return m_testCaseExecutionId; }
  inline bool TestCaseExecutionIdHasBeenSet() const { return m_testCaseExecutionIdHasBeenSet; }
  template <typename TestCaseExecutionIdT = Aws::String>
  void SetTestCaseExecutionId(TestCaseExecutionIdT&& value) {
    m_testCaseExecutionIdHasBeenSet = true;
    m_testCaseExecutionId = std::forward<TestCaseExecutionIdT>(value);
  }
  template <typename TestCaseExecutionIdT = Aws::String>
  StopTestCaseExecutionRequest& WithTestCaseExecutionId(TestCaseExecutionIdT&& value) {
    SetTestCaseExecutionId(std::forward<TestCaseExecutionIdT>(value));
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
  StopTestCaseExecutionRequest& WithTestCaseId(TestCaseIdT&& value) {
    SetTestCaseId(std::forward<TestCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StopTestCaseExecutionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_testCaseExecutionId;

  Aws::String m_testCaseId;

  Aws::String m_clientToken;
  bool m_instanceIdHasBeenSet = false;
  bool m_testCaseExecutionIdHasBeenSet = false;
  bool m_testCaseIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
