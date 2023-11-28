/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetFlowAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFlowAssociationResult::GetFlowAssociationResult() : 
    m_resourceType(FlowAssociationResourceType::NOT_SET)
{
}

GetFlowAssociationResult::GetFlowAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourceType(FlowAssociationResourceType::NOT_SET)
{
  *this = result;
}

GetFlowAssociationResult& GetFlowAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

  }

  if(jsonValue.ValueExists("FlowId"))
  {
    m_flowId = jsonValue.GetString("FlowId");

  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = FlowAssociationResourceTypeMapper::GetFlowAssociationResourceTypeForName(jsonValue.GetString("ResourceType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
