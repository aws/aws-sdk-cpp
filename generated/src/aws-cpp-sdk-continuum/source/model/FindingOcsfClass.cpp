/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingOcsfClass.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FindingOcsfClassMapper {

static const int VULNERABILITY_FINDING_HASH = HashingUtils::HashString("VULNERABILITY_FINDING");
static const int APPLICATION_SECURITY_POSTURE_FINDING_HASH = HashingUtils::HashString("APPLICATION_SECURITY_POSTURE_FINDING");

FindingOcsfClass GetFindingOcsfClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VULNERABILITY_FINDING_HASH) {
    return FindingOcsfClass::VULNERABILITY_FINDING;
  } else if (hashCode == APPLICATION_SECURITY_POSTURE_FINDING_HASH) {
    return FindingOcsfClass::APPLICATION_SECURITY_POSTURE_FINDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingOcsfClass>(hashCode);
  }

  return FindingOcsfClass::NOT_SET;
}

Aws::String GetNameForFindingOcsfClass(FindingOcsfClass enumValue) {
  switch (enumValue) {
    case FindingOcsfClass::NOT_SET:
      return {};
    case FindingOcsfClass::VULNERABILITY_FINDING:
      return "VULNERABILITY_FINDING";
    case FindingOcsfClass::APPLICATION_SECURITY_POSTURE_FINDING:
      return "APPLICATION_SECURITY_POSTURE_FINDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingOcsfClassMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
