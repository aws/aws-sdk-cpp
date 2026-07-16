/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-places/model/AdminNames.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {

AdminNames::AdminNames(JsonView jsonValue) { *this = jsonValue; }

AdminNames& AdminNames::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Names")) {
    Aws::Utils::Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for (unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex) {
      m_names.push_back(namesJsonList[namesIndex].AsObject());
    }
    m_namesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Preference")) {
    m_preference = AdminNamesPreferenceMapper::GetAdminNamesPreferenceForName(jsonValue.GetString("Preference"));
    m_preferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminNames::Jsonize() const {
  JsonValue payload;

  if (m_namesHasBeenSet) {
    Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
    for (unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex) {
      namesJsonList[namesIndex].AsObject(m_names[namesIndex].Jsonize());
    }
    payload.WithArray("Names", std::move(namesJsonList));
  }

  if (m_preferenceHasBeenSet) {
    payload.WithString("Preference", AdminNamesPreferenceMapper::GetNameForAdminNamesPreference(m_preference));
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
