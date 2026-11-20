/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/TrustManifest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentDiscovery {
namespace Model {

TrustManifest::TrustManifest(JsonView jsonValue) { *this = jsonValue; }

TrustManifest& TrustManifest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contributor")) {
    m_contributor = jsonValue.GetString("contributor");
    m_contributorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provenance")) {
    Aws::Utils::Array<JsonView> provenanceJsonList = jsonValue.GetArray("provenance");
    for (unsigned provenanceIndex = 0; provenanceIndex < provenanceJsonList.GetLength(); ++provenanceIndex) {
      m_provenance.push_back(provenanceJsonList[provenanceIndex].AsObject());
    }
    m_provenanceHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustManifest::Jsonize() const {
  JsonValue payload;

  if (m_contributorHasBeenSet) {
    payload.WithString("contributor", m_contributor);
  }

  if (m_provenanceHasBeenSet) {
    Aws::Utils::Array<JsonValue> provenanceJsonList(m_provenance.size());
    for (unsigned provenanceIndex = 0; provenanceIndex < provenanceJsonList.GetLength(); ++provenanceIndex) {
      provenanceJsonList[provenanceIndex].AsObject(m_provenance[provenanceIndex].Jsonize());
    }
    payload.WithArray("provenance", std::move(provenanceJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
