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

#include <aws/config/model/RemediationParameterValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RemediationParameterValue::RemediationParameterValue() : 
    m_resourceValueHasBeenSet(false),
    m_staticValueHasBeenSet(false)
{
}

RemediationParameterValue::RemediationParameterValue(JsonView jsonValue) : 
    m_resourceValueHasBeenSet(false),
    m_staticValueHasBeenSet(false)
{
  *this = jsonValue;
}

RemediationParameterValue& RemediationParameterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceValue"))
  {
    m_resourceValue = jsonValue.GetObject("ResourceValue");

    m_resourceValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StaticValue"))
  {
    m_staticValue = jsonValue.GetObject("StaticValue");

    m_staticValueHasBeenSet = true;
  }

  return *this;
}

JsonValue RemediationParameterValue::Jsonize() const
{
  JsonValue payload;

  if(m_resourceValueHasBeenSet)
  {
   payload.WithObject("ResourceValue", m_resourceValue.Jsonize());

  }

  if(m_staticValueHasBeenSet)
  {
   payload.WithObject("StaticValue", m_staticValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
