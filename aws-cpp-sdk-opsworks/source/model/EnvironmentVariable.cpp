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
#include <aws/opsworks/model/EnvironmentVariable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

EnvironmentVariable::EnvironmentVariable() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_secure(false),
    m_secureHasBeenSet(false)
{
}

EnvironmentVariable::EnvironmentVariable(const JsonValue& jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_secure(false),
    m_secureHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentVariable& EnvironmentVariable::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Secure"))
  {
    m_secure = jsonValue.GetBool("Secure");

    m_secureHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentVariable::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_secureHasBeenSet)
  {
   payload.WithBool("Secure", m_secure);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws