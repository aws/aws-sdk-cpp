/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MachineLearningDetectionConfig.h>
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

MachineLearningDetectionConfig::MachineLearningDetectionConfig() : 
    m_confidenceLevel(ConfidenceLevel::NOT_SET),
    m_confidenceLevelHasBeenSet(false)
{
}

MachineLearningDetectionConfig::MachineLearningDetectionConfig(JsonView jsonValue) : 
    m_confidenceLevel(ConfidenceLevel::NOT_SET),
    m_confidenceLevelHasBeenSet(false)
{
  *this = jsonValue;
}

MachineLearningDetectionConfig& MachineLearningDetectionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("confidenceLevel"))
  {
    m_confidenceLevel = ConfidenceLevelMapper::GetConfidenceLevelForName(jsonValue.GetString("confidenceLevel"));

    m_confidenceLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue MachineLearningDetectionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceLevelHasBeenSet)
  {
   payload.WithString("confidenceLevel", ConfidenceLevelMapper::GetNameForConfidenceLevel(m_confidenceLevel));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
