/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalDimension.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace SignalDimensionMapper {

static const int EXPLOITABILITY_HASH = HashingUtils::HashString("EXPLOITABILITY");
static const int BLAST_RADIUS_HASH = HashingUtils::HashString("BLAST_RADIUS");
static const int NETWORK_EXPOSURE_HASH = HashingUtils::HashString("NETWORK_EXPOSURE");
static const int PRECONDITION_HASH = HashingUtils::HashString("PRECONDITION");
static const int CODE_CONTEXT_HASH = HashingUtils::HashString("CODE_CONTEXT");
static const int LIKELIHOOD_ASSESSMENT_HASH = HashingUtils::HashString("LIKELIHOOD_ASSESSMENT");
static const int IMPACT_ASSESSMENT_HASH = HashingUtils::HashString("IMPACT_ASSESSMENT");

SignalDimension GetSignalDimensionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXPLOITABILITY_HASH) {
    return SignalDimension::EXPLOITABILITY;
  } else if (hashCode == BLAST_RADIUS_HASH) {
    return SignalDimension::BLAST_RADIUS;
  } else if (hashCode == NETWORK_EXPOSURE_HASH) {
    return SignalDimension::NETWORK_EXPOSURE;
  } else if (hashCode == PRECONDITION_HASH) {
    return SignalDimension::PRECONDITION;
  } else if (hashCode == CODE_CONTEXT_HASH) {
    return SignalDimension::CODE_CONTEXT;
  } else if (hashCode == LIKELIHOOD_ASSESSMENT_HASH) {
    return SignalDimension::LIKELIHOOD_ASSESSMENT;
  } else if (hashCode == IMPACT_ASSESSMENT_HASH) {
    return SignalDimension::IMPACT_ASSESSMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalDimension>(hashCode);
  }

  return SignalDimension::NOT_SET;
}

Aws::String GetNameForSignalDimension(SignalDimension enumValue) {
  switch (enumValue) {
    case SignalDimension::NOT_SET:
      return {};
    case SignalDimension::EXPLOITABILITY:
      return "EXPLOITABILITY";
    case SignalDimension::BLAST_RADIUS:
      return "BLAST_RADIUS";
    case SignalDimension::NETWORK_EXPOSURE:
      return "NETWORK_EXPOSURE";
    case SignalDimension::PRECONDITION:
      return "PRECONDITION";
    case SignalDimension::CODE_CONTEXT:
      return "CODE_CONTEXT";
    case SignalDimension::LIKELIHOOD_ASSESSMENT:
      return "LIKELIHOOD_ASSESSMENT";
    case SignalDimension::IMPACT_ASSESSMENT:
      return "IMPACT_ASSESSMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalDimensionMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
