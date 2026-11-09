/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/PatchBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

PatchBody::PatchBody(JsonView jsonValue) { *this = jsonValue; }

PatchBody& PatchBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("patch")) {
    m_patch = jsonValue.GetString("patch");
    m_patchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("format")) {
    m_format = PatchFormatMapper::GetPatchFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repositoryName")) {
    m_repositoryName = jsonValue.GetString("repositoryName");
    m_repositoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("patchSha256")) {
    m_patchSha256 = jsonValue.GetString("patchSha256");
    m_patchSha256HasBeenSet = true;
  }
  if (jsonValue.ValueExists("sizeBytes")) {
    m_sizeBytes = jsonValue.GetInt64("sizeBytes");
    m_sizeBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("delivery")) {
    m_delivery = jsonValue.GetObject("delivery");
    m_deliveryHasBeenSet = true;
  }
  return *this;
}

JsonValue PatchBody::Jsonize() const {
  JsonValue payload;

  if (m_patchHasBeenSet) {
    payload.WithString("patch", m_patch);
  }

  if (m_formatHasBeenSet) {
    payload.WithString("format", PatchFormatMapper::GetNameForPatchFormat(m_format));
  }

  if (m_repositoryNameHasBeenSet) {
    payload.WithString("repositoryName", m_repositoryName);
  }

  if (m_patchSha256HasBeenSet) {
    payload.WithString("patchSha256", m_patchSha256);
  }

  if (m_sizeBytesHasBeenSet) {
    payload.WithInt64("sizeBytes", m_sizeBytes);
  }

  if (m_deliveryHasBeenSet) {
    payload.WithObject("delivery", m_delivery.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
