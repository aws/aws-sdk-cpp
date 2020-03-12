/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/apigatewayv2/model/GetVpcLinkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetVpcLinkResult::GetVpcLinkResult() : 
    m_vpcLinkStatus(VpcLinkStatus::NOT_SET),
    m_vpcLinkVersion(VpcLinkVersion::NOT_SET)
{
}

GetVpcLinkResult::GetVpcLinkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_vpcLinkStatus(VpcLinkStatus::NOT_SET),
    m_vpcLinkVersion(VpcLinkVersion::NOT_SET)
{
  *this = result;
}

GetVpcLinkResult& GetVpcLinkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
    Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
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
