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
    Array<JsonView> gatewayCapabilitySummariesJsonList = jsonValue.GetArray("gatewayCapabilitySummaries");
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
