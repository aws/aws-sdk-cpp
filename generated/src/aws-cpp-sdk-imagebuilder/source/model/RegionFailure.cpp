/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/RegionFailure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

RegionFailure::RegionFailure(JsonView jsonValue) { *this = jsonValue; }

RegionFailure& RegionFailure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RegionFailureStatusMapper::GetRegionFailureStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageConfigurationStep")) {
    m_imageConfigurationStep =
        ImageConfigurationStepMapper::GetImageConfigurationStepForName(jsonValue.GetString("imageConfigurationStep"));
    m_imageConfigurationStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetAccountId")) {
    m_targetAccountId = jsonValue.GetString("targetAccountId");
    m_targetAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RegionFailure::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RegionFailureStatusMapper::GetNameForRegionFailureStatus(m_status));
  }

  if (m_imageConfigurationStepHasBeenSet) {
    payload.WithString("imageConfigurationStep", ImageConfigurationStepMapper::GetNameForImageConfigurationStep(m_imageConfigurationStep));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_targetAccountIdHasBeenSet) {
    payload.WithString("targetAccountId", m_targetAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
