﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetVpcLinksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetVpcLinksResult::GetVpcLinksResult()
{
}

GetVpcLinksResult::GetVpcLinksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetVpcLinksResult& GetVpcLinksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetString("position");

  }

  if(jsonValue.ValueExists("item"))
  {
    Array<JsonView> itemJsonList = jsonValue.GetArray("item");
    for(unsigned itemIndex = 0; itemIndex < itemJsonList.GetLength(); ++itemIndex)
    {
      m_items.push_back(itemJsonList[itemIndex].AsObject());
    }
  }



  return *this;
}
