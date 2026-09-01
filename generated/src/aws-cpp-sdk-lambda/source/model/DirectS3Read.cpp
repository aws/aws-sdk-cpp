/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/DirectS3Read.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace DirectS3ReadMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int AUTO_HASH = HashingUtils::HashString("AUTO");

DirectS3Read GetDirectS3ReadForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return DirectS3Read::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return DirectS3Read::DISABLED;
  } else if (hashCode == AUTO_HASH) {
    return DirectS3Read::AUTO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DirectS3Read>(hashCode);
  }

  return DirectS3Read::NOT_SET;
}

Aws::String GetNameForDirectS3Read(DirectS3Read enumValue) {
  switch (enumValue) {
    case DirectS3Read::NOT_SET:
      return {};
    case DirectS3Read::ENABLED:
      return "ENABLED";
    case DirectS3Read::DISABLED:
      return "DISABLED";
    case DirectS3Read::AUTO:
      return "AUTO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DirectS3ReadMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
