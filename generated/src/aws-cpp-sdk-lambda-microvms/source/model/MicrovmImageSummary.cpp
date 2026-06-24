/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/MicrovmImageSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

MicrovmImageSummary::MicrovmImageSummary(JsonView jsonValue) { *this = jsonValue; }

MicrovmImageSummary& MicrovmImageSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageArn")) {
    m_imageArn = jsonValue.GetString("imageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = MicrovmImageStateMapper::GetMicrovmImageStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestActiveImageVersion")) {
    m_latestActiveImageVersion = jsonValue.GetString("latestActiveImageVersion");
    m_latestActiveImageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestFailedImageVersion")) {
    m_latestFailedImageVersion = jsonValue.GetString("latestFailedImageVersion");
    m_latestFailedImageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrovmImageSummary::Jsonize() const {
  JsonValue payload;

  if (m_imageArnHasBeenSet) {
    payload.WithString("imageArn", m_imageArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", MicrovmImageStateMapper::GetNameForMicrovmImageState(m_state));
  }

  if (m_latestActiveImageVersionHasBeenSet) {
    payload.WithString("latestActiveImageVersion", m_latestActiveImageVersion);
  }

  if (m_latestFailedImageVersionHasBeenSet) {
    payload.WithString("latestFailedImageVersion", m_latestFailedImageVersion);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
