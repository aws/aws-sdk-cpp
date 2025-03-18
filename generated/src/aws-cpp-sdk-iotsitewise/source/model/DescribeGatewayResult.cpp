/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeGatewayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGatewayResult::DescribeGatewayResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGatewayResult& DescribeGatewayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("gatewayId"))
  {
    m_gatewayId = jsonValue.GetString("gatewayId");
    m_gatewayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gatewayName"))
  {
    m_gatewayName = jsonValue.GetString("gatewayName");
    m_gatewayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gatewayPlatform"))
  {
    m_gatewayPlatform = jsonValue.GetObject("gatewayPlatform");
    m_gatewayPlatformHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gatewayVersion"))
  {
    m_gatewayVersion = jsonValue.GetString("gatewayVersion");
    m_gatewayVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gatewayCapabilitySummaries"))
  {
    Aws::Utils::Array<JsonView> gatewayCapabilitySummariesJsonList = jsonValue.GetArray("gatewayCapabilitySummaries");
    for(unsigned gatewayCapabilitySummariesIndex = 0; gatewayCapabilitySummariesIndex < gatewayCapabilitySummariesJsonList.GetLength(); ++gatewayCapabilitySummariesIndex)
    {
      m_gatewayCapabilitySummaries.push_back(gatewayCapabilitySummariesJsonList[gatewayCapabilitySummariesIndex].AsObject());
    }
    m_gatewayCapabilitySummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");
    m_lastUpdateDateHasBeenSet = true;
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
