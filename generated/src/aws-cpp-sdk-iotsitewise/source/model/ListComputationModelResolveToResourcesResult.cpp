/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListComputationModelResolveToResourcesResult.h>
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

ListComputationModelResolveToResourcesResult::ListComputationModelResolveToResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListComputationModelResolveToResourcesResult& ListComputationModelResolveToResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("computationModelResolveToResourceSummaries"))
  {
    Aws::Utils::Array<JsonView> computationModelResolveToResourceSummariesJsonList = jsonValue.GetArray("computationModelResolveToResourceSummaries");
    for(unsigned computationModelResolveToResourceSummariesIndex = 0; computationModelResolveToResourceSummariesIndex < computationModelResolveToResourceSummariesJsonList.GetLength(); ++computationModelResolveToResourceSummariesIndex)
    {
      m_computationModelResolveToResourceSummaries.push_back(computationModelResolveToResourceSummariesJsonList[computationModelResolveToResourceSummariesIndex].AsObject());
    }
    m_computationModelResolveToResourceSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
