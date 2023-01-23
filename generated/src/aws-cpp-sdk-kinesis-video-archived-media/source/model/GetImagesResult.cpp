/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/GetImagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImagesResult::GetImagesResult()
{
}

GetImagesResult::GetImagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetImagesResult& GetImagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Images"))
  {
    Aws::Utils::Array<JsonView> imagesJsonList = jsonValue.GetArray("Images");
    for(unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex)
    {
      m_images.push_back(imagesJsonList[imagesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
