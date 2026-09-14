/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/ComponentFailureContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

ComponentFailureContext::ComponentFailureContext(JsonView jsonValue) { *this = jsonValue; }

ComponentFailureContext& ComponentFailureContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("componentArn")) {
    m_componentArn = jsonValue.GetString("componentArn");
    m_componentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("phaseName")) {
    m_phaseName = jsonValue.GetString("phaseName");
    m_phaseNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepName")) {
    m_stepName = jsonValue.GetString("stepName");
    m_stepNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ComponentFailureContext::Jsonize() const {
  JsonValue payload;

  if (m_componentArnHasBeenSet) {
    payload.WithString("componentArn", m_componentArn);
  }

  if (m_phaseNameHasBeenSet) {
    payload.WithString("phaseName", m_phaseName);
  }

  if (m_stepNameHasBeenSet) {
    payload.WithString("stepName", m_stepName);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", m_action);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
