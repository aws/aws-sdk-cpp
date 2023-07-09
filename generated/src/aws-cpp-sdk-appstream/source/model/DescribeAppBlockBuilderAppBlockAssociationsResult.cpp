/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeAppBlockBuilderAppBlockAssociationsResult.h>
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

DescribeAppBlockBuilderAppBlockAssociationsResult::DescribeAppBlockBuilderAppBlockAssociationsResult()
{
}

DescribeAppBlockBuilderAppBlockAssociationsResult::DescribeAppBlockBuilderAppBlockAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAppBlockBuilderAppBlockAssociationsResult& DescribeAppBlockBuilderAppBlockAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppBlockBuilderAppBlockAssociations"))
  {
    Aws::Utils::Array<JsonView> appBlockBuilderAppBlockAssociationsJsonList = jsonValue.GetArray("AppBlockBuilderAppBlockAssociations");
    for(unsigned appBlockBuilderAppBlockAssociationsIndex = 0; appBlockBuilderAppBlockAssociationsIndex < appBlockBuilderAppBlockAssociationsJsonList.GetLength(); ++appBlockBuilderAppBlockAssociationsIndex)
    {
      m_appBlockBuilderAppBlockAssociations.push_back(appBlockBuilderAppBlockAssociationsJsonList[appBlockBuilderAppBlockAssociationsIndex].AsObject());
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
