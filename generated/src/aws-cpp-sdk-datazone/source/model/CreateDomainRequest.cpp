/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDomainRequest::CreateDomainRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_domainExecutionRoleHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_singleSignOnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainExecutionRoleHasBeenSet)
  {
   payload.WithString("domainExecutionRole", m_domainExecutionRole);

  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("kmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_singleSignOnHasBeenSet)
  {
   payload.WithObject("singleSignOn", m_singleSignOn.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




