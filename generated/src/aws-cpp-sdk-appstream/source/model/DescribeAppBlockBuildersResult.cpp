/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeAppBlockBuildersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAppBlockBuildersResult::DescribeAppBlockBuildersResult()
{
}

DescribeAppBlockBuildersResult::DescribeAppBlockBuildersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAppBlockBuildersResult& DescribeAppBlockBuildersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppBlockBuilders"))
  {
    Aws::Utils::Array<JsonView> appBlockBuildersJsonList = jsonValue.GetArray("AppBlockBuilders");
    for(unsigned appBlockBuildersIndex = 0; appBlockBuildersIndex < appBlockBuildersJsonList.GetLength(); ++appBlockBuildersIndex)
    {
      m_appBlockBuilders.push_back(appBlockBuildersJsonList[appBlockBuildersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
