/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/EnableSecurityHubRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableSecurityHubRequest::EnableSecurityHubRequest() : 
    m_tagsHasBeenSet(false),
    m_enableDefaultStandards(false),
    m_enableDefaultStandardsHasBeenSet(false)
{
}

Aws::String EnableSecurityHubRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_enableDefaultStandardsHasBeenSet)
  {
   payload.WithBool("EnableDefaultStandards", m_enableDefaultStandards);

  }

  return payload.View().WriteReadable();
}




