/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/ListEnvironmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Cloud9::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnvironmentsResult::ListEnvironmentsResult()
{
}

ListEnvironmentsResult::ListEnvironmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEnvironmentsResult& ListEnvironmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("environmentIds"))
  {
    Aws::Utils::Array<JsonView> environmentIdsJsonList = jsonValue.GetArray("environmentIds");
    for(unsigned environmentIdsIndex = 0; environmentIdsIndex < environmentIdsJsonList.GetLength(); ++environmentIdsIndex)
    {
      m_environmentIds.push_back(environmentIdsJsonList[environmentIdsIndex].AsString());
    }
  }



  return *this;
}
