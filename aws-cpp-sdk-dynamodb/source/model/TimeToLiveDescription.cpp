/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TimeToLiveDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

TimeToLiveDescription::TimeToLiveDescription() : 
    m_timeToLiveStatus(TimeToLiveStatus::NOT_SET),
    m_timeToLiveStatusHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
}

TimeToLiveDescription::TimeToLiveDescription(JsonView jsonValue) : 
    m_timeToLiveStatus(TimeToLiveStatus::NOT_SET),
    m_timeToLiveStatusHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

TimeToLiveDescription& TimeToLiveDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeToLiveStatus"))
  {
    m_timeToLiveStatus = TimeToLiveStatusMapper::GetTimeToLiveStatusForName(jsonValue.GetString("TimeToLiveStatus"));

    m_timeToLiveStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeToLiveDescription::Jsonize() const
{
  JsonValue payload;

  if(m_timeToLiveStatusHasBeenSet)
  {
   payload.WithString("TimeToLiveStatus", TimeToLiveStatusMapper::GetNameForTimeToLiveStatus(m_timeToLiveStatus));
  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
