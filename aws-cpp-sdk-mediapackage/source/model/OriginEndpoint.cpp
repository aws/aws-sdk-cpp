/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/OriginEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

OriginEndpoint::OriginEndpoint() : 
    m_arnHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_cmafPackageHasBeenSet(false),
    m_dashPackageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hlsPackageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_mssPackageHasBeenSet(false),
    m_origination(Origination::NOT_SET),
    m_originationHasBeenSet(false),
    m_startoverWindowSeconds(0),
    m_startoverWindowSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_timeDelaySeconds(0),
    m_timeDelaySecondsHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_whitelistHasBeenSet(false)
{
}

OriginEndpoint::OriginEndpoint(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_cmafPackageHasBeenSet(false),
    m_dashPackageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hlsPackageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_mssPackageHasBeenSet(false),
    m_origination(Origination::NOT_SET),
    m_originationHasBeenSet(false),
    m_startoverWindowSeconds(0),
    m_startoverWindowSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_timeDelaySeconds(0),
    m_timeDelaySecondsHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_whitelistHasBeenSet(false)
{
  *this = jsonValue;
}

OriginEndpoint& OriginEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorization"))
  {
    m_authorization = jsonValue.GetObject("authorization");

    m_authorizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cmafPackage"))
  {
    m_cmafPackage = jsonValue.GetObject("cmafPackage");

    m_cmafPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dashPackage"))
  {
    m_dashPackage = jsonValue.GetObject("dashPackage");

    m_dashPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsPackage"))
  {
    m_hlsPackage = jsonValue.GetObject("hlsPackage");

    m_hlsPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestName"))
  {
    m_manifestName = jsonValue.GetString("manifestName");

    m_manifestNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mssPackage"))
  {
    m_mssPackage = jsonValue.GetObject("mssPackage");

    m_mssPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("origination"))
  {
    m_origination = OriginationMapper::GetOriginationForName(jsonValue.GetString("origination"));

    m_originationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startoverWindowSeconds"))
  {
    m_startoverWindowSeconds = jsonValue.GetInteger("startoverWindowSeconds");

    m_startoverWindowSecondsHasBeenSet = true;
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

  if(jsonValue.ValueExists("timeDelaySeconds"))
  {
    m_timeDelaySeconds = jsonValue.GetInteger("timeDelaySeconds");

    m_timeDelaySecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("whitelist"))
  {
    Aws::Utils::Array<JsonView> whitelistJsonList = jsonValue.GetArray("whitelist");
    for(unsigned whitelistIndex = 0; whitelistIndex < whitelistJsonList.GetLength(); ++whitelistIndex)
    {
      m_whitelist.push_back(whitelistJsonList[whitelistIndex].AsString());
    }
    m_whitelistHasBeenSet = true;
  }

  return *this;
}

JsonValue OriginEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_authorizationHasBeenSet)
  {
   payload.WithObject("authorization", m_authorization.Jsonize());

  }

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_cmafPackageHasBeenSet)
  {
   payload.WithObject("cmafPackage", m_cmafPackage.Jsonize());

  }

  if(m_dashPackageHasBeenSet)
  {
   payload.WithObject("dashPackage", m_dashPackage.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_hlsPackageHasBeenSet)
  {
   payload.WithObject("hlsPackage", m_hlsPackage.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("manifestName", m_manifestName);

  }

  if(m_mssPackageHasBeenSet)
  {
   payload.WithObject("mssPackage", m_mssPackage.Jsonize());

  }

  if(m_originationHasBeenSet)
  {
   payload.WithString("origination", OriginationMapper::GetNameForOrigination(m_origination));
  }

  if(m_startoverWindowSecondsHasBeenSet)
  {
   payload.WithInteger("startoverWindowSeconds", m_startoverWindowSeconds);

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

  if(m_timeDelaySecondsHasBeenSet)
  {
   payload.WithInteger("timeDelaySeconds", m_timeDelaySeconds);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_whitelistHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> whitelistJsonList(m_whitelist.size());
   for(unsigned whitelistIndex = 0; whitelistIndex < whitelistJsonList.GetLength(); ++whitelistIndex)
   {
     whitelistJsonList[whitelistIndex].AsString(m_whitelist[whitelistIndex]);
   }
   payload.WithArray("whitelist", std::move(whitelistJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
