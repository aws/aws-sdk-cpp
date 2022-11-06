/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/BatchDisassociateResourcesFromCustomLineItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDisassociateResourcesFromCustomLineItemResult::BatchDisassociateResourcesFromCustomLineItemResult()
{
}

BatchDisassociateResourcesFromCustomLineItemResult::BatchDisassociateResourcesFromCustomLineItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDisassociateResourcesFromCustomLineItemResult& BatchDisassociateResourcesFromCustomLineItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SuccessfullyDisassociatedResources"))
  {
    Aws::Utils::Array<JsonView> successfullyDisassociatedResourcesJsonList = jsonValue.GetArray("SuccessfullyDisassociatedResources");
    for(unsigned successfullyDisassociatedResourcesIndex = 0; successfullyDisassociatedResourcesIndex < successfullyDisassociatedResourcesJsonList.GetLength(); ++successfullyDisassociatedResourcesIndex)
    {
      m_successfullyDisassociatedResources.push_back(successfullyDisassociatedResourcesJsonList[successfullyDisassociatedResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FailedDisassociatedResources"))
  {
    Aws::Utils::Array<JsonView> failedDisassociatedResourcesJsonList = jsonValue.GetArray("FailedDisassociatedResources");
    for(unsigned failedDisassociatedResourcesIndex = 0; failedDisassociatedResourcesIndex < failedDisassociatedResourcesJsonList.GetLength(); ++failedDisassociatedResourcesIndex)
    {
      m_failedDisassociatedResources.push_back(failedDisassociatedResourcesJsonList[failedDisassociatedResourcesIndex].AsObject());
    }
  }



  return *this;
}
