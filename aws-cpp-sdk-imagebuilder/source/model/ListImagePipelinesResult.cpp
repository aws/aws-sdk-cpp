/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListImagePipelinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImagePipelinesResult::ListImagePipelinesResult()
{
}

ListImagePipelinesResult::ListImagePipelinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImagePipelinesResult& ListImagePipelinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("imagePipelineList"))
  {
    Aws::Utils::Array<JsonView> imagePipelineListJsonList = jsonValue.GetArray("imagePipelineList");
    for(unsigned imagePipelineListIndex = 0; imagePipelineListIndex < imagePipelineListJsonList.GetLength(); ++imagePipelineListIndex)
    {
      m_imagePipelineList.push_back(imagePipelineListJsonList[imagePipelineListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
