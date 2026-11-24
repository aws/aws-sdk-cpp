/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/ProvenanceRelation.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentDiscovery {
namespace Model {
namespace ProvenanceRelationMapper {

static const int publishedFrom_HASH = HashingUtils::HashString("publishedFrom");
static const int discoveredFrom_HASH = HashingUtils::HashString("discoveredFrom");
static const int federatedFrom_HASH = HashingUtils::HashString("federatedFrom");

ProvenanceRelation GetProvenanceRelationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == publishedFrom_HASH) {
    return ProvenanceRelation::publishedFrom;
  } else if (hashCode == discoveredFrom_HASH) {
    return ProvenanceRelation::discoveredFrom;
  } else if (hashCode == federatedFrom_HASH) {
    return ProvenanceRelation::federatedFrom;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProvenanceRelation>(hashCode);
  }

  return ProvenanceRelation::NOT_SET;
}

Aws::String GetNameForProvenanceRelation(ProvenanceRelation enumValue) {
  switch (enumValue) {
    case ProvenanceRelation::NOT_SET:
      return {};
    case ProvenanceRelation::publishedFrom:
      return "publishedFrom";
    case ProvenanceRelation::discoveredFrom:
      return "discoveredFrom";
    case ProvenanceRelation::federatedFrom:
      return "federatedFrom";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProvenanceRelationMapper
}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
