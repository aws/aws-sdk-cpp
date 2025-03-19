/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ListConfigurationRecordersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConfigurationRecordersResult::ListConfigurationRecordersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConfigurationRecordersResult& ListConfigurationRecordersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationRecorderSummaries"))
  {
    Aws::Utils::Array<JsonView> configurationRecorderSummariesJsonList = jsonValue.GetArray("ConfigurationRecorderSummaries");
    for(unsigned configurationRecorderSummariesIndex = 0; configurationRecorderSummariesIndex < configurationRecorderSummariesJsonList.GetLength(); ++configurationRecorderSummariesIndex)
    {
      m_configurationRecorderSummaries.push_back(configurationRecorderSummariesJsonList[configurationRecorderSummariesIndex].AsObject());
    }
    m_configurationRecorderSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
