/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iot/model/LogTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

LogTarget::LogTarget() : 
    m_targetType(LogTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
}

LogTarget::LogTarget(const JsonValue& jsonValue) : 
    m_targetType(LogTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
  *this = jsonValue;
}

LogTarget& LogTarget::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("targetType"))
  {
    m_targetType = LogTargetTypeMapper::GetLogTargetTypeForName(jsonValue.GetString("targetType"));

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetName"))
  {
    m_targetName = jsonValue.GetString("targetName");

    m_targetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LogTarget::Jsonize() const
{
  JsonValue payload;

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("targetType", LogTargetTypeMapper::GetNameForLogTargetType(m_targetType));
  }

  if(m_targetNameHasBeenSet)
  {
   payload.WithString("targetName", m_targetName);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
