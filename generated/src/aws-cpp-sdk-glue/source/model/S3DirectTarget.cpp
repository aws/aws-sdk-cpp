/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3DirectTarget.h>
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

S3DirectTarget::S3DirectTarget() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_format(TargetFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_schemaChangePolicyHasBeenSet(false)
{
}

S3DirectTarget::S3DirectTarget(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_format(TargetFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_schemaChangePolicyHasBeenSet(false)
{
  *this = jsonValue;
}

S3DirectTarget& S3DirectTarget::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Compression"))
  {
    m_compression = jsonValue.GetString("Compression");

    m_compressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = TargetFormatMapper::GetTargetFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaChangePolicy"))
  {
    m_schemaChangePolicy = jsonValue.GetObject("SchemaChangePolicy");

    m_schemaChangePolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DirectTarget::Jsonize() const
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

  if(m_compressionHasBeenSet)
  {
   payload.WithString("Compression", m_compression);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", TargetFormatMapper::GetNameForTargetFormat(m_format));
  }

  if(m_schemaChangePolicyHasBeenSet)
  {
   payload.WithObject("SchemaChangePolicy", m_schemaChangePolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
