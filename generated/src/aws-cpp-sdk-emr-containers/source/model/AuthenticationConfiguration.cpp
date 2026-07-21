/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/model/AuthenticationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRContainers {
namespace Model {

AuthenticationConfiguration::AuthenticationConfiguration(JsonView jsonValue) { *this = jsonValue; }

AuthenticationConfiguration& AuthenticationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identityCenterConfiguration")) {
    m_identityCenterConfiguration = jsonValue.GetObject("identityCenterConfiguration");
    m_identityCenterConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iamConfiguration")) {
    m_iamConfiguration = jsonValue.GetObject("iamConfiguration");
    m_iamConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_identityCenterConfigurationHasBeenSet) {
    payload.WithObject("identityCenterConfiguration", m_identityCenterConfiguration.Jsonize());
  }

  if (m_iamConfigurationHasBeenSet) {
    payload.WithObject("iamConfiguration", m_iamConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
