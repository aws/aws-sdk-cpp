/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListInterfaceRelationshipsResult.h>
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

ListInterfaceRelationshipsResult::ListInterfaceRelationshipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInterfaceRelationshipsResult& ListInterfaceRelationshipsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("interfaceRelationshipSummaries"))
  {
    Aws::Utils::Array<JsonView> interfaceRelationshipSummariesJsonList = jsonValue.GetArray("interfaceRelationshipSummaries");
    for(unsigned interfaceRelationshipSummariesIndex = 0; interfaceRelationshipSummariesIndex < interfaceRelationshipSummariesJsonList.GetLength(); ++interfaceRelationshipSummariesIndex)
    {
      m_interfaceRelationshipSummaries.push_back(interfaceRelationshipSummariesJsonList[interfaceRelationshipSummariesIndex].AsObject());
    }
    m_interfaceRelationshipSummariesHasBeenSet = true;
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
