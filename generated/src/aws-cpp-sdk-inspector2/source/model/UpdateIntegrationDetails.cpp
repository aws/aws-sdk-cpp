/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/UpdateIntegrationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

UpdateIntegrationDetails::UpdateIntegrationDetails(JsonView jsonValue) { *this = jsonValue; }

UpdateIntegrationDetails& UpdateIntegrationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gitlabSelfManaged")) {
    m_gitlabSelfManaged = jsonValue.GetObject("gitlabSelfManaged");
    m_gitlabSelfManagedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("github")) {
    m_github = jsonValue.GetObject("github");
    m_githubHasBeenSet = true;
  }
  if (jsonValue.ValueExists("githubEnterpriseServer")) {
    m_githubEnterpriseServer = jsonValue.GetObject("githubEnterpriseServer");
    m_githubEnterpriseServerHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateIntegrationDetails::Jsonize() const {
  JsonValue payload;

  if (m_gitlabSelfManagedHasBeenSet) {
    payload.WithObject("gitlabSelfManaged", m_gitlabSelfManaged.Jsonize());
  }

  if (m_githubHasBeenSet) {
    payload.WithObject("github", m_github.Jsonize());
  }

  if (m_githubEnterpriseServerHasBeenSet) {
    payload.WithObject("githubEnterpriseServer", m_githubEnterpriseServer.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
