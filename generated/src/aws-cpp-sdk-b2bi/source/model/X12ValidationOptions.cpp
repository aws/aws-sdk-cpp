/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12ValidationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12ValidationOptions::X12ValidationOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

X12ValidationOptions& X12ValidationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("validationRules"))
  {
    Aws::Utils::Array<JsonView> validationRulesJsonList = jsonValue.GetArray("validationRules");
    for(unsigned validationRulesIndex = 0; validationRulesIndex < validationRulesJsonList.GetLength(); ++validationRulesIndex)
    {
      m_validationRules.push_back(validationRulesJsonList[validationRulesIndex].AsObject());
    }
    m_validationRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue X12ValidationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_validationRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationRulesJsonList(m_validationRules.size());
   for(unsigned validationRulesIndex = 0; validationRulesIndex < validationRulesJsonList.GetLength(); ++validationRulesIndex)
   {
     validationRulesJsonList[validationRulesIndex].AsObject(m_validationRules[validationRulesIndex].Jsonize());
   }
   payload.WithArray("validationRules", std::move(validationRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
