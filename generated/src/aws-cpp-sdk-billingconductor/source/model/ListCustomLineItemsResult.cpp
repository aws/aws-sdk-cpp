/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListCustomLineItemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomLineItemsResult::ListCustomLineItemsResult()
{
}

ListCustomLineItemsResult::ListCustomLineItemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomLineItemsResult& ListCustomLineItemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomLineItems"))
  {
    Aws::Utils::Array<JsonView> customLineItemsJsonList = jsonValue.GetArray("CustomLineItems");
    for(unsigned customLineItemsIndex = 0; customLineItemsIndex < customLineItemsJsonList.GetLength(); ++customLineItemsIndex)
    {
      m_customLineItems.push_back(customLineItemsJsonList[customLineItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
