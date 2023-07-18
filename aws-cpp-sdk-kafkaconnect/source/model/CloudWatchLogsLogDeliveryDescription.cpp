/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CloudWatchLogsLogDeliveryDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

CloudWatchLogsLogDeliveryDescription::CloudWatchLogsLogDeliveryDescription() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logGroupHasBeenSet(false)
{
}

CloudWatchLogsLogDeliveryDescription::CloudWatchLogsLogDeliveryDescription(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logGroupHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsLogDeliveryDescription& CloudWatchLogsLogDeliveryDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroup"))
  {
    m_logGroup = jsonValue.GetString("logGroup");

    m_logGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsLogDeliveryDescription::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_logGroupHasBeenSet)
  {
   payload.WithString("logGroup", m_logGroup);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
