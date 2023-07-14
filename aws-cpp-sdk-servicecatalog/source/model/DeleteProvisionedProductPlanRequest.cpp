/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DeleteProvisionedProductPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProvisionedProductPlanRequest::DeleteProvisionedProductPlanRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_ignoreErrors(false),
    m_ignoreErrorsHasBeenSet(false)
{
}

Aws::String DeleteProvisionedProductPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_planIdHasBeenSet)
  {
   payload.WithString("PlanId", m_planId);

  }

  if(m_ignoreErrorsHasBeenSet)
  {
   payload.WithBool("IgnoreErrors", m_ignoreErrors);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProvisionedProductPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.DeleteProvisionedProductPlan"));
  return headers;

}




