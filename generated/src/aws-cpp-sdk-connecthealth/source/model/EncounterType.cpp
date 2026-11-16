/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/EncounterType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace EncounterTypeMapper {

static const int TELEHEALTH_HASH = HashingUtils::HashString("TELEHEALTH");
static const int IN_PERSON_HASH = HashingUtils::HashString("IN_PERSON");

EncounterType GetEncounterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TELEHEALTH_HASH) {
    return EncounterType::TELEHEALTH;
  } else if (hashCode == IN_PERSON_HASH) {
    return EncounterType::IN_PERSON;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncounterType>(hashCode);
  }

  return EncounterType::NOT_SET;
}

Aws::String GetNameForEncounterType(EncounterType enumValue) {
  switch (enumValue) {
    case EncounterType::NOT_SET:
      return {};
    case EncounterType::TELEHEALTH:
      return "TELEHEALTH";
    case EncounterType::IN_PERSON:
      return "IN_PERSON";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncounterTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
