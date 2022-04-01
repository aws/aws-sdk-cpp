/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/DescribeHsmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeHsmRequest::DescribeHsmRequest() : 
    m_hsmArnHasBeenSet(false),
    m_hsmSerialNumberHasBeenSet(false)
{
}

Aws::String DescribeHsmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hsmArnHasBeenSet)
  {
   payload.WithString("HsmArn", m_hsmArn);

  }

  if(m_hsmSerialNumberHasBeenSet)
  {
   payload.WithString("HsmSerialNumber", m_hsmSerialNumber);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeHsmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.DescribeHsm"));
  return headers;

}




