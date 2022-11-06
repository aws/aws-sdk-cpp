/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/DescribeImageTagsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECRPublic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeImageTagsResult::DescribeImageTagsResult()
{
}

DescribeImageTagsResult::DescribeImageTagsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeImageTagsResult& DescribeImageTagsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("imageTagDetails"))
  {
    Aws::Utils::Array<JsonView> imageTagDetailsJsonList = jsonValue.GetArray("imageTagDetails");
    for(unsigned imageTagDetailsIndex = 0; imageTagDetailsIndex < imageTagDetailsJsonList.GetLength(); ++imageTagDetailsIndex)
    {
      m_imageTagDetails.push_back(imageTagDetailsJsonList[imageTagDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
