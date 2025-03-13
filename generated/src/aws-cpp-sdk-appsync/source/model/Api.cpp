/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/Api.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

Api::Api(JsonView jsonValue)
{
  *this = jsonValue;
}

Api& Api::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");
    m_apiIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ownerContact"))
  {
    m_ownerContact = jsonValue.GetString("ownerContact");
    m_ownerContactHasBeenSet = true;
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
  if(jsonValue.ValueExists("dns"))
  {
    Aws::Map<Aws::String, JsonView> dnsJsonMap = jsonValue.GetObject("dns").GetAllObjects();
    for(auto& dnsItem : dnsJsonMap)
    {
      m_dns[dnsItem.first] = dnsItem.second.AsString();
    }
    m_dnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiArn"))
  {
    m_apiArn = jsonValue.GetString("apiArn");
    m_apiArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");
    m_createdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("xrayEnabled"))
  {
    m_xrayEnabled = jsonValue.GetBool("xrayEnabled");
    m_xrayEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wafWebAclArn"))
  {
    m_wafWebAclArn = jsonValue.GetString("wafWebAclArn");
    m_wafWebAclArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventConfig"))
  {
    m_eventConfig = jsonValue.GetObject("eventConfig");
    m_eventConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue Api::Jsonize() const
{
  JsonValue payload;

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerContactHasBeenSet)
  {
   payload.WithString("ownerContact", m_ownerContact);

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

  if(m_dnsHasBeenSet)
  {
   JsonValue dnsJsonMap;
   for(auto& dnsItem : m_dns)
   {
     dnsJsonMap.WithString(dnsItem.first, dnsItem.second);
   }
   payload.WithObject("dns", std::move(dnsJsonMap));

  }

  if(m_apiArnHasBeenSet)
  {
   payload.WithString("apiArn", m_apiArn);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_xrayEnabledHasBeenSet)
  {
   payload.WithBool("xrayEnabled", m_xrayEnabled);

  }

  if(m_wafWebAclArnHasBeenSet)
  {
   payload.WithString("wafWebAclArn", m_wafWebAclArn);

  }

  if(m_eventConfigHasBeenSet)
  {
   payload.WithObject("eventConfig", m_eventConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
