/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedAgentSkillsAdditionalDataFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedAgentSkillsAdditionalDataFields::UpdatedAgentSkillsAdditionalDataFields(JsonView jsonValue) { *this = jsonValue; }

UpdatedAgentSkillsAdditionalDataFields& UpdatedAgentSkillsAdditionalDataFields::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("skillMd")) {
    m_skillMd = jsonValue.GetObject("skillMd");
    m_skillMdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("skillPackage")) {
    m_skillPackage = jsonValue.GetObject("skillPackage");
    m_skillPackageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repositoryProvider")) {
    m_repositoryProvider = jsonValue.GetObject("repositoryProvider");
    m_repositoryProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceConfiguration")) {
    m_sourceConfiguration = jsonValue.GetObject("sourceConfiguration");
    m_sourceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedAgentSkillsAdditionalDataFields::Jsonize() const {
  JsonValue payload;

  if (m_skillMdHasBeenSet) {
    payload.WithObject("skillMd", m_skillMd.Jsonize());
  }

  if (m_skillPackageHasBeenSet) {
    payload.WithObject("skillPackage", m_skillPackage.Jsonize());
  }

  if (m_repositoryProviderHasBeenSet) {
    payload.WithObject("repositoryProvider", m_repositoryProvider.Jsonize());
  }

  if (m_sourceConfigurationHasBeenSet) {
    payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
