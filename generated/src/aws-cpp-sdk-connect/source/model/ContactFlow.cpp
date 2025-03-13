/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ContactFlow::ContactFlow(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactFlow& ContactFlow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ContactFlowTypeMapper::GetContactFlowTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ContactFlowStateMapper::GetContactFlowStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ContactFlowStatusMapper::GetContactFlowStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowContentSha256"))
  {
    m_flowContentSha256 = jsonValue.GetString("FlowContentSha256");
    m_flowContentSha256HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionDescription"))
  {
    m_versionDescription = jsonValue.GetString("VersionDescription");
    m_versionDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedRegion"))
  {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactFlow::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ContactFlowTypeMapper::GetNameForContactFlowType(m_type));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ContactFlowStateMapper::GetNameForContactFlowState(m_state));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ContactFlowStatusMapper::GetNameForContactFlowStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_flowContentSha256HasBeenSet)
  {
   payload.WithString("FlowContentSha256", m_flowContentSha256);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedRegionHasBeenSet)
  {
   payload.WithString("LastModifiedRegion", m_lastModifiedRegion);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
