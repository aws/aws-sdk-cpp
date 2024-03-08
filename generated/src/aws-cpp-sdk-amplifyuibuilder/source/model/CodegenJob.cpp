/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenJob.h>
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

CodegenJob::CodegenJob() : 
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_renderConfigHasBeenSet(false),
    m_genericDataSchemaHasBeenSet(false),
    m_autoGenerateForms(false),
    m_autoGenerateFormsHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_status(CodegenJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_dependenciesHasBeenSet(false)
{
}

CodegenJob::CodegenJob(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_renderConfigHasBeenSet(false),
    m_genericDataSchemaHasBeenSet(false),
    m_autoGenerateForms(false),
    m_autoGenerateFormsHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_status(CodegenJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_dependenciesHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenJob& CodegenJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

    m_appIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentName"))
  {
    m_environmentName = jsonValue.GetString("environmentName");

    m_environmentNameHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("status"))
  {
    m_status = CodegenJobStatusMapper::GetCodegenJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("asset"))
  {
    m_asset = jsonValue.GetObject("asset");

    m_assetHasBeenSet = true;
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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependencies"))
  {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("dependencies");
    for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
    {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsObject());
    }
    m_dependenciesHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenJob::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CodegenJobStatusMapper::GetNameForCodegenJobStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_assetHasBeenSet)
  {
   payload.WithObject("asset", m_asset.Jsonize());

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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dependenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
   for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
   {
     dependenciesJsonList[dependenciesIndex].AsObject(m_dependencies[dependenciesIndex].Jsonize());
   }
   payload.WithArray("dependencies", std::move(dependenciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
