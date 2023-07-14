/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/CreateReturnShippingLabelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateReturnShippingLabelRequest::CreateReturnShippingLabelRequest() : 
    m_jobIdHasBeenSet(false),
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false)
{
}

Aws::String CreateReturnShippingLabelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_shippingOptionHasBeenSet)
  {
   payload.WithString("ShippingOption", ShippingOptionMapper::GetNameForShippingOption(m_shippingOption));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateReturnShippingLabelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.CreateReturnShippingLabel"));
  return headers;

}




