/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace KafkaConnect {
namespace Model {

/**
 */
class RestartConnectorRequest : public KafkaConnectRequest {
 public:
  AWS_KAFKACONNECT_API RestartConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RestartConnector"; }

  AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;

  AWS_KAFKACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector that you want to restart.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  RestartConnectorRequest& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to restart only the connector's failed tasks. If
   * <code>true</code>, the operation restarts only the tasks that are currently in a
   * failed state, and healthy tasks continue running. If <code>false</code> or not
   * specified, the operation restarts the connector and all of its tasks.</p>
   */
  inline bool GetOnlyFailedTasks() const { return m_onlyFailedTasks; }
  inline bool OnlyFailedTasksHasBeenSet() const { return m_onlyFailedTasksHasBeenSet; }
  inline void SetOnlyFailedTasks(bool value) {
    m_onlyFailedTasksHasBeenSet = true;
    m_onlyFailedTasks = value;
  }
  inline RestartConnectorRequest& WithOnlyFailedTasks(bool value) {
    SetOnlyFailedTasks(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorArn;

  bool m_onlyFailedTasks{false};
  bool m_connectorArnHasBeenSet = false;
  bool m_onlyFailedTasksHasBeenSet = false;
};

}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
