/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateVpcLinkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateVpcLinkResult::CreateVpcLinkResult() : 
    m_vpcLinkStatus(VpcLinkStatus::NOT_SET),
    m_vpcLinkVersion(VpcLinkVersion::NOT_SET)
{
}

CreateVpcLinkResult::CreateVpcLinkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_vpcLinkStatus(VpcLinkStatus::NOT_SET),
    m_vpcLinkVersion(VpcLinkVersion::NOT_SET)
{
  *this = result;
}

CreateVpcLinkResult& CreateVpcLinkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("vpcLinkId"))
  {
    m_vpcLinkId = jsonValue.GetString("vpcLinkId");

  }

  if(jsonValue.ValueExists("vpcLinkStatus"))
  {
    m_vpcLinkStatus = VpcLinkStatusMapper::GetVpcLinkStatusForName(jsonValue.GetString("vpcLinkStatus"));

  }

  if(jsonValue.ValueExists("vpcLinkStatusMessage"))
  {
    m_vpcLinkStatusMessage = jsonValue.GetString("vpcLinkStatusMessage");

  }

  if(jsonValue.ValueExists("vpcLinkVersion"))
  {
    m_vpcLinkVersion = VpcLinkVersionMapper::GetVpcLinkVersionForName(jsonValue.GetString("vpcLinkVersion"));

  }



  return *this;
}
