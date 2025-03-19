/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DescribeInboundIntegrationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInboundIntegrationsResult::DescribeInboundIntegrationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInboundIntegrationsResult& DescribeInboundIntegrationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InboundIntegrations"))
  {
    Aws::Utils::Array<JsonView> inboundIntegrationsJsonList = jsonValue.GetArray("InboundIntegrations");
    for(unsigned inboundIntegrationsIndex = 0; inboundIntegrationsIndex < inboundIntegrationsJsonList.GetLength(); ++inboundIntegrationsIndex)
    {
      m_inboundIntegrations.push_back(inboundIntegrationsJsonList[inboundIntegrationsIndex].AsObject());
    }
    m_inboundIntegrationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
