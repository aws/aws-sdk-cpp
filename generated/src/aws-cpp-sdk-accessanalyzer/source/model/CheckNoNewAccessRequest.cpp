/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CheckNoNewAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CheckNoNewAccessRequest::CheckNoNewAccessRequest() : 
    m_newPolicyDocumentHasBeenSet(false),
    m_existingPolicyDocumentHasBeenSet(false),
    m_policyType(AccessCheckPolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
}

Aws::String CheckNoNewAccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_newPolicyDocumentHasBeenSet)
  {
   payload.WithString("newPolicyDocument", m_newPolicyDocument);

  }

  if(m_existingPolicyDocumentHasBeenSet)
  {
   payload.WithString("existingPolicyDocument", m_existingPolicyDocument);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("policyType", AccessCheckPolicyTypeMapper::GetNameForAccessCheckPolicyType(m_policyType));
  }

  return payload.View().WriteReadable();
}




