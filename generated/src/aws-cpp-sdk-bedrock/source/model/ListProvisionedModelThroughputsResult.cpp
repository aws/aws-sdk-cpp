/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListProvisionedModelThroughputsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProvisionedModelThroughputsResult::ListProvisionedModelThroughputsResult()
{
}

ListProvisionedModelThroughputsResult::ListProvisionedModelThroughputsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProvisionedModelThroughputsResult& ListProvisionedModelThroughputsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("provisionedModelSummaries"))
  {
    Aws::Utils::Array<JsonView> provisionedModelSummariesJsonList = jsonValue.GetArray("provisionedModelSummaries");
    for(unsigned provisionedModelSummariesIndex = 0; provisionedModelSummariesIndex < provisionedModelSummariesJsonList.GetLength(); ++provisionedModelSummariesIndex)
    {
      m_provisionedModelSummaries.push_back(provisionedModelSummariesJsonList[provisionedModelSummariesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
