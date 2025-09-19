/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/DescribeScraperLoggingConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScraperLoggingConfigurationResult::DescribeScraperLoggingConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScraperLoggingConfigurationResult& DescribeScraperLoggingConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scraperId"))
  {
    m_scraperId = jsonValue.GetString("scraperId");
    m_scraperIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loggingDestination"))
  {
    m_loggingDestination = jsonValue.GetObject("loggingDestination");
    m_loggingDestinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scraperComponents"))
  {
    Aws::Utils::Array<JsonView> scraperComponentsJsonList = jsonValue.GetArray("scraperComponents");
    for(unsigned scraperComponentsIndex = 0; scraperComponentsIndex < scraperComponentsJsonList.GetLength(); ++scraperComponentsIndex)
    {
      m_scraperComponents.push_back(scraperComponentsJsonList[scraperComponentsIndex].AsObject());
    }
    m_scraperComponentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
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
