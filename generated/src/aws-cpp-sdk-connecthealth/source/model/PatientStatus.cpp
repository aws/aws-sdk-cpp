/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PatientStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace PatientStatusMapper {

static const int NEW__HASH = HashingUtils::HashString("NEW");
static const int ESTABLISHED_HASH = HashingUtils::HashString("ESTABLISHED");

PatientStatus GetPatientStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NEW__HASH) {
    return PatientStatus::NEW_;
  } else if (hashCode == ESTABLISHED_HASH) {
    return PatientStatus::ESTABLISHED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PatientStatus>(hashCode);
  }

  return PatientStatus::NOT_SET;
}

Aws::String GetNameForPatientStatus(PatientStatus enumValue) {
  switch (enumValue) {
    case PatientStatus::NOT_SET:
      return {};
    case PatientStatus::NEW_:
      return "NEW";
    case PatientStatus::ESTABLISHED:
      return "ESTABLISHED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PatientStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
