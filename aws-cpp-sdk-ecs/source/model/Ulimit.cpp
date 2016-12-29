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
#include <aws/ecs/model/Ulimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Ulimit::Ulimit() : 
    m_name(UlimitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_softLimit(0),
    m_softLimitHasBeenSet(false),
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false)
{
}

Ulimit::Ulimit(const JsonValue& jsonValue) : 
    m_name(UlimitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_softLimit(0),
    m_softLimitHasBeenSet(false),
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false)
{
  *this = jsonValue;
}

Ulimit& Ulimit::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = UlimitNameMapper::GetUlimitNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softLimit"))
  {
    m_softLimit = jsonValue.GetInteger("softLimit");

    m_softLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hardLimit"))
  {
    m_hardLimit = jsonValue.GetInteger("hardLimit");

    m_hardLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue Ulimit::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", UlimitNameMapper::GetNameForUlimitName(m_name));
  }

  if(m_softLimitHasBeenSet)
  {
   payload.WithInteger("softLimit", m_softLimit);

  }

  if(m_hardLimitHasBeenSet)
  {
   payload.WithInteger("hardLimit", m_hardLimit);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws