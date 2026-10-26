/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalAttackerGains.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace SignalAttackerGainsMapper {

static const int EXECUTE_HASH = HashingUtils::HashString("EXECUTE");
static const int MODIFY_PRIVILEGED_HASH = HashingUtils::HashString("MODIFY_PRIVILEGED");
static const int MODIFY_DATA_HASH = HashingUtils::HashString("MODIFY_DATA");
static const int MODIFY_COSMETIC_HASH = HashingUtils::HashString("MODIFY_COSMETIC");
static const int READ_HASH = HashingUtils::HashString("READ");
static const int NEITHER_HASH = HashingUtils::HashString("NEITHER");

SignalAttackerGains GetSignalAttackerGainsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXECUTE_HASH) {
    return SignalAttackerGains::EXECUTE;
  } else if (hashCode == MODIFY_PRIVILEGED_HASH) {
    return SignalAttackerGains::MODIFY_PRIVILEGED;
  } else if (hashCode == MODIFY_DATA_HASH) {
    return SignalAttackerGains::MODIFY_DATA;
  } else if (hashCode == MODIFY_COSMETIC_HASH) {
    return SignalAttackerGains::MODIFY_COSMETIC;
  } else if (hashCode == READ_HASH) {
    return SignalAttackerGains::READ;
  } else if (hashCode == NEITHER_HASH) {
    return SignalAttackerGains::NEITHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalAttackerGains>(hashCode);
  }

  return SignalAttackerGains::NOT_SET;
}

Aws::String GetNameForSignalAttackerGains(SignalAttackerGains enumValue) {
  switch (enumValue) {
    case SignalAttackerGains::NOT_SET:
      return {};
    case SignalAttackerGains::EXECUTE:
      return "EXECUTE";
    case SignalAttackerGains::MODIFY_PRIVILEGED:
      return "MODIFY_PRIVILEGED";
    case SignalAttackerGains::MODIFY_DATA:
      return "MODIFY_DATA";
    case SignalAttackerGains::MODIFY_COSMETIC:
      return "MODIFY_COSMETIC";
    case SignalAttackerGains::READ:
      return "READ";
    case SignalAttackerGains::NEITHER:
      return "NEITHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalAttackerGainsMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
