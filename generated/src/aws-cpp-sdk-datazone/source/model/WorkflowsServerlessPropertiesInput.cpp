/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/WorkflowsServerlessPropertiesInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

WorkflowsServerlessPropertiesInput::WorkflowsServerlessPropertiesInput(JsonView jsonValue) { *this = jsonValue; }

WorkflowsServerlessPropertiesInput& WorkflowsServerlessPropertiesInput::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue WorkflowsServerlessPropertiesInput::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
