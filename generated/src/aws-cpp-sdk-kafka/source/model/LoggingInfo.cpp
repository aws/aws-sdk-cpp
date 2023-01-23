/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/LoggingInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

LoggingInfo::LoggingInfo() : 
    m_brokerLogsHasBeenSet(false)
{
}

LoggingInfo::LoggingInfo(JsonView jsonValue) : 
    m_brokerLogsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingInfo& LoggingInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brokerLogs"))
  {
    m_brokerLogs = jsonValue.GetObject("brokerLogs");

    m_brokerLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingInfo::Jsonize() const
{
  JsonValue payload;

  if(m_brokerLogsHasBeenSet)
  {
   payload.WithObject("brokerLogs", m_brokerLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
