/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateGlossaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGlossaryRequest::UpdateGlossaryRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(GlossaryStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateGlossaryRequest::SerializePayload() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GlossaryStatusMapper::GetNameForGlossaryStatus(m_status));
  }

  return payload.View().WriteReadable();
}




