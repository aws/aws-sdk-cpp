/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/UpdateGitHubEnterpriseServerIntegrationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

UpdateGitHubEnterpriseServerIntegrationDetail::UpdateGitHubEnterpriseServerIntegrationDetail(JsonView jsonValue) { *this = jsonValue; }

UpdateGitHubEnterpriseServerIntegrationDetail& UpdateGitHubEnterpriseServerIntegrationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appInstallation")) {
    m_appInstallation = jsonValue.GetObject("appInstallation");
    m_appInstallationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("appRegistration")) {
    m_appRegistration = jsonValue.GetObject("appRegistration");
    m_appRegistrationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateGitHubEnterpriseServerIntegrationDetail::Jsonize() const {
  JsonValue payload;

  if (m_appInstallationHasBeenSet) {
    payload.WithObject("appInstallation", m_appInstallation.Jsonize());
  }

  if (m_appRegistrationHasBeenSet) {
    payload.WithObject("appRegistration", m_appRegistration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
