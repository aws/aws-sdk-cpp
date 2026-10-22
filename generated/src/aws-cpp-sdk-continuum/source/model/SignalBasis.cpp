/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalBasis.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace SignalBasisMapper {

static const int CODE_HASH = HashingUtils::HashString("CODE");
static const int GRAPH_HASH = HashingUtils::HashString("GRAPH");
static const int FINDING_HASH = HashingUtils::HashString("FINDING");
static const int INFERRED_HASH = HashingUtils::HashString("INFERRED");
static const int NO_EVIDENCE_DEFAULT_HASH = HashingUtils::HashString("NO_EVIDENCE_DEFAULT");

SignalBasis GetSignalBasisForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CODE_HASH) {
    return SignalBasis::CODE;
  } else if (hashCode == GRAPH_HASH) {
    return SignalBasis::GRAPH;
  } else if (hashCode == FINDING_HASH) {
    return SignalBasis::FINDING;
  } else if (hashCode == INFERRED_HASH) {
    return SignalBasis::INFERRED;
  } else if (hashCode == NO_EVIDENCE_DEFAULT_HASH) {
    return SignalBasis::NO_EVIDENCE_DEFAULT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalBasis>(hashCode);
  }

  return SignalBasis::NOT_SET;
}

Aws::String GetNameForSignalBasis(SignalBasis enumValue) {
  switch (enumValue) {
    case SignalBasis::NOT_SET:
      return {};
    case SignalBasis::CODE:
      return "CODE";
    case SignalBasis::GRAPH:
      return "GRAPH";
    case SignalBasis::FINDING:
      return "FINDING";
    case SignalBasis::INFERRED:
      return "INFERRED";
    case SignalBasis::NO_EVIDENCE_DEFAULT:
      return "NO_EVIDENCE_DEFAULT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalBasisMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
