/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BatchGetCustomDataIdentifiersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCustomDataIdentifiersResult::BatchGetCustomDataIdentifiersResult()
{
}

BatchGetCustomDataIdentifiersResult::BatchGetCustomDataIdentifiersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetCustomDataIdentifiersResult& BatchGetCustomDataIdentifiersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("customDataIdentifiers"))
  {
    Aws::Utils::Array<JsonView> customDataIdentifiersJsonList = jsonValue.GetArray("customDataIdentifiers");
    for(unsigned customDataIdentifiersIndex = 0; customDataIdentifiersIndex < customDataIdentifiersJsonList.GetLength(); ++customDataIdentifiersIndex)
    {
      m_customDataIdentifiers.push_back(customDataIdentifiersJsonList[customDataIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("notFoundIdentifierIds"))
  {
    Aws::Utils::Array<JsonView> notFoundIdentifierIdsJsonList = jsonValue.GetArray("notFoundIdentifierIds");
    for(unsigned notFoundIdentifierIdsIndex = 0; notFoundIdentifierIdsIndex < notFoundIdentifierIdsJsonList.GetLength(); ++notFoundIdentifierIdsIndex)
    {
      m_notFoundIdentifierIds.push_back(notFoundIdentifierIdsJsonList[notFoundIdentifierIdsIndex].AsString());
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
