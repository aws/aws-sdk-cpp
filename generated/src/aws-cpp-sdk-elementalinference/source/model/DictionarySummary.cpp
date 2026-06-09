/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/DictionarySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

DictionarySummary::DictionarySummary(JsonView jsonValue) { *this = jsonValue; }

DictionarySummary& DictionarySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("language")) {
    m_language = DictionaryLanguageMapper::GetDictionaryLanguageForName(jsonValue.GetString("language"));
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DictionaryStatusMapper::GetDictionaryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue DictionarySummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_languageHasBeenSet) {
    payload.WithString("language", DictionaryLanguageMapper::GetNameForDictionaryLanguage(m_language));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DictionaryStatusMapper::GetNameForDictionaryStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
