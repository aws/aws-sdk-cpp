/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/ProvenanceRelation.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace ProvenanceRelationMapper {

static const int DETECTED_FROM_HASH = HashingUtils::HashString("DETECTED_FROM");

ProvenanceRelation GetProvenanceRelationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DETECTED_FROM_HASH) {
    return ProvenanceRelation::DETECTED_FROM;
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
    case ProvenanceRelation::DETECTED_FROM:
      return "DETECTED_FROM";
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
}  // namespace AgentRegistryControl
}  // namespace Aws
