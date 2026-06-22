/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/MicrovmImageBuildSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

MicrovmImageBuildSummary::MicrovmImageBuildSummary(JsonView jsonValue) { *this = jsonValue; }

MicrovmImageBuildSummary& MicrovmImageBuildSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageArn")) {
    m_imageArn = jsonValue.GetString("imageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageVersion")) {
    m_imageVersion = jsonValue.GetString("imageVersion");
    m_imageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buildId")) {
    m_buildId = jsonValue.GetString("buildId");
    m_buildIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buildState")) {
    m_buildState = BuildStateMapper::GetBuildStateForName(jsonValue.GetString("buildState"));
    m_buildStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("architecture")) {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));
    m_architectureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chipset")) {
    m_chipset = ChipsetMapper::GetChipsetForName(jsonValue.GetString("chipset"));
    m_chipsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chipsetGeneration")) {
    m_chipsetGeneration = jsonValue.GetString("chipsetGeneration");
    m_chipsetGenerationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrovmImageBuildSummary::Jsonize() const {
  JsonValue payload;

  if (m_imageArnHasBeenSet) {
    payload.WithString("imageArn", m_imageArn);
  }

  if (m_imageVersionHasBeenSet) {
    payload.WithString("imageVersion", m_imageVersion);
  }

  if (m_buildIdHasBeenSet) {
    payload.WithString("buildId", m_buildId);
  }

  if (m_buildStateHasBeenSet) {
    payload.WithString("buildState", BuildStateMapper::GetNameForBuildState(m_buildState));
  }

  if (m_architectureHasBeenSet) {
    payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  if (m_chipsetHasBeenSet) {
    payload.WithString("chipset", ChipsetMapper::GetNameForChipset(m_chipset));
  }

  if (m_chipsetGenerationHasBeenSet) {
    payload.WithString("chipsetGeneration", m_chipsetGeneration);
  }

  if (m_stateReasonHasBeenSet) {
    payload.WithString("stateReason", m_stateReason);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
