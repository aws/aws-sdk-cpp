/*
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProvisionedProductPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.DeleteProvisionedProductPlan"));
  return headers;

}




