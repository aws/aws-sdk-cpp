/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeImageBuildersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeImageBuildersResult::DescribeImageBuildersResult()
{
}

DescribeImageBuildersResult::DescribeImageBuildersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeImageBuildersResult& DescribeImageBuildersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImageBuilders"))
  {
    Aws::Utils::Array<JsonView> imageBuildersJsonList = jsonValue.GetArray("ImageBuilders");
    for(unsigned imageBuildersIndex = 0; imageBuildersIndex < imageBuildersJsonList.GetLength(); ++imageBuildersIndex)
    {
      m_imageBuilders.push_back(imageBuildersJsonList[imageBuildersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
