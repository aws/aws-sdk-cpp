/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlRelationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ControlCatalog {
namespace Model {
namespace ControlRelationTypeMapper {

static const int COMPLEMENTARY_HASH = HashingUtils::HashString("COMPLEMENTARY");
static const int ALTERNATIVE_HASH = HashingUtils::HashString("ALTERNATIVE");
static const int MUTUALLY_EXCLUSIVE_HASH = HashingUtils::HashString("MUTUALLY_EXCLUSIVE");

ControlRelationType GetControlRelationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLEMENTARY_HASH) {
    return ControlRelationType::COMPLEMENTARY;
  } else if (hashCode == ALTERNATIVE_HASH) {
    return ControlRelationType::ALTERNATIVE;
  } else if (hashCode == MUTUALLY_EXCLUSIVE_HASH) {
    return ControlRelationType::MUTUALLY_EXCLUSIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ControlRelationType>(hashCode);
  }

  return ControlRelationType::NOT_SET;
}

Aws::String GetNameForControlRelationType(ControlRelationType enumValue) {
  switch (enumValue) {
    case ControlRelationType::NOT_SET:
      return {};
    case ControlRelationType::COMPLEMENTARY:
      return "COMPLEMENTARY";
    case ControlRelationType::ALTERNATIVE:
      return "ALTERNATIVE";
    case ControlRelationType::MUTUALLY_EXCLUSIVE:
      return "MUTUALLY_EXCLUSIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ControlRelationTypeMapper
}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
