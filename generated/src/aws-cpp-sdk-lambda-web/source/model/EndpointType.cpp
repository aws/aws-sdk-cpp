/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-web/model/EndpointType.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {
namespace EndpointTypeMapper {

static const int HomeRegion_HASH = HashingUtils::HashString("HomeRegion");
static const int MultiRegion_HASH = HashingUtils::HashString("MultiRegion");
static const int PerRegion_HASH = HashingUtils::HashString("PerRegion");

EndpointType GetEndpointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HomeRegion_HASH) {
    return EndpointType::HomeRegion;
  } else if (hashCode == MultiRegion_HASH) {
    return EndpointType::MultiRegion;
  } else if (hashCode == PerRegion_HASH) {
    return EndpointType::PerRegion;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndpointType>(hashCode);
  }

  return EndpointType::NOT_SET;
}

Aws::String GetNameForEndpointType(EndpointType enumValue) {
  switch (enumValue) {
    case EndpointType::NOT_SET:
      return {};
    case EndpointType::HomeRegion:
      return "HomeRegion";
    case EndpointType::MultiRegion:
      return "MultiRegion";
    case EndpointType::PerRegion:
      return "PerRegion";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndpointTypeMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
