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

#include <aws/shield/model/Contributor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

Contributor::Contributor() : 
    m_nameHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

Contributor::Contributor(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Contributor& Contributor::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Contributor::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
