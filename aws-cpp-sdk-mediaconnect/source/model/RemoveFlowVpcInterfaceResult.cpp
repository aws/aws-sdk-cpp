/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/RemoveFlowVpcInterfaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RemoveFlowVpcInterfaceResult::RemoveFlowVpcInterfaceResult()
{
}

RemoveFlowVpcInterfaceResult::RemoveFlowVpcInterfaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RemoveFlowVpcInterfaceResult& RemoveFlowVpcInterfaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

  }

  if(jsonValue.ValueExists("nonDeletedNetworkInterfaceIds"))
  {
    Aws::Utils::Array<JsonView> nonDeletedNetworkInterfaceIdsJsonList = jsonValue.GetArray("nonDeletedNetworkInterfaceIds");
    for(unsigned nonDeletedNetworkInterfaceIdsIndex = 0; nonDeletedNetworkInterfaceIdsIndex < nonDeletedNetworkInterfaceIdsJsonList.GetLength(); ++nonDeletedNetworkInterfaceIdsIndex)
    {
      m_nonDeletedNetworkInterfaceIds.push_back(nonDeletedNetworkInterfaceIdsJsonList[nonDeletedNetworkInterfaceIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("vpcInterfaceName"))
  {
    m_vpcInterfaceName = jsonValue.GetString("vpcInterfaceName");

  }



  return *this;
}
