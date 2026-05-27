/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/UpdateDictionaryRequest.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDictionaryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_languageHasBeenSet) {
    payload.WithString("language", DictionaryLanguageMapper::GetNameForDictionaryLanguage(m_language));
  }

  if (m_entriesHasBeenSet) {
    payload.WithString("entries", m_entries);
  }

  return payload.View().WriteReadable();
}
