/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/Sex.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace SexMapper {

static const int MALE_HASH = HashingUtils::HashString("MALE");
static const int FEMALE_HASH = HashingUtils::HashString("FEMALE");
static const int NON_BINARY_HASH = HashingUtils::HashString("NON_BINARY");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

Sex GetSexForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MALE_HASH) {
    return Sex::MALE;
  } else if (hashCode == FEMALE_HASH) {
    return Sex::FEMALE;
  } else if (hashCode == NON_BINARY_HASH) {
    return Sex::NON_BINARY;
  } else if (hashCode == UNKNOWN_HASH) {
    return Sex::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Sex>(hashCode);
  }

  return Sex::NOT_SET;
}

Aws::String GetNameForSex(Sex enumValue) {
  switch (enumValue) {
    case Sex::NOT_SET:
      return {};
    case Sex::MALE:
      return "MALE";
    case Sex::FEMALE:
      return "FEMALE";
    case Sex::NON_BINARY:
      return "NON_BINARY";
    case Sex::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SexMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
