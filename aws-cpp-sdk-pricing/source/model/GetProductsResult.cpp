﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pricing/model/GetProductsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Pricing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProductsResult::GetProductsResult()
{
}

GetProductsResult::GetProductsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetProductsResult& GetProductsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FormatVersion"))
  {
    m_formatVersion = jsonValue.GetString("FormatVersion");

  }

  if(jsonValue.ValueExists("PriceList"))
  {
    Array<JsonView> priceListJsonList = jsonValue.GetArray("PriceList");
    for(unsigned priceListIndex = 0; priceListIndex < priceListJsonList.GetLength(); ++priceListIndex)
    {
      m_priceList.push_back(priceListJsonList[priceListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
