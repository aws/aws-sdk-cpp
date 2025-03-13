/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/UpdateGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectoryServiceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String UpdateGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_groupScopeHasBeenSet)
  {
   payload.WithString("GroupScope", GroupScopeMapper::GetNameForGroupScope(m_groupScope));
  }

  if(m_groupTypeHasBeenSet)
  {
   payload.WithString("GroupType", GroupTypeMapper::GetNameForGroupType(m_groupType));
  }

  if(m_otherAttributesHasBeenSet)
  {
   JsonValue otherAttributesJsonMap;
   for(auto& otherAttributesItem : m_otherAttributes)
   {
     otherAttributesJsonMap.WithObject(otherAttributesItem.first, otherAttributesItem.second.Jsonize());
   }
   payload.WithObject("OtherAttributes", std::move(otherAttributesJsonMap));

  }

  if(m_sAMAccountNameHasBeenSet)
  {
   payload.WithString("SAMAccountName", m_sAMAccountName);

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("UpdateType", UpdateTypeMapper::GetNameForUpdateType(m_updateType));
  }

  return payload.View().WriteReadable();
}

void UpdateGroupRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_directoryIdHasBeenSet)
    {
      ss << m_directoryId;
      uri.AddQueryStringParameter("DirectoryId", ss.str());
      ss.str("");
    }

}



