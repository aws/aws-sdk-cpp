/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/datapipeline/model/QueryObjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
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

QueryObjectsResult::QueryObjectsResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_hasMoreResults(false)
{
  *this = result;
}

QueryObjectsResult& QueryObjectsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("ids"))
  {
    Array<JsonValue> idsJsonList = jsonValue.GetArray("ids");
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
