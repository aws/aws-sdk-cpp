/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DataPreProcessingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

DataPreProcessingConfiguration::DataPreProcessingConfiguration() : 
    m_targetSamplingRate(TargetSamplingRate::NOT_SET),
    m_targetSamplingRateHasBeenSet(false)
{
}

DataPreProcessingConfiguration::DataPreProcessingConfiguration(JsonView jsonValue) : 
    m_targetSamplingRate(TargetSamplingRate::NOT_SET),
    m_targetSamplingRateHasBeenSet(false)
{
  *this = jsonValue;
}

DataPreProcessingConfiguration& DataPreProcessingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetSamplingRate"))
  {
    m_targetSamplingRate = TargetSamplingRateMapper::GetTargetSamplingRateForName(jsonValue.GetString("TargetSamplingRate"));

    m_targetSamplingRateHasBeenSet = true;
  }

  return *this;
}

JsonValue DataPreProcessingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetSamplingRateHasBeenSet)
  {
   payload.WithString("TargetSamplingRate", TargetSamplingRateMapper::GetNameForTargetSamplingRate(m_targetSamplingRate));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
