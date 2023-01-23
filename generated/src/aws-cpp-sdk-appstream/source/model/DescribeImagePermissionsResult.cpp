/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeImagePermissionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeImagePermissionsResult::DescribeImagePermissionsResult()
{
}

DescribeImagePermissionsResult::DescribeImagePermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeImagePermissionsResult& DescribeImagePermissionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("SharedImagePermissionsList"))
  {
    Aws::Utils::Array<JsonView> sharedImagePermissionsListJsonList = jsonValue.GetArray("SharedImagePermissionsList");
    for(unsigned sharedImagePermissionsListIndex = 0; sharedImagePermissionsListIndex < sharedImagePermissionsListJsonList.GetLength(); ++sharedImagePermissionsListIndex)
    {
      m_sharedImagePermissionsList.push_back(sharedImagePermissionsListJsonList[sharedImagePermissionsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
