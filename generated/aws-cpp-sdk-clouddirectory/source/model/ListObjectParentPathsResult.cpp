﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListObjectParentPathsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListObjectParentPathsResult::ListObjectParentPathsResult()
{
}

ListObjectParentPathsResult::ListObjectParentPathsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListObjectParentPathsResult& ListObjectParentPathsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PathToObjectIdentifiersList"))
  {
    Array<JsonView> pathToObjectIdentifiersListJsonList = jsonValue.GetArray("PathToObjectIdentifiersList");
    for(unsigned pathToObjectIdentifiersListIndex = 0; pathToObjectIdentifiersListIndex < pathToObjectIdentifiersListJsonList.GetLength(); ++pathToObjectIdentifiersListIndex)
    {
      m_pathToObjectIdentifiersList.push_back(pathToObjectIdentifiersListJsonList[pathToObjectIdentifiersListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
