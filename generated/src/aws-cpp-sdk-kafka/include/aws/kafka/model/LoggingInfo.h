/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/BrokerLogs.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  class LoggingInfo
  {
  public:
    AWS_KAFKA_API LoggingInfo() = default;
    AWS_KAFKA_API LoggingInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API LoggingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const BrokerLogs& GetBrokerLogs() const { return m_brokerLogs; }
    inline bool BrokerLogsHasBeenSet() const { return m_brokerLogsHasBeenSet; }
    template<typename BrokerLogsT = BrokerLogs>
    void SetBrokerLogs(BrokerLogsT&& value) { m_brokerLogsHasBeenSet = true; m_brokerLogs = std::forward<BrokerLogsT>(value); }
    template<typename BrokerLogsT = BrokerLogs>
    LoggingInfo& WithBrokerLogs(BrokerLogsT&& value) { SetBrokerLogs(std::forward<BrokerLogsT>(value)); return *this;}
    ///@}
  private:

    BrokerLogs m_brokerLogs;
    bool m_brokerLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
