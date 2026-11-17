/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticache/model/IntegrationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {
namespace IntegrationTypeMapper {

static const int dynamodb_HASH = HashingUtils::HashString("dynamodb");

IntegrationType GetIntegrationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == dynamodb_HASH) {
    return IntegrationType::dynamodb;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntegrationType>(hashCode);
  }

  return IntegrationType::NOT_SET;
}

Aws::String GetNameForIntegrationType(IntegrationType enumValue) {
  switch (enumValue) {
    case IntegrationType::NOT_SET:
      return {};
    case IntegrationType::dynamodb:
      return "dynamodb";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntegrationTypeMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
