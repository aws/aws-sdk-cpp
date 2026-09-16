/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticbeanstalk/model/ArchitectureType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {
namespace ArchitectureTypeMapper {

static const int amd64_HASH = HashingUtils::HashString("amd64");
static const int arm64_HASH = HashingUtils::HashString("arm64");

ArchitectureType GetArchitectureTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == amd64_HASH) {
    return ArchitectureType::amd64;
  } else if (hashCode == arm64_HASH) {
    return ArchitectureType::arm64;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ArchitectureType>(hashCode);
  }

  return ArchitectureType::NOT_SET;
}

Aws::String GetNameForArchitectureType(ArchitectureType enumValue) {
  switch (enumValue) {
    case ArchitectureType::NOT_SET:
      return {};
    case ArchitectureType::amd64:
      return "amd64";
    case ArchitectureType::arm64:
      return "arm64";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ArchitectureTypeMapper
}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
