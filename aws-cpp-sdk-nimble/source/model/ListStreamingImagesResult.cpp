/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListStreamingImagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStreamingImagesResult::ListStreamingImagesResult()
{
}

ListStreamingImagesResult::ListStreamingImagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStreamingImagesResult& ListStreamingImagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("streamingImages"))
  {
    Aws::Utils::Array<JsonView> streamingImagesJsonList = jsonValue.GetArray("streamingImages");
    for(unsigned streamingImagesIndex = 0; streamingImagesIndex < streamingImagesJsonList.GetLength(); ++streamingImagesIndex)
    {
      m_streamingImages.push_back(streamingImagesJsonList[streamingImagesIndex].AsObject());
    }
  }



  return *this;
}
