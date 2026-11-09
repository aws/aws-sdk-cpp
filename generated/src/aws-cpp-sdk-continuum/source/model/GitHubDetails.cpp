/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GitHubDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

GitHubDetails::GitHubDetails(JsonView jsonValue) { *this = jsonValue; }

GitHubDetails& GitHubDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("organizationName")) {
    m_organizationName = jsonValue.GetString("organizationName");
    m_organizationNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubDetails::Jsonize() const {
  JsonValue payload;

  if (m_organizationNameHasBeenSet) {
    payload.WithString("organizationName", m_organizationName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
