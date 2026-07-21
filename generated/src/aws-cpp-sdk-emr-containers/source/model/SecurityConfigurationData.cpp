/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/model/SecurityConfigurationData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRContainers {
namespace Model {

SecurityConfigurationData::SecurityConfigurationData(JsonView jsonValue) { *this = jsonValue; }

SecurityConfigurationData& SecurityConfigurationData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizationConfiguration")) {
    m_authorizationConfiguration = jsonValue.GetObject("authorizationConfiguration");
    m_authorizationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authenticationConfiguration")) {
    m_authenticationConfiguration = jsonValue.GetObject("authenticationConfiguration");
    m_authenticationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityConfigurationData::Jsonize() const {
  JsonValue payload;

  if (m_authorizationConfigurationHasBeenSet) {
    payload.WithObject("authorizationConfiguration", m_authorizationConfiguration.Jsonize());
  }

  if (m_authenticationConfigurationHasBeenSet) {
    payload.WithObject("authenticationConfiguration", m_authenticationConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
