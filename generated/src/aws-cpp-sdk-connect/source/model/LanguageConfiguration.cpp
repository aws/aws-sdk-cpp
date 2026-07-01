/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/LanguageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

LanguageConfiguration::LanguageConfiguration(JsonView jsonValue) { *this = jsonValue; }

LanguageConfiguration& LanguageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LanguageLocale")) {
    m_languageLocale = jsonValue.GetString("LanguageLocale");
    m_languageLocaleHasBeenSet = true;
  }
  return *this;
}

JsonValue LanguageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_languageLocaleHasBeenSet) {
    payload.WithString("LanguageLocale", m_languageLocale);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
