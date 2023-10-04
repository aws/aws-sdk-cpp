/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/PredictionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

PredictionConfiguration::PredictionConfiguration() : 
    m_businessNameGenerationHasBeenSet(false)
{
}

PredictionConfiguration::PredictionConfiguration(JsonView jsonValue) : 
    m_businessNameGenerationHasBeenSet(false)
{
  *this = jsonValue;
}

PredictionConfiguration& PredictionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("businessNameGeneration"))
  {
    m_businessNameGeneration = jsonValue.GetObject("businessNameGeneration");

    m_businessNameGenerationHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_businessNameGenerationHasBeenSet)
  {
   payload.WithObject("businessNameGeneration", m_businessNameGeneration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
