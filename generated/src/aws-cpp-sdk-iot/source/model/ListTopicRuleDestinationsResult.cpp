/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListTopicRuleDestinationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTopicRuleDestinationsResult::ListTopicRuleDestinationsResult()
{
}

ListTopicRuleDestinationsResult::ListTopicRuleDestinationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTopicRuleDestinationsResult& ListTopicRuleDestinationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("destinationSummaries"))
  {
    Aws::Utils::Array<JsonView> destinationSummariesJsonList = jsonValue.GetArray("destinationSummaries");
    for(unsigned destinationSummariesIndex = 0; destinationSummariesIndex < destinationSummariesJsonList.GetLength(); ++destinationSummariesIndex)
    {
      m_destinationSummaries.push_back(destinationSummariesJsonList[destinationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
