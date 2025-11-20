/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/Template.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudTrail {
namespace Model {
namespace TemplateMapper {

static const int API_ACTIVITY_HASH = HashingUtils::HashString("API_ACTIVITY");
static const int RESOURCE_ACCESS_HASH = HashingUtils::HashString("RESOURCE_ACCESS");
static const int USER_ACTIONS_HASH = HashingUtils::HashString("USER_ACTIONS");

Template GetTemplateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == API_ACTIVITY_HASH) {
    return Template::API_ACTIVITY;
  } else if (hashCode == RESOURCE_ACCESS_HASH) {
    return Template::RESOURCE_ACCESS;
  } else if (hashCode == USER_ACTIONS_HASH) {
    return Template::USER_ACTIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Template>(hashCode);
  }

  return Template::NOT_SET;
}

Aws::String GetNameForTemplate(Template enumValue) {
  switch (enumValue) {
    case Template::NOT_SET:
      return {};
    case Template::API_ACTIVITY:
      return "API_ACTIVITY";
    case Template::RESOURCE_ACCESS:
      return "RESOURCE_ACCESS";
    case Template::USER_ACTIONS:
      return "USER_ACTIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TemplateMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
