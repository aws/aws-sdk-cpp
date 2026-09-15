/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/model/ResiliencyModel.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {
namespace ResiliencyModelMapper {

static const int maximum_resiliency_HASH = HashingUtils::HashString("maximum-resiliency");
static const int high_resiliency_HASH = HashingUtils::HashString("high-resiliency");
static const int basic_resiliency_HASH = HashingUtils::HashString("basic-resiliency");

ResiliencyModel GetResiliencyModelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == maximum_resiliency_HASH) {
    return ResiliencyModel::maximum_resiliency;
  } else if (hashCode == high_resiliency_HASH) {
    return ResiliencyModel::high_resiliency;
  } else if (hashCode == basic_resiliency_HASH) {
    return ResiliencyModel::basic_resiliency;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResiliencyModel>(hashCode);
  }

  return ResiliencyModel::NOT_SET;
}

Aws::String GetNameForResiliencyModel(ResiliencyModel enumValue) {
  switch (enumValue) {
    case ResiliencyModel::NOT_SET:
      return {};
    case ResiliencyModel::maximum_resiliency:
      return "maximum-resiliency";
    case ResiliencyModel::high_resiliency:
      return "high-resiliency";
    case ResiliencyModel::basic_resiliency:
      return "basic-resiliency";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResiliencyModelMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
