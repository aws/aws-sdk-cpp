/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3IcebergDirectTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

S3IcebergDirectTarget::S3IcebergDirectTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

S3IcebergDirectTarget& S3IcebergDirectTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartitionKeys"))
  {
    Aws::Utils::Array<JsonView> partitionKeysJsonList = jsonValue.GetArray("PartitionKeys");
    for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
    {
      Aws::Utils::Array<JsonView> enclosedInStringPropertiesJsonList = partitionKeysJsonList[partitionKeysIndex].AsArray();
      Aws::Vector<Aws::String> enclosedInStringPropertiesList;
      enclosedInStringPropertiesList.reserve((size_t)enclosedInStringPropertiesJsonList.GetLength());
      for(unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength(); ++enclosedInStringPropertiesIndex)
      {
        enclosedInStringPropertiesList.push_back(enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString());
      }
      m_partitionKeys.push_back(std::move(enclosedInStringPropertiesList));
    }
    m_partitionKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");
    m_pathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Format"))
  {
    m_format = TargetFormatMapper::GetTargetFormatForName(jsonValue.GetString("Format"));
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    Aws::Map<Aws::String, JsonView> additionalOptionsJsonMap = jsonValue.GetObject("AdditionalOptions").GetAllObjects();
    for(auto& additionalOptionsItem : additionalOptionsJsonMap)
    {
      m_additionalOptions[additionalOptionsItem.first] = additionalOptionsItem.second.AsString();
    }
    m_additionalOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaChangePolicy"))
  {
    m_schemaChangePolicy = jsonValue.GetObject("SchemaChangePolicy");
    m_schemaChangePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoDataQuality"))
  {
    m_autoDataQuality = jsonValue.GetObject("AutoDataQuality");
    m_autoDataQualityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Compression"))
  {
    m_compression = IcebergTargetCompressionTypeMapper::GetIcebergTargetCompressionTypeForName(jsonValue.GetString("Compression"));
    m_compressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberTargetPartitions"))
  {
    m_numberTargetPartitions = jsonValue.GetString("NumberTargetPartitions");
    m_numberTargetPartitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputSchemas"))
  {
    Aws::Utils::Array<JsonView> outputSchemasJsonList = jsonValue.GetArray("OutputSchemas");
    for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
    {
      m_outputSchemas.push_back(outputSchemasJsonList[outputSchemasIndex].AsObject());
    }
    m_outputSchemasHasBeenSet = true;
  }
  return *this;
}

JsonValue S3IcebergDirectTarget::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_partitionKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionKeysJsonList(m_partitionKeys.size());
   for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
   {
     Aws::Utils::Array<JsonValue> enclosedInStringPropertiesJsonList(m_partitionKeys[partitionKeysIndex].size());
     for(unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength(); ++enclosedInStringPropertiesIndex)
     {
       enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString(m_partitionKeys[partitionKeysIndex][enclosedInStringPropertiesIndex]);
     }
     partitionKeysJsonList[partitionKeysIndex].AsArray(std::move(enclosedInStringPropertiesJsonList));
   }
   payload.WithArray("PartitionKeys", std::move(partitionKeysJsonList));

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", TargetFormatMapper::GetNameForTargetFormat(m_format));
  }

  if(m_additionalOptionsHasBeenSet)
  {
   JsonValue additionalOptionsJsonMap;
   for(auto& additionalOptionsItem : m_additionalOptions)
   {
     additionalOptionsJsonMap.WithString(additionalOptionsItem.first, additionalOptionsItem.second);
   }
   payload.WithObject("AdditionalOptions", std::move(additionalOptionsJsonMap));

  }

  if(m_schemaChangePolicyHasBeenSet)
  {
   payload.WithObject("SchemaChangePolicy", m_schemaChangePolicy.Jsonize());

  }

  if(m_autoDataQualityHasBeenSet)
  {
   payload.WithObject("AutoDataQuality", m_autoDataQuality.Jsonize());

  }

  if(m_compressionHasBeenSet)
  {
   payload.WithString("Compression", IcebergTargetCompressionTypeMapper::GetNameForIcebergTargetCompressionType(m_compression));
  }

  if(m_numberTargetPartitionsHasBeenSet)
  {
   payload.WithString("NumberTargetPartitions", m_numberTargetPartitions);

  }

  if(m_outputSchemasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputSchemasJsonList(m_outputSchemas.size());
   for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
   {
     outputSchemasJsonList[outputSchemasIndex].AsObject(m_outputSchemas[outputSchemasIndex].Jsonize());
   }
   payload.WithArray("OutputSchemas", std::move(outputSchemasJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
