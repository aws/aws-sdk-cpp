/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/StartCodegenJobData.h>
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

StartCodegenJobData::StartCodegenJobData() : 
    m_renderConfigHasBeenSet(false),
    m_genericDataSchemaHasBeenSet(false),
    m_autoGenerateForms(false),
    m_autoGenerateFormsHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

StartCodegenJobData::StartCodegenJobData(JsonView jsonValue) : 
    m_renderConfigHasBeenSet(false),
    m_genericDataSchemaHasBeenSet(false),
    m_autoGenerateForms(false),
    m_autoGenerateFormsHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

StartCodegenJobData& StartCodegenJobData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("renderConfig"))
  {
    m_renderConfig = jsonValue.GetObject("renderConfig");

    m_renderConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("genericDataSchema"))
  {
    m_genericDataSchema = jsonValue.GetObject("genericDataSchema");

    m_genericDataSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoGenerateForms"))
  {
    m_autoGenerateForms = jsonValue.GetBool("autoGenerateForms");

    m_autoGenerateFormsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("features"))
  {
    m_features = jsonValue.GetObject("features");

    m_featuresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue StartCodegenJobData::Jsonize() const
{
  JsonValue payload;

  if(m_renderConfigHasBeenSet)
  {
   payload.WithObject("renderConfig", m_renderConfig.Jsonize());

  }

  if(m_genericDataSchemaHasBeenSet)
  {
   payload.WithObject("genericDataSchema", m_genericDataSchema.Jsonize());

  }

  if(m_autoGenerateFormsHasBeenSet)
  {
   payload.WithBool("autoGenerateForms", m_autoGenerateForms);

  }

  if(m_featuresHasBeenSet)
  {
   payload.WithObject("features", m_features.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
