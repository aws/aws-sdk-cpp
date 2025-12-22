/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/DocumentDbUngracefulBehavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace DocumentDbUngracefulBehaviorMapper {

static const int failover_HASH = HashingUtils::HashString("failover");

DocumentDbUngracefulBehavior GetDocumentDbUngracefulBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == failover_HASH) {
    return DocumentDbUngracefulBehavior::failover;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DocumentDbUngracefulBehavior>(hashCode);
  }

  return DocumentDbUngracefulBehavior::NOT_SET;
}

Aws::String GetNameForDocumentDbUngracefulBehavior(DocumentDbUngracefulBehavior enumValue) {
  switch (enumValue) {
    case DocumentDbUngracefulBehavior::NOT_SET:
      return {};
    case DocumentDbUngracefulBehavior::failover:
      return "failover";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DocumentDbUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
