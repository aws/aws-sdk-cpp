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

  class AWS_KAFKA_API LoggingInfo
  {
  public:
    LoggingInfo();
    LoggingInfo(Aws::Utils::Json::JsonView jsonValue);
    LoggingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const BrokerLogs& GetBrokerLogs() const{ return m_brokerLogs; }

    
    inline bool BrokerLogsHasBeenSet() const { return m_brokerLogsHasBeenSet; }

    
    inline void SetBrokerLogs(const BrokerLogs& value) { m_brokerLogsHasBeenSet = true; m_brokerLogs = value; }

    
    inline void SetBrokerLogs(BrokerLogs&& value) { m_brokerLogsHasBeenSet = true; m_brokerLogs = std::move(value); }

    
    inline LoggingInfo& WithBrokerLogs(const BrokerLogs& value) { SetBrokerLogs(value); return *this;}

    
    inline LoggingInfo& WithBrokerLogs(BrokerLogs&& value) { SetBrokerLogs(std::move(value)); return *this;}

  private:

    BrokerLogs m_brokerLogs;
    bool m_brokerLogsHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
