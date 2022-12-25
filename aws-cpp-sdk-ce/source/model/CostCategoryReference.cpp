/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CostCategoryReference::CostCategoryReference() : 
    m_costCategoryArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false),
    m_numberOfRules(0),
    m_numberOfRulesHasBeenSet(false),
    m_processingStatusHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

CostCategoryReference::CostCategoryReference(JsonView jsonValue) : 
    m_costCategoryArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false),
    m_numberOfRules(0),
    m_numberOfRulesHasBeenSet(false),
    m_processingStatusHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategoryReference& CostCategoryReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CostCategoryArn"))
  {
    m_costCategoryArn = jsonValue.GetString("CostCategoryArn");

    m_costCategoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveStart"))
  {
    m_effectiveStart = jsonValue.GetString("EffectiveStart");

    m_effectiveStartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveEnd"))
  {
    m_effectiveEnd = jsonValue.GetString("EffectiveEnd");

    m_effectiveEndHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfRules"))
  {
    m_numberOfRules = jsonValue.GetInteger("NumberOfRules");

    m_numberOfRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingStatus"))
  {
    Aws::Utils::Array<JsonView> processingStatusJsonList = jsonValue.GetArray("ProcessingStatus");
    for(unsigned processingStatusIndex = 0; processingStatusIndex < processingStatusJsonList.GetLength(); ++processingStatusIndex)
    {
      m_processingStatus.push_back(processingStatusJsonList[processingStatusIndex].AsObject());
    }
    m_processingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategoryReference::Jsonize() const
{
  JsonValue payload;

  if(m_costCategoryArnHasBeenSet)
  {
   payload.WithString("CostCategoryArn", m_costCategoryArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_effectiveStartHasBeenSet)
  {
   payload.WithString("EffectiveStart", m_effectiveStart);

  }

  if(m_effectiveEndHasBeenSet)
  {
   payload.WithString("EffectiveEnd", m_effectiveEnd);

  }

  if(m_numberOfRulesHasBeenSet)
  {
   payload.WithInteger("NumberOfRules", m_numberOfRules);

  }

  if(m_processingStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processingStatusJsonList(m_processingStatus.size());
   for(unsigned processingStatusIndex = 0; processingStatusIndex < processingStatusJsonList.GetLength(); ++processingStatusIndex)
   {
     processingStatusJsonList[processingStatusIndex].AsObject(m_processingStatus[processingStatusIndex].Jsonize());
   }
   payload.WithArray("ProcessingStatus", std::move(processingStatusJsonList));

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
