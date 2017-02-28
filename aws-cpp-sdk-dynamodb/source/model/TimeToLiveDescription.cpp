/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

TimeToLiveDescription::TimeToLiveDescription(const JsonValue& jsonValue) : 
    m_timeToLiveStatus(TimeToLiveStatus::NOT_SET),
    m_timeToLiveStatusHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

TimeToLiveDescription& TimeToLiveDescription::operator =(const JsonValue& jsonValue)
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