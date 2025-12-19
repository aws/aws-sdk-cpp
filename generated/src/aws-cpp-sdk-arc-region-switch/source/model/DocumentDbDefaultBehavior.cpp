/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/DocumentDbDefaultBehavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace DocumentDbDefaultBehaviorMapper {

static const int switchoverOnly_HASH = HashingUtils::HashString("switchoverOnly");
static const int failover_HASH = HashingUtils::HashString("failover");

DocumentDbDefaultBehavior GetDocumentDbDefaultBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == switchoverOnly_HASH) {
    return DocumentDbDefaultBehavior::switchoverOnly;
  } else if (hashCode == failover_HASH) {
    return DocumentDbDefaultBehavior::failover;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DocumentDbDefaultBehavior>(hashCode);
  }

  return DocumentDbDefaultBehavior::NOT_SET;
}

Aws::String GetNameForDocumentDbDefaultBehavior(DocumentDbDefaultBehavior enumValue) {
  switch (enumValue) {
    case DocumentDbDefaultBehavior::NOT_SET:
      return {};
    case DocumentDbDefaultBehavior::switchoverOnly:
      return "switchoverOnly";
    case DocumentDbDefaultBehavior::failover:
      return "failover";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DocumentDbDefaultBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
