/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/StorageOptimizer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

StorageOptimizer::StorageOptimizer() : 
    m_storageOptimizerType(OptimizerType::NOT_SET),
    m_storageOptimizerTypeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_lastRunDetailsHasBeenSet(false)
{
}

StorageOptimizer::StorageOptimizer(JsonView jsonValue) : 
    m_storageOptimizerType(OptimizerType::NOT_SET),
    m_storageOptimizerTypeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_lastRunDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

StorageOptimizer& StorageOptimizer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageOptimizerType"))
  {
    m_storageOptimizerType = OptimizerTypeMapper::GetOptimizerTypeForName(jsonValue.GetString("StorageOptimizerType"));

    m_storageOptimizerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Config"))
  {
    Aws::Map<Aws::String, JsonView> configJsonMap = jsonValue.GetObject("Config").GetAllObjects();
    for(auto& configItem : configJsonMap)
    {
      m_config[configItem.first] = configItem.second.AsString();
    }
    m_configHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Warnings"))
  {
    m_warnings = jsonValue.GetString("Warnings");

    m_warningsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRunDetails"))
  {
    m_lastRunDetails = jsonValue.GetString("LastRunDetails");

    m_lastRunDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageOptimizer::Jsonize() const
{
  JsonValue payload;

  if(m_storageOptimizerTypeHasBeenSet)
  {
   payload.WithString("StorageOptimizerType", OptimizerTypeMapper::GetNameForOptimizerType(m_storageOptimizerType));
  }

  if(m_configHasBeenSet)
  {
   JsonValue configJsonMap;
   for(auto& configItem : m_config)
   {
     configJsonMap.WithString(configItem.first, configItem.second);
   }
   payload.WithObject("Config", std::move(configJsonMap));

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_warningsHasBeenSet)
  {
   payload.WithString("Warnings", m_warnings);

  }

  if(m_lastRunDetailsHasBeenSet)
  {
   payload.WithString("LastRunDetails", m_lastRunDetails);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
