/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3HudiSource.h>
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

S3HudiSource::S3HudiSource() : 
    m_nameHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_additionalHudiOptionsHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
}

S3HudiSource::S3HudiSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_additionalHudiOptionsHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
  *this = jsonValue;
}

S3HudiSource& S3HudiSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Paths"))
  {
    Aws::Utils::Array<JsonView> pathsJsonList = jsonValue.GetArray("Paths");
    for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
    {
      m_paths.push_back(pathsJsonList[pathsIndex].AsString());
    }
    m_pathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalHudiOptions"))
  {
    Aws::Map<Aws::String, JsonView> additionalHudiOptionsJsonMap = jsonValue.GetObject("AdditionalHudiOptions").GetAllObjects();
    for(auto& additionalHudiOptionsItem : additionalHudiOptionsJsonMap)
    {
      m_additionalHudiOptions[additionalHudiOptionsItem.first] = additionalHudiOptionsItem.second.AsString();
    }
    m_additionalHudiOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    m_additionalOptions = jsonValue.GetObject("AdditionalOptions");

    m_additionalOptionsHasBeenSet = true;
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

JsonValue S3HudiSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_pathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathsJsonList(m_paths.size());
   for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
   {
     pathsJsonList[pathsIndex].AsString(m_paths[pathsIndex]);
   }
   payload.WithArray("Paths", std::move(pathsJsonList));

  }

  if(m_additionalHudiOptionsHasBeenSet)
  {
   JsonValue additionalHudiOptionsJsonMap;
   for(auto& additionalHudiOptionsItem : m_additionalHudiOptions)
   {
     additionalHudiOptionsJsonMap.WithString(additionalHudiOptionsItem.first, additionalHudiOptionsItem.second);
   }
   payload.WithObject("AdditionalHudiOptions", std::move(additionalHudiOptionsJsonMap));

  }

  if(m_additionalOptionsHasBeenSet)
  {
   payload.WithObject("AdditionalOptions", m_additionalOptions.Jsonize());

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
