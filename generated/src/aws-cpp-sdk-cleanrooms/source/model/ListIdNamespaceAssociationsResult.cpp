/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListIdNamespaceAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIdNamespaceAssociationsResult::ListIdNamespaceAssociationsResult()
{
}

ListIdNamespaceAssociationsResult::ListIdNamespaceAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIdNamespaceAssociationsResult& ListIdNamespaceAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("idNamespaceAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> idNamespaceAssociationSummariesJsonList = jsonValue.GetArray("idNamespaceAssociationSummaries");
    for(unsigned idNamespaceAssociationSummariesIndex = 0; idNamespaceAssociationSummariesIndex < idNamespaceAssociationSummariesJsonList.GetLength(); ++idNamespaceAssociationSummariesIndex)
    {
      m_idNamespaceAssociationSummaries.push_back(idNamespaceAssociationSummariesJsonList[idNamespaceAssociationSummariesIndex].AsObject());
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
