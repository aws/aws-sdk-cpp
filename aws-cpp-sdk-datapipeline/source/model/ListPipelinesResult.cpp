/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> pipelineIdListJsonList = jsonValue.GetArray("pipelineIdList");
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
