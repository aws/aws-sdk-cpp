/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/AuthorizerLogs.h>
#include <aws/kafka/model/BrokerLogs.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

class LoggingInfo {
 public:
  AWS_KAFKA_API LoggingInfo() = default;
  AWS_KAFKA_API LoggingInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API LoggingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>You can configure your MSK cluster to send authorizer logs to different
   * destination types.</p>
   */
  inline const AuthorizerLogs& GetAuthorizerLogs() const { return m_authorizerLogs; }
  inline bool AuthorizerLogsHasBeenSet() const { return m_authorizerLogsHasBeenSet; }
  template <typename AuthorizerLogsT = AuthorizerLogs>
  void SetAuthorizerLogs(AuthorizerLogsT&& value) {
    m_authorizerLogsHasBeenSet = true;
    m_authorizerLogs = std::forward<AuthorizerLogsT>(value);
  }
  template <typename AuthorizerLogsT = AuthorizerLogs>
  LoggingInfo& WithAuthorizerLogs(AuthorizerLogsT&& value) {
    SetAuthorizerLogs(std::forward<AuthorizerLogsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BrokerLogs& GetBrokerLogs() const { return m_brokerLogs; }
  inline bool BrokerLogsHasBeenSet() const { return m_brokerLogsHasBeenSet; }
  template <typename BrokerLogsT = BrokerLogs>
  void SetBrokerLogs(BrokerLogsT&& value) {
    m_brokerLogsHasBeenSet = true;
    m_brokerLogs = std::forward<BrokerLogsT>(value);
  }
  template <typename BrokerLogsT = BrokerLogs>
  LoggingInfo& WithBrokerLogs(BrokerLogsT&& value) {
    SetBrokerLogs(std::forward<BrokerLogsT>(value));
    return *this;
  }
  ///@}
 private:
  AuthorizerLogs m_authorizerLogs;

  BrokerLogs m_brokerLogs;
  bool m_authorizerLogsHasBeenSet = false;
  bool m_brokerLogsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
