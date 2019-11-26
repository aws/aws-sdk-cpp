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

#include <aws/organizations/model/DescribeEffectivePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEffectivePolicyRequest::DescribeEffectivePolicyRequest() : 
    m_policyType(EffectivePolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_targetIdHasBeenSet(false)
{
}

Aws::String DescribeEffectivePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", EffectivePolicyTypeMapper::GetNameForEffectivePolicyType(m_policyType));
  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEffectivePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.DescribeEffectivePolicy"));
  return headers;

}




