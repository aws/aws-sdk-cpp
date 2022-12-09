/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/PackagingGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

PackagingGroup::PackagingGroup() : 
    m_approximateAssetCount(0),
    m_approximateAssetCountHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_egressAccessLogsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

PackagingGroup::PackagingGroup(JsonView jsonValue) : 
    m_approximateAssetCount(0),
    m_approximateAssetCountHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_egressAccessLogsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

PackagingGroup& PackagingGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("approximateAssetCount"))
  {
    m_approximateAssetCount = jsonValue.GetInteger("approximateAssetCount");

    m_approximateAssetCountHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("egressAccessLogs"))
  {
    m_egressAccessLogs = jsonValue.GetObject("egressAccessLogs");

    m_egressAccessLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
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

JsonValue PackagingGroup::Jsonize() const
{
  JsonValue payload;

  if(m_approximateAssetCountHasBeenSet)
  {
   payload.WithInteger("approximateAssetCount", m_approximateAssetCount);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_authorizationHasBeenSet)
  {
   payload.WithObject("authorization", m_authorization.Jsonize());

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_egressAccessLogsHasBeenSet)
  {
   payload.WithObject("egressAccessLogs", m_egressAccessLogs.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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
} // namespace MediaPackageVod
} // namespace Aws
