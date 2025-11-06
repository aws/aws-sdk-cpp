/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ResourceTypeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {

ResourceTypeDetails::ResourceTypeDetails(JsonView jsonValue) { *this = jsonValue; }

ResourceTypeDetails& ResourceTypeDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalActivePublic")) {
    m_totalActivePublic = jsonValue.GetInteger("totalActivePublic");
    m_totalActivePublicHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalActiveCrossAccount")) {
    m_totalActiveCrossAccount = jsonValue.GetInteger("totalActiveCrossAccount");
    m_totalActiveCrossAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalActiveErrors")) {
    m_totalActiveErrors = jsonValue.GetInteger("totalActiveErrors");
    m_totalActiveErrorsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceTypeDetails::Jsonize() const {
  JsonValue payload;

  if (m_totalActivePublicHasBeenSet) {
    payload.WithInteger("totalActivePublic", m_totalActivePublic);
  }

  if (m_totalActiveCrossAccountHasBeenSet) {
    payload.WithInteger("totalActiveCrossAccount", m_totalActiveCrossAccount);
  }

  if (m_totalActiveErrorsHasBeenSet) {
    payload.WithInteger("totalActiveErrors", m_totalActiveErrors);
  }

  return payload;
}

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
