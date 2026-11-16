/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/ElasticIpType.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace ElasticIpTypeMapper {

static const int None_HASH = HashingUtils::HashString("None");
static const int ServiceManaged_HASH = HashingUtils::HashString("ServiceManaged");

ElasticIpType GetElasticIpTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == None_HASH) {
    return ElasticIpType::None;
  } else if (hashCode == ServiceManaged_HASH) {
    return ElasticIpType::ServiceManaged;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ElasticIpType>(hashCode);
  }

  return ElasticIpType::NOT_SET;
}

Aws::String GetNameForElasticIpType(ElasticIpType enumValue) {
  switch (enumValue) {
    case ElasticIpType::NOT_SET:
      return {};
    case ElasticIpType::None:
      return "None";
    case ElasticIpType::ServiceManaged:
      return "ServiceManaged";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ElasticIpTypeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
