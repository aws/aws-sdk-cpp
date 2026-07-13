/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/es/model/DomainEngineMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {
namespace DomainEngineModeMapper {

static const int GENERAL_HASH = HashingUtils::HashString("GENERAL");
static const int OPTIMIZED_HASH = HashingUtils::HashString("OPTIMIZED");

DomainEngineMode GetDomainEngineModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GENERAL_HASH) {
    return DomainEngineMode::GENERAL;
  } else if (hashCode == OPTIMIZED_HASH) {
    return DomainEngineMode::OPTIMIZED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DomainEngineMode>(hashCode);
  }

  return DomainEngineMode::NOT_SET;
}

Aws::String GetNameForDomainEngineMode(DomainEngineMode enumValue) {
  switch (enumValue) {
    case DomainEngineMode::NOT_SET:
      return {};
    case DomainEngineMode::GENERAL:
      return "GENERAL";
    case DomainEngineMode::OPTIMIZED:
      return "OPTIMIZED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DomainEngineModeMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
