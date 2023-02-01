/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/VpcLink.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

VpcLink::VpcLink() : 
    m_createdDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcLinkIdHasBeenSet(false),
    m_vpcLinkStatus(VpcLinkStatus::NOT_SET),
    m_vpcLinkStatusHasBeenSet(false),
    m_vpcLinkStatusMessageHasBeenSet(false),
    m_vpcLinkVersion(VpcLinkVersion::NOT_SET),
    m_vpcLinkVersionHasBeenSet(false)
{
}

VpcLink::VpcLink(JsonView jsonValue) : 
    m_createdDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcLinkIdHasBeenSet(false),
    m_vpcLinkStatus(VpcLinkStatus::NOT_SET),
    m_vpcLinkStatusHasBeenSet(false),
    m_vpcLinkStatusMessageHasBeenSet(false),
    m_vpcLinkVersion(VpcLinkVersion::NOT_SET),
    m_vpcLinkVersionHasBeenSet(false)
{
  *this = jsonValue;
}

VpcLink& VpcLink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
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

  if(jsonValue.ValueExists("vpcLinkId"))
  {
    m_vpcLinkId = jsonValue.GetString("vpcLinkId");

    m_vpcLinkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcLinkStatus"))
  {
    m_vpcLinkStatus = VpcLinkStatusMapper::GetVpcLinkStatusForName(jsonValue.GetString("vpcLinkStatus"));

    m_vpcLinkStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcLinkStatusMessage"))
  {
    m_vpcLinkStatusMessage = jsonValue.GetString("vpcLinkStatusMessage");

    m_vpcLinkStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcLinkVersion"))
  {
    m_vpcLinkVersion = VpcLinkVersionMapper::GetVpcLinkVersionForName(jsonValue.GetString("vpcLinkVersion"));

    m_vpcLinkVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcLink::Jsonize() const
{
  JsonValue payload;

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("createdDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

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

  if(m_vpcLinkIdHasBeenSet)
  {
   payload.WithString("vpcLinkId", m_vpcLinkId);

  }

  if(m_vpcLinkStatusHasBeenSet)
  {
   payload.WithString("vpcLinkStatus", VpcLinkStatusMapper::GetNameForVpcLinkStatus(m_vpcLinkStatus));
  }

  if(m_vpcLinkStatusMessageHasBeenSet)
  {
   payload.WithString("vpcLinkStatusMessage", m_vpcLinkStatusMessage);

  }

  if(m_vpcLinkVersionHasBeenSet)
  {
   payload.WithString("vpcLinkVersion", VpcLinkVersionMapper::GetNameForVpcLinkVersion(m_vpcLinkVersion));
  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
