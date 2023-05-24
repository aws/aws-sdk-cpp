/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ListSourceApiAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSourceApiAssociationsResult::ListSourceApiAssociationsResult()
{
}

ListSourceApiAssociationsResult::ListSourceApiAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSourceApiAssociationsResult& ListSourceApiAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sourceApiAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> sourceApiAssociationSummariesJsonList = jsonValue.GetArray("sourceApiAssociationSummaries");
    for(unsigned sourceApiAssociationSummariesIndex = 0; sourceApiAssociationSummariesIndex < sourceApiAssociationSummariesJsonList.GetLength(); ++sourceApiAssociationSummariesIndex)
    {
      m_sourceApiAssociationSummaries.push_back(sourceApiAssociationSummariesJsonList[sourceApiAssociationSummariesIndex].AsObject());
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
