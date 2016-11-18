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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeHsmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.DescribeHsm"));
  return headers;

}



