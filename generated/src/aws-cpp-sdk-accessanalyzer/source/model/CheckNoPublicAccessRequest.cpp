/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CheckNoPublicAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CheckNoPublicAccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", AccessCheckResourceTypeMapper::GetNameForAccessCheckResourceType(m_resourceType));
  }

  return payload.View().WriteReadable();
}




