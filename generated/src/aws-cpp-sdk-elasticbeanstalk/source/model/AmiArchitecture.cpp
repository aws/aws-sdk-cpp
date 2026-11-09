/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticbeanstalk/model/AmiArchitecture.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {
namespace AmiArchitectureMapper {

static const int x86_64_HASH = HashingUtils::HashString("x86_64");
static const int arm64_HASH = HashingUtils::HashString("arm64");

AmiArchitecture GetAmiArchitectureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == x86_64_HASH) {
    return AmiArchitecture::x86_64;
  } else if (hashCode == arm64_HASH) {
    return AmiArchitecture::arm64;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AmiArchitecture>(hashCode);
  }

  return AmiArchitecture::NOT_SET;
}

Aws::String GetNameForAmiArchitecture(AmiArchitecture enumValue) {
  switch (enumValue) {
    case AmiArchitecture::NOT_SET:
      return {};
    case AmiArchitecture::x86_64:
      return "x86_64";
    case AmiArchitecture::arm64:
      return "arm64";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AmiArchitectureMapper
}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
