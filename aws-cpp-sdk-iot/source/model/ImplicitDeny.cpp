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

#include <aws/iot/model/ImplicitDeny.h>
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

ImplicitDeny::ImplicitDeny() : 
    m_policiesHasBeenSet(false)
{
}

ImplicitDeny::ImplicitDeny(const JsonValue& jsonValue) : 
    m_policiesHasBeenSet(false)
{
  *this = jsonValue;
}

ImplicitDeny& ImplicitDeny::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("policies"))
  {
    Array<JsonValue> policiesJsonList = jsonValue.GetArray("policies");
    for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
    {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ImplicitDeny::Jsonize() const
{
  JsonValue payload;

  if(m_policiesHasBeenSet)
  {
   Array<JsonValue> policiesJsonList(m_policies.size());
   for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
   {
     policiesJsonList[policiesIndex].AsObject(m_policies[policiesIndex].Jsonize());
   }
   payload.WithArray("policies", std::move(policiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
