/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/CreateDataGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_grantDistributionScopeHasBeenSet)
  {
   payload.WithString("GrantDistributionScope", GrantDistributionScopeMapper::GetNameForGrantDistributionScope(m_grantDistributionScope));
  }

  if(m_receiverPrincipalHasBeenSet)
  {
   payload.WithString("ReceiverPrincipal", m_receiverPrincipal);

  }

  if(m_sourceDataSetIdHasBeenSet)
  {
   payload.WithString("SourceDataSetId", m_sourceDataSetId);

  }

  if(m_endsAtHasBeenSet)
  {
   payload.WithString("EndsAt", m_endsAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




