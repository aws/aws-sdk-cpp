/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/CreateProjectRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProjectRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_resourceTagsHasBeenSet) {
    JsonValue resourceTagsJsonMap;
    for (auto& resourceTagsItem : m_resourceTags) {
      resourceTagsJsonMap.WithString(resourceTagsItem.first, resourceTagsItem.second);
    }
    payload.WithObject("resourceTags", std::move(resourceTagsJsonMap));
  }

  if (m_glossaryTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      glossaryTermsJsonList[glossaryTermsIndex].AsString(m_glossaryTerms[glossaryTermsIndex]);
    }
    payload.WithArray("glossaryTerms", std::move(glossaryTermsJsonList));
  }

  if (m_domainUnitIdHasBeenSet) {
    payload.WithString("domainUnitId", m_domainUnitId);
  }

  if (m_projectProfileIdHasBeenSet) {
    payload.WithString("projectProfileId", m_projectProfileId);
  }

  if (m_userParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> userParametersJsonList(m_userParameters.size());
    for (unsigned userParametersIndex = 0; userParametersIndex < userParametersJsonList.GetLength(); ++userParametersIndex) {
      userParametersJsonList[userParametersIndex].AsObject(m_userParameters[userParametersIndex].Jsonize());
    }
    payload.WithArray("userParameters", std::move(userParametersJsonList));
  }

  return payload.View().WriteReadable();
}
