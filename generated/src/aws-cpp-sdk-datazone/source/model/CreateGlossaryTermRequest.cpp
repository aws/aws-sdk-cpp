/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateGlossaryTermRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGlossaryTermRequest::CreateGlossaryTermRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_glossaryIdentifierHasBeenSet(false),
    m_longDescriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_status(GlossaryTermStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_termRelationsHasBeenSet(false)
{
}

Aws::String CreateGlossaryTermRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_glossaryIdentifierHasBeenSet)
  {
   payload.WithString("glossaryIdentifier", m_glossaryIdentifier);

  }

  if(m_longDescriptionHasBeenSet)
  {
   payload.WithString("longDescription", m_longDescription);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_shortDescriptionHasBeenSet)
  {
   payload.WithString("shortDescription", m_shortDescription);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GlossaryTermStatusMapper::GetNameForGlossaryTermStatus(m_status));
  }

  if(m_termRelationsHasBeenSet)
  {
   payload.WithObject("termRelations", m_termRelations.Jsonize());

  }

  return payload.View().WriteReadable();
}




