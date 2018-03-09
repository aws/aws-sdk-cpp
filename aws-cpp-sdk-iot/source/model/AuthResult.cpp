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

#include <aws/iot/model/AuthResult.h>
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

AuthResult::AuthResult() : 
    m_authInfoHasBeenSet(false),
    m_allowedHasBeenSet(false),
    m_deniedHasBeenSet(false),
    m_authDecision(AuthDecision::NOT_SET),
    m_authDecisionHasBeenSet(false),
    m_missingContextValuesHasBeenSet(false)
{
}

AuthResult::AuthResult(const JsonValue& jsonValue) : 
    m_authInfoHasBeenSet(false),
    m_allowedHasBeenSet(false),
    m_deniedHasBeenSet(false),
    m_authDecision(AuthDecision::NOT_SET),
    m_authDecisionHasBeenSet(false),
    m_missingContextValuesHasBeenSet(false)
{
  *this = jsonValue;
}

AuthResult& AuthResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("authInfo"))
  {
    m_authInfo = jsonValue.GetObject("authInfo");

    m_authInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowed"))
  {
    m_allowed = jsonValue.GetObject("allowed");

    m_allowedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("denied"))
  {
    m_denied = jsonValue.GetObject("denied");

    m_deniedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authDecision"))
  {
    m_authDecision = AuthDecisionMapper::GetAuthDecisionForName(jsonValue.GetString("authDecision"));

    m_authDecisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missingContextValues"))
  {
    Array<JsonValue> missingContextValuesJsonList = jsonValue.GetArray("missingContextValues");
    for(unsigned missingContextValuesIndex = 0; missingContextValuesIndex < missingContextValuesJsonList.GetLength(); ++missingContextValuesIndex)
    {
      m_missingContextValues.push_back(missingContextValuesJsonList[missingContextValuesIndex].AsString());
    }
    m_missingContextValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthResult::Jsonize() const
{
  JsonValue payload;

  if(m_authInfoHasBeenSet)
  {
   payload.WithObject("authInfo", m_authInfo.Jsonize());

  }

  if(m_allowedHasBeenSet)
  {
   payload.WithObject("allowed", m_allowed.Jsonize());

  }

  if(m_deniedHasBeenSet)
  {
   payload.WithObject("denied", m_denied.Jsonize());

  }

  if(m_authDecisionHasBeenSet)
  {
   payload.WithString("authDecision", AuthDecisionMapper::GetNameForAuthDecision(m_authDecision));
  }

  if(m_missingContextValuesHasBeenSet)
  {
   Array<JsonValue> missingContextValuesJsonList(m_missingContextValues.size());
   for(unsigned missingContextValuesIndex = 0; missingContextValuesIndex < missingContextValuesJsonList.GetLength(); ++missingContextValuesIndex)
   {
     missingContextValuesJsonList[missingContextValuesIndex].AsString(m_missingContextValues[missingContextValuesIndex]);
   }
   payload.WithArray("missingContextValues", std::move(missingContextValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
