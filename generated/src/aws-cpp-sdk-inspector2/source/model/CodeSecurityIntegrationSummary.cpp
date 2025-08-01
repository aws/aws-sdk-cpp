/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeSecurityIntegrationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeSecurityIntegrationSummary::CodeSecurityIntegrationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeSecurityIntegrationSummary& CodeSecurityIntegrationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("integrationArn"))
  {
    m_integrationArn = jsonValue.GetString("integrationArn");
    m_integrationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = IntegrationTypeMapper::GetIntegrationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = IntegrationStatusMapper::GetIntegrationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdOn"))
  {
    m_createdOn = jsonValue.GetDouble("createdOn");
    m_createdOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateOn"))
  {
    m_lastUpdateOn = jsonValue.GetDouble("lastUpdateOn");
    m_lastUpdateOnHasBeenSet = true;
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

JsonValue CodeSecurityIntegrationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("integrationArn", m_integrationArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", IntegrationTypeMapper::GetNameForIntegrationType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", IntegrationStatusMapper::GetNameForIntegrationStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_createdOnHasBeenSet)
  {
   payload.WithDouble("createdOn", m_createdOn.SecondsWithMSPrecision());
  }

  if(m_lastUpdateOnHasBeenSet)
  {
   payload.WithDouble("lastUpdateOn", m_lastUpdateOn.SecondsWithMSPrecision());
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
} // namespace Inspector2
} // namespace Aws
