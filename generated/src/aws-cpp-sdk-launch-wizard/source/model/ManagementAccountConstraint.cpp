/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/model/ManagementAccountConstraint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LaunchWizard {
namespace Model {

ManagementAccountConstraint::ManagementAccountConstraint(JsonView jsonValue) { *this = jsonValue; }

ManagementAccountConstraint& ManagementAccountConstraint::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ManagementAccountConstraint::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
