/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/WorkspaceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

WorkspaceSummary::WorkspaceSummary() : 
    m_authenticationHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_grafanaVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modifiedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_notificationDestinationsHasBeenSet(false),
    m_status(WorkspaceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

WorkspaceSummary::WorkspaceSummary(JsonView jsonValue) : 
    m_authenticationHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_grafanaVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modifiedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_notificationDestinationsHasBeenSet(false),
    m_status(WorkspaceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceSummary& WorkspaceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authentication"))
  {
    m_authentication = jsonValue.GetObject("authentication");

    m_authenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("grafanaVersion"))
  {
    m_grafanaVersion = jsonValue.GetString("grafanaVersion");

    m_grafanaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modified"))
  {
    m_modified = jsonValue.GetDouble("modified");

    m_modifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notificationDestinations"))
  {
    Aws::Utils::Array<JsonView> notificationDestinationsJsonList = jsonValue.GetArray("notificationDestinations");
    for(unsigned notificationDestinationsIndex = 0; notificationDestinationsIndex < notificationDestinationsJsonList.GetLength(); ++notificationDestinationsIndex)
    {
      m_notificationDestinations.push_back(NotificationDestinationTypeMapper::GetNotificationDestinationTypeForName(notificationDestinationsJsonList[notificationDestinationsIndex].AsString()));
    }
    m_notificationDestinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkspaceStatusMapper::GetWorkspaceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
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

JsonValue WorkspaceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationHasBeenSet)
  {
   payload.WithObject("authentication", m_authentication.Jsonize());

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_grafanaVersionHasBeenSet)
  {
   payload.WithString("grafanaVersion", m_grafanaVersion);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_modifiedHasBeenSet)
  {
   payload.WithDouble("modified", m_modified.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_notificationDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationDestinationsJsonList(m_notificationDestinations.size());
   for(unsigned notificationDestinationsIndex = 0; notificationDestinationsIndex < notificationDestinationsJsonList.GetLength(); ++notificationDestinationsIndex)
   {
     notificationDestinationsJsonList[notificationDestinationsIndex].AsString(NotificationDestinationTypeMapper::GetNameForNotificationDestinationType(m_notificationDestinations[notificationDestinationsIndex]));
   }
   payload.WithArray("notificationDestinations", std::move(notificationDestinationsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkspaceStatusMapper::GetNameForWorkspaceStatus(m_status));
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
} // namespace ManagedGrafana
} // namespace Aws
