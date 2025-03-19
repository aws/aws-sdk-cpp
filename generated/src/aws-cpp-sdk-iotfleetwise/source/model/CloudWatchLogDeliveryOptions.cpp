/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CloudWatchLogDeliveryOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

CloudWatchLogDeliveryOptions::CloudWatchLogDeliveryOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudWatchLogDeliveryOptions& CloudWatchLogDeliveryOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logType"))
  {
    m_logType = LogTypeMapper::GetLogTypeForName(jsonValue.GetString("logType"));
    m_logTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogDeliveryOptions::Jsonize() const
{
  JsonValue payload;

  if(m_logTypeHasBeenSet)
  {
   payload.WithString("logType", LogTypeMapper::GetNameForLogType(m_logType));
  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
