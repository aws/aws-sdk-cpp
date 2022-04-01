/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

LogTarget::LogTarget(JsonView jsonValue) : 
    m_targetType(LogTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
  *this = jsonValue;
}

LogTarget& LogTarget::operator =(JsonView jsonValue)
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
