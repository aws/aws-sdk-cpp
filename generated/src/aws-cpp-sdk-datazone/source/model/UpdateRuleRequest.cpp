/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRuleRequest::UpdateRuleRequest() : 
    m_descriptionHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_includeChildDomainUnits(false),
    m_includeChildDomainUnitsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

Aws::String UpdateRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_detailHasBeenSet)
  {
   payload.WithObject("detail", m_detail.Jsonize());

  }

  if(m_includeChildDomainUnitsHasBeenSet)
  {
   payload.WithBool("includeChildDomainUnits", m_includeChildDomainUnits);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("scope", m_scope.Jsonize());

  }

  return payload.View().WriteReadable();
}




