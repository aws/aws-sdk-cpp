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

#include <aws/lightsail/model/InstanceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceState::InstanceState() : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

InstanceState::InstanceState(const JsonValue& jsonValue) : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceState& InstanceState::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetInteger("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceState::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithInteger("code", m_code);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws