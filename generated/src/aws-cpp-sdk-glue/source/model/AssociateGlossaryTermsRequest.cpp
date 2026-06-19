/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/AssociateGlossaryTermsRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateGlossaryTermsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_glossaryTermIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> glossaryTermIdentifiersJsonList(m_glossaryTermIdentifiers.size());
    for (unsigned glossaryTermIdentifiersIndex = 0; glossaryTermIdentifiersIndex < glossaryTermIdentifiersJsonList.GetLength();
         ++glossaryTermIdentifiersIndex) {
      glossaryTermIdentifiersJsonList[glossaryTermIdentifiersIndex].AsString(m_glossaryTermIdentifiers[glossaryTermIdentifiersIndex]);
    }
    payload.WithArray("GlossaryTermIdentifiers", std::move(glossaryTermIdentifiersJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateGlossaryTermsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.AssociateGlossaryTerms"));
  return headers;
}
