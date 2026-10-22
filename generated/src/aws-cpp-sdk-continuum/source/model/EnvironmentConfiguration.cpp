/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/EnvironmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

EnvironmentConfiguration::EnvironmentConfiguration(JsonView jsonValue) { *this = jsonValue; }

EnvironmentConfiguration& EnvironmentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("network")) {
    m_network = jsonValue.GetObject("network");
    m_networkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanFrequency")) {
    m_scanFrequency = jsonValue.GetString("scanFrequency");
    m_scanFrequencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("patchCreationPolicy")) {
    m_patchCreationPolicy = PatchCreationPolicyMapper::GetPatchCreationPolicyForName(jsonValue.GetString("patchCreationPolicy"));
    m_patchCreationPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_networkHasBeenSet) {
    payload.WithObject("network", m_network.Jsonize());
  }

  if (m_scanFrequencyHasBeenSet) {
    payload.WithString("scanFrequency", m_scanFrequency);
  }

  if (m_patchCreationPolicyHasBeenSet) {
    payload.WithString("patchCreationPolicy", PatchCreationPolicyMapper::GetNameForPatchCreationPolicy(m_patchCreationPolicy));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
