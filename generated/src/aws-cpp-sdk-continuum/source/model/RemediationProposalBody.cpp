/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/RemediationProposalBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

RemediationProposalBody::RemediationProposalBody(JsonView jsonValue) { *this = jsonValue; }

RemediationProposalBody& RemediationProposalBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("patch")) {
    m_patch = jsonValue.GetString("patch");
    m_patchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("format")) {
    m_format = PatchFormatMapper::GetPatchFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filename")) {
    m_filename = jsonValue.GetString("filename");
    m_filenameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("patchSha256")) {
    m_patchSha256 = jsonValue.GetString("patchSha256");
    m_patchSha256HasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationProposalBody::Jsonize() const {
  JsonValue payload;

  if (m_patchHasBeenSet) {
    payload.WithString("patch", m_patch);
  }

  if (m_formatHasBeenSet) {
    payload.WithString("format", PatchFormatMapper::GetNameForPatchFormat(m_format));
  }

  if (m_filenameHasBeenSet) {
    payload.WithString("filename", m_filename);
  }

  if (m_patchSha256HasBeenSet) {
    payload.WithString("patchSha256", m_patchSha256);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
