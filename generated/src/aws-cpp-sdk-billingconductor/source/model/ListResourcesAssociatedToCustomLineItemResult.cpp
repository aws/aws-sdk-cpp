/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourcesAssociatedToCustomLineItemResult::ListResourcesAssociatedToCustomLineItemResult()
{
}

ListResourcesAssociatedToCustomLineItemResult::ListResourcesAssociatedToCustomLineItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourcesAssociatedToCustomLineItemResult& ListResourcesAssociatedToCustomLineItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("AssociatedResources"))
  {
    Aws::Utils::Array<JsonView> associatedResourcesJsonList = jsonValue.GetArray("AssociatedResources");
    for(unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength(); ++associatedResourcesIndex)
    {
      m_associatedResources.push_back(associatedResourcesJsonList[associatedResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
