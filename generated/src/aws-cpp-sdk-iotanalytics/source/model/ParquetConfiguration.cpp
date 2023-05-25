/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ParquetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

ParquetConfiguration::ParquetConfiguration() : 
    m_schemaDefinitionHasBeenSet(false)
{
}

ParquetConfiguration::ParquetConfiguration(JsonView jsonValue) : 
    m_schemaDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

ParquetConfiguration& ParquetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schemaDefinition"))
  {
    m_schemaDefinition = jsonValue.GetObject("schemaDefinition");

    m_schemaDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue ParquetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_schemaDefinitionHasBeenSet)
  {
   payload.WithObject("schemaDefinition", m_schemaDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
