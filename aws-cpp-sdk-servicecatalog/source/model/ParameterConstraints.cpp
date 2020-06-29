/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ParameterConstraints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ParameterConstraints::ParameterConstraints() : 
    m_allowedValuesHasBeenSet(false)
{
}

ParameterConstraints::ParameterConstraints(JsonView jsonValue) : 
    m_allowedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterConstraints& ParameterConstraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowedValues"))
  {
    Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("AllowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterConstraints::Jsonize() const
{
  JsonValue payload;

  if(m_allowedValuesHasBeenSet)
  {
   Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
   }
   payload.WithArray("AllowedValues", std::move(allowedValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
