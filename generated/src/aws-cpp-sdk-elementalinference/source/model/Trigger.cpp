/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/Trigger.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

Trigger::Trigger(JsonView jsonValue) { *this = jsonValue; }

Trigger& Trigger::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fixedInterval")) {
    m_fixedInterval = jsonValue.GetObject("fixedInterval");
    m_fixedIntervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("perShot")) {
    m_perShot = jsonValue.GetObject("perShot");
    m_perShotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("perScene")) {
    m_perScene = jsonValue.GetObject("perScene");
    m_perSceneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("perClip")) {
    m_perClip = jsonValue.GetObject("perClip");
    m_perClipHasBeenSet = true;
  }
  return *this;
}

JsonValue Trigger::Jsonize() const {
  JsonValue payload;

  if (m_fixedIntervalHasBeenSet) {
    payload.WithObject("fixedInterval", m_fixedInterval.Jsonize());
  }

  if (m_perShotHasBeenSet) {
    payload.WithObject("perShot", m_perShot.Jsonize());
  }

  if (m_perSceneHasBeenSet) {
    payload.WithObject("perScene", m_perScene.Jsonize());
  }

  if (m_perClipHasBeenSet) {
    payload.WithObject("perClip", m_perClip.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
