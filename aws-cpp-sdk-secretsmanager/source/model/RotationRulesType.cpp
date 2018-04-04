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

#include <aws/secretsmanager/model/RotationRulesType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

RotationRulesType::RotationRulesType() : 
    m_automaticallyAfterDays(0),
    m_automaticallyAfterDaysHasBeenSet(false)
{
}

RotationRulesType::RotationRulesType(const JsonValue& jsonValue) : 
    m_automaticallyAfterDays(0),
    m_automaticallyAfterDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RotationRulesType& RotationRulesType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AutomaticallyAfterDays"))
  {
    m_automaticallyAfterDays = jsonValue.GetInt64("AutomaticallyAfterDays");

    m_automaticallyAfterDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RotationRulesType::Jsonize() const
{
  JsonValue payload;

  if(m_automaticallyAfterDaysHasBeenSet)
  {
   payload.WithInt64("AutomaticallyAfterDays", m_automaticallyAfterDays);

  }

  return payload;
}

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
