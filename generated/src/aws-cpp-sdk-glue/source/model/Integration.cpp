/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Integration.h>
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

Integration::Integration(JsonView jsonValue)
{
  *this = jsonValue;
}

Integration& Integration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");
    m_sourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetArn"))
  {
    m_targetArn = jsonValue.GetString("TargetArn");
    m_targetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IntegrationName"))
  {
    m_integrationName = jsonValue.GetString("IntegrationName");
    m_integrationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IntegrationArn"))
  {
    m_integrationArn = jsonValue.GetString("IntegrationArn");
    m_integrationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalEncryptionContext"))
  {
    Aws::Map<Aws::String, JsonView> additionalEncryptionContextJsonMap = jsonValue.GetObject("AdditionalEncryptionContext").GetAllObjects();
    for(auto& additionalEncryptionContextItem : additionalEncryptionContextJsonMap)
    {
      m_additionalEncryptionContext[additionalEncryptionContextItem.first] = additionalEncryptionContextItem.second.AsString();
    }
    m_additionalEncryptionContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = IntegrationStatusMapper::GetIntegrationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IntegrationConfig"))
  {
    m_integrationConfig = jsonValue.GetObject("IntegrationConfig");
    m_integrationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataFilter"))
  {
    m_dataFilter = jsonValue.GetString("DataFilter");
    m_dataFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue Integration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_integrationNameHasBeenSet)
  {
   payload.WithString("IntegrationName", m_integrationName);

  }

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("IntegrationArn", m_integrationArn);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_additionalEncryptionContextHasBeenSet)
  {
   JsonValue additionalEncryptionContextJsonMap;
   for(auto& additionalEncryptionContextItem : m_additionalEncryptionContext)
   {
     additionalEncryptionContextJsonMap.WithString(additionalEncryptionContextItem.first, additionalEncryptionContextItem.second);
   }
   payload.WithObject("AdditionalEncryptionContext", std::move(additionalEncryptionContextJsonMap));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", IntegrationStatusMapper::GetNameForIntegrationStatus(m_status));
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_integrationConfigHasBeenSet)
  {
   payload.WithObject("IntegrationConfig", m_integrationConfig.Jsonize());

  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("Errors", std::move(errorsJsonList));

  }

  if(m_dataFilterHasBeenSet)
  {
   payload.WithString("DataFilter", m_dataFilter);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
