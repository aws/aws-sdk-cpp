/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/SearchProductsAsAdminResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchProductsAsAdminResult::SearchProductsAsAdminResult()
{
}

SearchProductsAsAdminResult::SearchProductsAsAdminResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchProductsAsAdminResult& SearchProductsAsAdminResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("ProductViewDetails"))
  {
    Array<JsonValue> productViewDetailsJsonList = jsonValue.GetArray("ProductViewDetails");
    for(unsigned productViewDetailsIndex = 0; productViewDetailsIndex < productViewDetailsJsonList.GetLength(); ++productViewDetailsIndex)
    {
      m_productViewDetails.push_back(productViewDetailsJsonList[productViewDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
