/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationProject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

DataAutomationProject::DataAutomationProject(JsonView jsonValue)
{
  *this = jsonValue;
}

DataAutomationProject& DataAutomationProject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectArn"))
  {
    m_projectArn = jsonValue.GetString("projectArn");
    m_projectArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");
    m_projectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectStage"))
  {
    m_projectStage = DataAutomationProjectStageMapper::GetDataAutomationProjectStageForName(jsonValue.GetString("projectStage"));
    m_projectStageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectDescription"))
  {
    m_projectDescription = jsonValue.GetString("projectDescription");
    m_projectDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("standardOutputConfiguration"))
  {
    m_standardOutputConfiguration = jsonValue.GetObject("standardOutputConfiguration");
    m_standardOutputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customOutputConfiguration"))
  {
    m_customOutputConfiguration = jsonValue.GetObject("customOutputConfiguration");
    m_customOutputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overrideConfiguration"))
  {
    m_overrideConfiguration = jsonValue.GetObject("overrideConfiguration");
    m_overrideConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DataAutomationProjectStatusMapper::GetDataAutomationProjectStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsEncryptionContext"))
  {
    Aws::Map<Aws::String, JsonView> kmsEncryptionContextJsonMap = jsonValue.GetObject("kmsEncryptionContext").GetAllObjects();
    for(auto& kmsEncryptionContextItem : kmsEncryptionContextJsonMap)
    {
      m_kmsEncryptionContext[kmsEncryptionContextItem.first] = kmsEncryptionContextItem.second.AsString();
    }
    m_kmsEncryptionContextHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAutomationProject::Jsonize() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithString("lastModifiedTime", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_projectStageHasBeenSet)
  {
   payload.WithString("projectStage", DataAutomationProjectStageMapper::GetNameForDataAutomationProjectStage(m_projectStage));
  }

  if(m_projectDescriptionHasBeenSet)
  {
   payload.WithString("projectDescription", m_projectDescription);

  }

  if(m_standardOutputConfigurationHasBeenSet)
  {
   payload.WithObject("standardOutputConfiguration", m_standardOutputConfiguration.Jsonize());

  }

  if(m_customOutputConfigurationHasBeenSet)
  {
   payload.WithObject("customOutputConfiguration", m_customOutputConfiguration.Jsonize());

  }

  if(m_overrideConfigurationHasBeenSet)
  {
   payload.WithObject("overrideConfiguration", m_overrideConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataAutomationProjectStatusMapper::GetNameForDataAutomationProjectStatus(m_status));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_kmsEncryptionContextHasBeenSet)
  {
   JsonValue kmsEncryptionContextJsonMap;
   for(auto& kmsEncryptionContextItem : m_kmsEncryptionContext)
   {
     kmsEncryptionContextJsonMap.WithString(kmsEncryptionContextItem.first, kmsEncryptionContextItem.second);
   }
   payload.WithObject("kmsEncryptionContext", std::move(kmsEncryptionContextJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
