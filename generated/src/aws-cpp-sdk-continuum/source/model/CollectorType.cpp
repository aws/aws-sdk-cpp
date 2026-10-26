/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/CollectorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace CollectorTypeMapper {

static const int AWS_COLLECTOR_HASH = HashingUtils::HashString("AWS_COLLECTOR");

CollectorType GetCollectorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_COLLECTOR_HASH) {
    return CollectorType::AWS_COLLECTOR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CollectorType>(hashCode);
  }

  return CollectorType::NOT_SET;
}

Aws::String GetNameForCollectorType(CollectorType enumValue) {
  switch (enumValue) {
    case CollectorType::NOT_SET:
      return {};
    case CollectorType::AWS_COLLECTOR:
      return "AWS_COLLECTOR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CollectorTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
