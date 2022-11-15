/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/QueryObjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryObjectsResult::QueryObjectsResult() : 
    m_hasMoreResults(false)
{
}

QueryObjectsResult::QueryObjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hasMoreResults(false)
{
  *this = result;
}

QueryObjectsResult& QueryObjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ids"))
  {
    Aws::Utils::Array<JsonView> idsJsonList = jsonValue.GetArray("ids");
    for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
    {
      m_ids.push_back(idsJsonList[idsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("marker"))
  {
    m_marker = jsonValue.GetString("marker");

  }

  if(jsonValue.ValueExists("hasMoreResults"))
  {
    m_hasMoreResults = jsonValue.GetBool("hasMoreResults");

  }



  return *this;
}
