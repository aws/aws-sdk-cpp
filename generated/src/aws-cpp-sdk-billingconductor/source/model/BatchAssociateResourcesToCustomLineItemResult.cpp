/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/BatchAssociateResourcesToCustomLineItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchAssociateResourcesToCustomLineItemResult::BatchAssociateResourcesToCustomLineItemResult()
{
}

BatchAssociateResourcesToCustomLineItemResult::BatchAssociateResourcesToCustomLineItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchAssociateResourcesToCustomLineItemResult& BatchAssociateResourcesToCustomLineItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SuccessfullyAssociatedResources"))
  {
    Aws::Utils::Array<JsonView> successfullyAssociatedResourcesJsonList = jsonValue.GetArray("SuccessfullyAssociatedResources");
    for(unsigned successfullyAssociatedResourcesIndex = 0; successfullyAssociatedResourcesIndex < successfullyAssociatedResourcesJsonList.GetLength(); ++successfullyAssociatedResourcesIndex)
    {
      m_successfullyAssociatedResources.push_back(successfullyAssociatedResourcesJsonList[successfullyAssociatedResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FailedAssociatedResources"))
  {
    Aws::Utils::Array<JsonView> failedAssociatedResourcesJsonList = jsonValue.GetArray("FailedAssociatedResources");
    for(unsigned failedAssociatedResourcesIndex = 0; failedAssociatedResourcesIndex < failedAssociatedResourcesJsonList.GetLength(); ++failedAssociatedResourcesIndex)
    {
      m_failedAssociatedResources.push_back(failedAssociatedResourcesJsonList[failedAssociatedResourcesIndex].AsObject());
    }
  }



  return *this;
}
