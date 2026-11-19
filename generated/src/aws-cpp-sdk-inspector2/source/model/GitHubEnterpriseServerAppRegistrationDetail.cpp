/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/GitHubEnterpriseServerAppRegistrationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

GitHubEnterpriseServerAppRegistrationDetail::GitHubEnterpriseServerAppRegistrationDetail(JsonView jsonValue) { *this = jsonValue; }

GitHubEnterpriseServerAppRegistrationDetail& GitHubEnterpriseServerAppRegistrationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("manifestCode")) {
    m_manifestCode = jsonValue.GetString("manifestCode");
    m_manifestCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubEnterpriseServerAppRegistrationDetail::Jsonize() const {
  JsonValue payload;

  if (m_manifestCodeHasBeenSet) {
    payload.WithString("manifestCode", m_manifestCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
