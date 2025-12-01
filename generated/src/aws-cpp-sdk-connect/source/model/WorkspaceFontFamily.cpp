/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WorkspaceFontFamily.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace WorkspaceFontFamilyMapper {

static const int Arial_HASH = HashingUtils::HashString("Arial");
static const int Courier_New_HASH = HashingUtils::HashString("Courier New");
static const int Georgia_HASH = HashingUtils::HashString("Georgia");
static const int Times_New_Roman_HASH = HashingUtils::HashString("Times New Roman");
static const int Trebuchet_HASH = HashingUtils::HashString("Trebuchet");
static const int Verdana_HASH = HashingUtils::HashString("Verdana");

WorkspaceFontFamily GetWorkspaceFontFamilyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Arial_HASH) {
    return WorkspaceFontFamily::Arial;
  } else if (hashCode == Courier_New_HASH) {
    return WorkspaceFontFamily::Courier_New;
  } else if (hashCode == Georgia_HASH) {
    return WorkspaceFontFamily::Georgia;
  } else if (hashCode == Times_New_Roman_HASH) {
    return WorkspaceFontFamily::Times_New_Roman;
  } else if (hashCode == Trebuchet_HASH) {
    return WorkspaceFontFamily::Trebuchet;
  } else if (hashCode == Verdana_HASH) {
    return WorkspaceFontFamily::Verdana;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WorkspaceFontFamily>(hashCode);
  }

  return WorkspaceFontFamily::NOT_SET;
}

Aws::String GetNameForWorkspaceFontFamily(WorkspaceFontFamily enumValue) {
  switch (enumValue) {
    case WorkspaceFontFamily::NOT_SET:
      return {};
    case WorkspaceFontFamily::Arial:
      return "Arial";
    case WorkspaceFontFamily::Courier_New:
      return "Courier New";
    case WorkspaceFontFamily::Georgia:
      return "Georgia";
    case WorkspaceFontFamily::Times_New_Roman:
      return "Times New Roman";
    case WorkspaceFontFamily::Trebuchet:
      return "Trebuchet";
    case WorkspaceFontFamily::Verdana:
      return "Verdana";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WorkspaceFontFamilyMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
