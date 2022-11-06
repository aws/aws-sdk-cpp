/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategorySplitChargeRule.h>
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

CostCategorySplitChargeRule::CostCategorySplitChargeRule() : 
    m_sourceHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_method(CostCategorySplitChargeMethod::NOT_SET),
    m_methodHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

CostCategorySplitChargeRule::CostCategorySplitChargeRule(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_method(CostCategorySplitChargeMethod::NOT_SET),
    m_methodHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategorySplitChargeRule& CostCategorySplitChargeRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Method"))
  {
    m_method = CostCategorySplitChargeMethodMapper::GetCostCategorySplitChargeMethodForName(jsonValue.GetString("Method"));

    m_methodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategorySplitChargeRule::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_methodHasBeenSet)
  {
   payload.WithString("Method", CostCategorySplitChargeMethodMapper::GetNameForCostCategorySplitChargeMethod(m_method));
  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("Parameters", std::move(parametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
