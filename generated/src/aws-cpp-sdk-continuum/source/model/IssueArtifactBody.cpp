/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssueArtifactBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

IssueArtifactBody::IssueArtifactBody(JsonView jsonValue) { *this = jsonValue; }

IssueArtifactBody& IssueArtifactBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("validationEvidence")) {
    m_validationEvidence = jsonValue.GetObject("validationEvidence");
    m_validationEvidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("prevalidationSignals")) {
    m_prevalidationSignals = jsonValue.GetObject("prevalidationSignals");
    m_prevalidationSignalsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediationProposal")) {
    m_remediationProposal = jsonValue.GetObject("remediationProposal");
    m_remediationProposalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("patch")) {
    m_patch = jsonValue.GetObject("patch");
    m_patchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("raw")) {
    m_raw = jsonValue.GetString("raw");
    m_rawHasBeenSet = true;
  }
  return *this;
}

JsonValue IssueArtifactBody::Jsonize() const {
  JsonValue payload;

  if (m_validationEvidenceHasBeenSet) {
    payload.WithObject("validationEvidence", m_validationEvidence.Jsonize());
  }

  if (m_prevalidationSignalsHasBeenSet) {
    payload.WithObject("prevalidationSignals", m_prevalidationSignals.Jsonize());
  }

  if (m_remediationProposalHasBeenSet) {
    payload.WithObject("remediationProposal", m_remediationProposal.Jsonize());
  }

  if (m_patchHasBeenSet) {
    payload.WithObject("patch", m_patch.Jsonize());
  }

  if (m_rawHasBeenSet) {
    payload.WithString("raw", m_raw);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
