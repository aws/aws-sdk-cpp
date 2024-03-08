/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListCompositionRelationshipsResult.h>
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

ListCompositionRelationshipsResult::ListCompositionRelationshipsResult()
{
}

ListCompositionRelationshipsResult::ListCompositionRelationshipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCompositionRelationshipsResult& ListCompositionRelationshipsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("compositionRelationshipSummaries"))
  {
    Aws::Utils::Array<JsonView> compositionRelationshipSummariesJsonList = jsonValue.GetArray("compositionRelationshipSummaries");
    for(unsigned compositionRelationshipSummariesIndex = 0; compositionRelationshipSummariesIndex < compositionRelationshipSummariesJsonList.GetLength(); ++compositionRelationshipSummariesIndex)
    {
      m_compositionRelationshipSummaries.push_back(compositionRelationshipSummariesJsonList[compositionRelationshipSummariesIndex].AsObject());
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
