/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ListLoggingConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLoggingConfigurationsResult::ListLoggingConfigurationsResult()
{
}

ListLoggingConfigurationsResult::ListLoggingConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLoggingConfigurationsResult& ListLoggingConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LoggingConfigurations"))
  {
    Aws::Utils::Array<JsonView> loggingConfigurationsJsonList = jsonValue.GetArray("LoggingConfigurations");
    for(unsigned loggingConfigurationsIndex = 0; loggingConfigurationsIndex < loggingConfigurationsJsonList.GetLength(); ++loggingConfigurationsIndex)
    {
      m_loggingConfigurations.push_back(loggingConfigurationsJsonList[loggingConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }



  return *this;
}
