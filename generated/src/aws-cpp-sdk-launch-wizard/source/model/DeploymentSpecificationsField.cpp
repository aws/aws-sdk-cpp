/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/DeploymentSpecificationsField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{

DeploymentSpecificationsField::DeploymentSpecificationsField(JsonView jsonValue)
{
  *this = jsonValue;
}

DeploymentSpecificationsField& DeploymentSpecificationsField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedValues"))
  {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditionals"))
  {
    Aws::Utils::Array<JsonView> conditionalsJsonList = jsonValue.GetArray("conditionals");
    for(unsigned conditionalsIndex = 0; conditionalsIndex < conditionalsJsonList.GetLength(); ++conditionalsIndex)
    {
      m_conditionals.push_back(conditionalsJsonList[conditionalsIndex].AsObject());
    }
    m_conditionalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetString("required");
    m_requiredHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentSpecificationsField::Jsonize() const
{
  JsonValue payload;

  if(m_allowedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
   }
   payload.WithArray("allowedValues", std::move(allowedValuesJsonList));

  }

  if(m_conditionalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionalsJsonList(m_conditionals.size());
   for(unsigned conditionalsIndex = 0; conditionalsIndex < conditionalsJsonList.GetLength(); ++conditionalsIndex)
   {
     conditionalsJsonList[conditionalsIndex].AsObject(m_conditionals[conditionalsIndex].Jsonize());
   }
   payload.WithArray("conditionals", std::move(conditionalsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithString("required", m_required);

  }

  return payload;
}

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
