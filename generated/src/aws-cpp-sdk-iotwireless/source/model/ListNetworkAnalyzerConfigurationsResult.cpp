/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListNetworkAnalyzerConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNetworkAnalyzerConfigurationsResult::ListNetworkAnalyzerConfigurationsResult()
{
}

ListNetworkAnalyzerConfigurationsResult::ListNetworkAnalyzerConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNetworkAnalyzerConfigurationsResult& ListNetworkAnalyzerConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("NetworkAnalyzerConfigurationList"))
  {
    Aws::Utils::Array<JsonView> networkAnalyzerConfigurationListJsonList = jsonValue.GetArray("NetworkAnalyzerConfigurationList");
    for(unsigned networkAnalyzerConfigurationListIndex = 0; networkAnalyzerConfigurationListIndex < networkAnalyzerConfigurationListJsonList.GetLength(); ++networkAnalyzerConfigurationListIndex)
    {
      m_networkAnalyzerConfigurationList.push_back(networkAnalyzerConfigurationListJsonList[networkAnalyzerConfigurationListIndex].AsObject());
    }
  }



  return *this;
}
