﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/StringUtils.h>
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

ListPipelinesResult::ListPipelinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hasMoreResults(false)
{
  *this = result;
}

ListPipelinesResult& ListPipelinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pipelineIdList"))
  {
    Array<JsonView> pipelineIdListJsonList = jsonValue.GetArray("pipelineIdList");
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
