/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/EnablePolicyTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnablePolicyTypeRequest::EnablePolicyTypeRequest() : 
    m_rootIdHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
}

Aws::String EnablePolicyTypeRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection EnablePolicyTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.EnablePolicyType"));
  return headers;

}




