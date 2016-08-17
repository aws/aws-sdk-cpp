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
#include <aws/datapipeline/model/ListPipelinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPipelinesResult::ListPipelinesResult() : 
    m_hasMoreResults(false)
{
}

ListPipelinesResult::ListPipelinesResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_hasMoreResults(false)
{
  *this = result;
}

ListPipelinesResult& ListPipelinesResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("pipelineIdList"))
  {
    Array<JsonValue> pipelineIdListJsonList = jsonValue.GetArray("pipelineIdList");
    for(unsigned pipelineIdListIndex = 0; pipelineIdListIndex < pipelineIdListJsonList.GetLength(); ++pipelineIdListIndex)
    {
      m_pipelineIdList.push_back(pipelineIdListJsonList[pipelineIdListIndex].AsObject());
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
