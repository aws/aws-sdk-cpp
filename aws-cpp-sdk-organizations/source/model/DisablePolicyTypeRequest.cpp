﻿/*
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

#include <aws/organizations/model/DisablePolicyTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisablePolicyTypeRequest::DisablePolicyTypeRequest() : 
    m_rootIdHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
}

Aws::String DisablePolicyTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rootIdHasBeenSet)
  {
   payload.WithString("RootId", m_rootId);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisablePolicyTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.DisablePolicyType"));
  return headers;

}




