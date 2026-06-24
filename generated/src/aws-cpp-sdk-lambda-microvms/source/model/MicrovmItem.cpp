/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/MicrovmItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

MicrovmItem::MicrovmItem(JsonView jsonValue) { *this = jsonValue; }

MicrovmItem& MicrovmItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("microvmId")) {
    m_microvmId = jsonValue.GetString("microvmId");
    m_microvmIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = MicrovmStateMapper::GetMicrovmStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageArn")) {
    m_imageArn = jsonValue.GetString("imageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageVersion")) {
    m_imageVersion = jsonValue.GetString("imageVersion");
    m_imageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrovmItem::Jsonize() const {
  JsonValue payload;

  if (m_microvmIdHasBeenSet) {
    payload.WithString("microvmId", m_microvmId);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", MicrovmStateMapper::GetNameForMicrovmState(m_state));
  }

  if (m_imageArnHasBeenSet) {
    payload.WithString("imageArn", m_imageArn);
  }

  if (m_imageVersionHasBeenSet) {
    payload.WithString("imageVersion", m_imageVersion);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
