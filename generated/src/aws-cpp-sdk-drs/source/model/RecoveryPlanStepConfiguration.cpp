/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/RecoveryPlanStepConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

RecoveryPlanStepConfiguration::RecoveryPlanStepConfiguration(JsonView jsonValue) { *this = jsonValue; }

RecoveryPlanStepConfiguration& RecoveryPlanStepConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serverStepConfiguration")) {
    m_serverStepConfiguration = jsonValue.GetObject("serverStepConfiguration");
    m_serverStepConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("waitStepConfiguration")) {
    m_waitStepConfiguration = jsonValue.GetObject("waitStepConfiguration");
    m_waitStepConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPlanStepConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_serverStepConfigurationHasBeenSet) {
    payload.WithObject("serverStepConfiguration", m_serverStepConfiguration.Jsonize());
  }

  if (m_waitStepConfigurationHasBeenSet) {
    payload.WithObject("waitStepConfiguration", m_waitStepConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
