/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ExplicitDeny.h>
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

ExplicitDeny::ExplicitDeny() : 
    m_policiesHasBeenSet(false)
{
}

ExplicitDeny::ExplicitDeny(JsonView jsonValue) : 
    m_policiesHasBeenSet(false)
{
  *this = jsonValue;
}

ExplicitDeny& ExplicitDeny::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policies"))
  {
    Aws::Utils::Array<JsonView> policiesJsonList = jsonValue.GetArray("policies");
    for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
    {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExplicitDeny::Jsonize() const
{
  JsonValue payload;

  if(m_policiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policiesJsonList(m_policies.size());
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
