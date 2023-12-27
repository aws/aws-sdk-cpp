﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/DeploymentFilter.h>
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

DeploymentFilter::DeploymentFilter() : 
    m_name(DeploymentFilterKey::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

DeploymentFilter::DeploymentFilter(JsonView jsonValue) : 
    m_name(DeploymentFilterKey::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentFilter& DeploymentFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = DeploymentFilterKeyMapper::GetDeploymentFilterKeyForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", DeploymentFilterKeyMapper::GetNameForDeploymentFilterKey(m_name));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
