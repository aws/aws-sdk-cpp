/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CaptureLimitsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

CaptureLimitsConfig::CaptureLimitsConfig(JsonView jsonValue) { *this = jsonValue; }

CaptureLimitsConfig& CaptureLimitsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxHits")) {
    m_maxHits = jsonValue.GetInteger("MaxHits");
    m_maxHitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxStringLength")) {
    m_maxStringLength = jsonValue.GetInteger("MaxStringLength");
    m_maxStringLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxCollectionWidth")) {
    m_maxCollectionWidth = jsonValue.GetInteger("MaxCollectionWidth");
    m_maxCollectionWidthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxCollectionDepth")) {
    m_maxCollectionDepth = jsonValue.GetInteger("MaxCollectionDepth");
    m_maxCollectionDepthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxStackFrames")) {
    m_maxStackFrames = jsonValue.GetInteger("MaxStackFrames");
    m_maxStackFramesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxStackTraceSize")) {
    m_maxStackTraceSize = jsonValue.GetInteger("MaxStackTraceSize");
    m_maxStackTraceSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxObjectDepth")) {
    m_maxObjectDepth = jsonValue.GetInteger("MaxObjectDepth");
    m_maxObjectDepthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxFieldsPerObject")) {
    m_maxFieldsPerObject = jsonValue.GetInteger("MaxFieldsPerObject");
    m_maxFieldsPerObjectHasBeenSet = true;
  }
  return *this;
}

JsonValue CaptureLimitsConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxHitsHasBeenSet) {
    payload.WithInteger("MaxHits", m_maxHits);
  }

  if (m_maxStringLengthHasBeenSet) {
    payload.WithInteger("MaxStringLength", m_maxStringLength);
  }

  if (m_maxCollectionWidthHasBeenSet) {
    payload.WithInteger("MaxCollectionWidth", m_maxCollectionWidth);
  }

  if (m_maxCollectionDepthHasBeenSet) {
    payload.WithInteger("MaxCollectionDepth", m_maxCollectionDepth);
  }

  if (m_maxStackFramesHasBeenSet) {
    payload.WithInteger("MaxStackFrames", m_maxStackFrames);
  }

  if (m_maxStackTraceSizeHasBeenSet) {
    payload.WithInteger("MaxStackTraceSize", m_maxStackTraceSize);
  }

  if (m_maxObjectDepthHasBeenSet) {
    payload.WithInteger("MaxObjectDepth", m_maxObjectDepth);
  }

  if (m_maxFieldsPerObjectHasBeenSet) {
    payload.WithInteger("MaxFieldsPerObject", m_maxFieldsPerObject);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
