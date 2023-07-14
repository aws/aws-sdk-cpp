﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeClientPropertiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeClientPropertiesResult::DescribeClientPropertiesResult()
{
}

DescribeClientPropertiesResult::DescribeClientPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeClientPropertiesResult& DescribeClientPropertiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClientPropertiesList"))
  {
    Array<JsonView> clientPropertiesListJsonList = jsonValue.GetArray("ClientPropertiesList");
    for(unsigned clientPropertiesListIndex = 0; clientPropertiesListIndex < clientPropertiesListJsonList.GetLength(); ++clientPropertiesListIndex)
    {
      m_clientPropertiesList.push_back(clientPropertiesListJsonList[clientPropertiesListIndex].AsObject());
    }
  }



  return *this;
}
