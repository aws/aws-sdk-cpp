/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListImagePipelineImagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImagePipelineImagesResult::ListImagePipelineImagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImagePipelineImagesResult& ListImagePipelineImagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageSummaryList"))
  {
    Aws::Utils::Array<JsonView> imageSummaryListJsonList = jsonValue.GetArray("imageSummaryList");
    for(unsigned imageSummaryListIndex = 0; imageSummaryListIndex < imageSummaryListJsonList.GetLength(); ++imageSummaryListIndex)
    {
      m_imageSummaryList.push_back(imageSummaryListJsonList[imageSummaryListIndex].AsObject());
    }
    m_imageSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }


  return *this;
}
