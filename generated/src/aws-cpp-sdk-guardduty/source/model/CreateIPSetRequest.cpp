/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CreateIPSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIPSetRequest::CreateIPSetRequest() : 
    m_detectorIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_format(IpSetFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_activate(false),
    m_activateHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateIPSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", IpSetFormatMapper::GetNameForIpSetFormat(m_format));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_activateHasBeenSet)
  {
   payload.WithBool("activate", m_activate);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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

  return payload.View().WriteReadable();
}




