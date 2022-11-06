/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListApprovedOriginsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApprovedOriginsResult::ListApprovedOriginsResult()
{
}

ListApprovedOriginsResult::ListApprovedOriginsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApprovedOriginsResult& ListApprovedOriginsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Origins"))
  {
    Aws::Utils::Array<JsonView> originsJsonList = jsonValue.GetArray("Origins");
    for(unsigned originsIndex = 0; originsIndex < originsJsonList.GetLength(); ++originsIndex)
    {
      m_origins.push_back(originsJsonList[originsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
