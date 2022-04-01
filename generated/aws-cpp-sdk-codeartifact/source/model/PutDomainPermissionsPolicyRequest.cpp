/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PutDomainPermissionsPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDomainPermissionsPolicyRequest::PutDomainPermissionsPolicyRequest() : 
    m_domainHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_policyRevisionHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
}

Aws::String PutDomainPermissionsPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_domainOwnerHasBeenSet)
  {
   payload.WithString("domainOwner", m_domainOwner);

  }

  if(m_policyRevisionHasBeenSet)
  {
   payload.WithString("policyRevision", m_policyRevision);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  return payload.View().WriteReadable();
}




