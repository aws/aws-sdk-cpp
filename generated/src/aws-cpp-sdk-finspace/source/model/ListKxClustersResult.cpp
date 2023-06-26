/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ListKxClustersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKxClustersResult::ListKxClustersResult()
{
}

ListKxClustersResult::ListKxClustersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListKxClustersResult& ListKxClustersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("kxClusterSummaries"))
  {
    Aws::Utils::Array<JsonView> kxClusterSummariesJsonList = jsonValue.GetArray("kxClusterSummaries");
    for(unsigned kxClusterSummariesIndex = 0; kxClusterSummariesIndex < kxClusterSummariesJsonList.GetLength(); ++kxClusterSummariesIndex)
    {
      m_kxClusterSummaries.push_back(kxClusterSummariesJsonList[kxClusterSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
