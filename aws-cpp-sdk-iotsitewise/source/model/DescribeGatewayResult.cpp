/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeGatewayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGatewayResult::DescribeGatewayResult()
{
}

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

  }

  if(jsonValue.ValueExists("gatewayName"))
  {
    m_gatewayName = jsonValue.GetString("gatewayName");

  }

  if(jsonValue.ValueExists("gatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("gatewayArn");

  }

  if(jsonValue.ValueExists("gatewayPlatform"))
  {
    m_gatewayPlatform = jsonValue.GetObject("gatewayPlatform");

  }

  if(jsonValue.ValueExists("gatewayCapabilitySummaries"))
  {
    Aws::Utils::Array<JsonView> gatewayCapabilitySummariesJsonList = jsonValue.GetArray("gatewayCapabilitySummaries");
    for(unsigned gatewayCapabilitySummariesIndex = 0; gatewayCapabilitySummariesIndex < gatewayCapabilitySummariesJsonList.GetLength(); ++gatewayCapabilitySummariesIndex)
    {
      m_gatewayCapabilitySummaries.push_back(gatewayCapabilitySummariesJsonList[gatewayCapabilitySummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");

  }



  return *this;
}
