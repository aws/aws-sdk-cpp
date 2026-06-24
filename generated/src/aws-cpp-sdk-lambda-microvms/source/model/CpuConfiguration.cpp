/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/CpuConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

CpuConfiguration::CpuConfiguration(JsonView jsonValue) { *this = jsonValue; }

CpuConfiguration& CpuConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("architecture")) {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));
    m_architectureHasBeenSet = true;
  }
  return *this;
}

JsonValue CpuConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_architectureHasBeenSet) {
    payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
