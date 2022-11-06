/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeAppBlocksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAppBlocksResult::DescribeAppBlocksResult()
{
}

DescribeAppBlocksResult::DescribeAppBlocksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAppBlocksResult& DescribeAppBlocksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppBlocks"))
  {
    Aws::Utils::Array<JsonView> appBlocksJsonList = jsonValue.GetArray("AppBlocks");
    for(unsigned appBlocksIndex = 0; appBlocksIndex < appBlocksJsonList.GetLength(); ++appBlocksIndex)
    {
      m_appBlocks.push_back(appBlocksJsonList[appBlocksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
