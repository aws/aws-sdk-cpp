﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/DisassociateGovernedTermsRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateGovernedTermsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_governedGlossaryTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> governedGlossaryTermsJsonList(m_governedGlossaryTerms.size());
    for (unsigned governedGlossaryTermsIndex = 0; governedGlossaryTermsIndex < governedGlossaryTermsJsonList.GetLength();
         ++governedGlossaryTermsIndex) {
      governedGlossaryTermsJsonList[governedGlossaryTermsIndex].AsString(m_governedGlossaryTerms[governedGlossaryTermsIndex]);
    }
    payload.WithArray("governedGlossaryTerms", std::move(governedGlossaryTermsJsonList));
  }

  return payload.View().WriteReadable();
}
