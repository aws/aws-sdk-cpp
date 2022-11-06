/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListIndicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIndicesResult::ListIndicesResult()
{
}

ListIndicesResult::ListIndicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIndicesResult& ListIndicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("indexNames"))
  {
    Aws::Utils::Array<JsonView> indexNamesJsonList = jsonValue.GetArray("indexNames");
    for(unsigned indexNamesIndex = 0; indexNamesIndex < indexNamesJsonList.GetLength(); ++indexNamesIndex)
    {
      m_indexNames.push_back(indexNamesJsonList[indexNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
