﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeUserStackAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUserStackAssociationsResult::DescribeUserStackAssociationsResult()
{
}

DescribeUserStackAssociationsResult::DescribeUserStackAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUserStackAssociationsResult& DescribeUserStackAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserStackAssociations"))
  {
    Array<JsonView> userStackAssociationsJsonList = jsonValue.GetArray("UserStackAssociations");
    for(unsigned userStackAssociationsIndex = 0; userStackAssociationsIndex < userStackAssociationsJsonList.GetLength(); ++userStackAssociationsIndex)
    {
      m_userStackAssociations.push_back(userStackAssociationsJsonList[userStackAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
