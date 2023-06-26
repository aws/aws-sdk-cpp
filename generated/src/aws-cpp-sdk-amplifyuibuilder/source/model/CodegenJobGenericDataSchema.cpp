/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenJobGenericDataSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

CodegenJobGenericDataSchema::CodegenJobGenericDataSchema() : 
    m_dataSourceType(CodegenJobGenericDataSourceType::NOT_SET),
    m_dataSourceTypeHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_enumsHasBeenSet(false),
    m_nonModelsHasBeenSet(false)
{
}

CodegenJobGenericDataSchema::CodegenJobGenericDataSchema(JsonView jsonValue) : 
    m_dataSourceType(CodegenJobGenericDataSourceType::NOT_SET),
    m_dataSourceTypeHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_enumsHasBeenSet(false),
    m_nonModelsHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenJobGenericDataSchema& CodegenJobGenericDataSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceType"))
  {
    m_dataSourceType = CodegenJobGenericDataSourceTypeMapper::GetCodegenJobGenericDataSourceTypeForName(jsonValue.GetString("dataSourceType"));

    m_dataSourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("models"))
  {
    Aws::Map<Aws::String, JsonView> modelsJsonMap = jsonValue.GetObject("models").GetAllObjects();
    for(auto& modelsItem : modelsJsonMap)
    {
      m_models[modelsItem.first] = modelsItem.second.AsObject();
    }
    m_modelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enums"))
  {
    Aws::Map<Aws::String, JsonView> enumsJsonMap = jsonValue.GetObject("enums").GetAllObjects();
    for(auto& enumsItem : enumsJsonMap)
    {
      m_enums[enumsItem.first] = enumsItem.second.AsObject();
    }
    m_enumsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nonModels"))
  {
    Aws::Map<Aws::String, JsonView> nonModelsJsonMap = jsonValue.GetObject("nonModels").GetAllObjects();
    for(auto& nonModelsItem : nonModelsJsonMap)
    {
      m_nonModels[nonModelsItem.first] = nonModelsItem.second.AsObject();
    }
    m_nonModelsHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenJobGenericDataSchema::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceTypeHasBeenSet)
  {
   payload.WithString("dataSourceType", CodegenJobGenericDataSourceTypeMapper::GetNameForCodegenJobGenericDataSourceType(m_dataSourceType));
  }

  if(m_modelsHasBeenSet)
  {
   JsonValue modelsJsonMap;
   for(auto& modelsItem : m_models)
   {
     modelsJsonMap.WithObject(modelsItem.first, modelsItem.second.Jsonize());
   }
   payload.WithObject("models", std::move(modelsJsonMap));

  }

  if(m_enumsHasBeenSet)
  {
   JsonValue enumsJsonMap;
   for(auto& enumsItem : m_enums)
   {
     enumsJsonMap.WithObject(enumsItem.first, enumsItem.second.Jsonize());
   }
   payload.WithObject("enums", std::move(enumsJsonMap));

  }

  if(m_nonModelsHasBeenSet)
  {
   JsonValue nonModelsJsonMap;
   for(auto& nonModelsItem : m_nonModels)
   {
     nonModelsJsonMap.WithObject(nonModelsItem.first, nonModelsItem.second.Jsonize());
   }
   payload.WithObject("nonModels", std::move(nonModelsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
