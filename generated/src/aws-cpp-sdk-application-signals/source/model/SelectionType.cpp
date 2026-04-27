/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/SelectionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace SelectionTypeMapper {

static const int EXPLICIT_HASH = HashingUtils::HashString("EXPLICIT");
static const int PREFIX_HASH = HashingUtils::HashString("PREFIX");
static const int REGEX_HASH = HashingUtils::HashString("REGEX");

SelectionType GetSelectionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXPLICIT_HASH) {
    return SelectionType::EXPLICIT;
  } else if (hashCode == PREFIX_HASH) {
    return SelectionType::PREFIX;
  } else if (hashCode == REGEX_HASH) {
    return SelectionType::REGEX;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SelectionType>(hashCode);
  }

  return SelectionType::NOT_SET;
}

Aws::String GetNameForSelectionType(SelectionType enumValue) {
  switch (enumValue) {
    case SelectionType::NOT_SET:
      return {};
    case SelectionType::EXPLICIT:
      return "EXPLICIT";
    case SelectionType::PREFIX:
      return "PREFIX";
    case SelectionType::REGEX:
      return "REGEX";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SelectionTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
