/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/DescribeImagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECRPublic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeImagesResult::DescribeImagesResult()
{
}

DescribeImagesResult::DescribeImagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeImagesResult& DescribeImagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("imageDetails"))
  {
    Aws::Utils::Array<JsonView> imageDetailsJsonList = jsonValue.GetArray("imageDetails");
    for(unsigned imageDetailsIndex = 0; imageDetailsIndex < imageDetailsJsonList.GetLength(); ++imageDetailsIndex)
    {
      m_imageDetails.push_back(imageDetailsJsonList[imageDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
