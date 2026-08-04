/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/model/VectorDistanceFunction.h>

using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace VectorDistanceFunctionMapper {

static const int COSINE_HASH = HashingUtils::HashString("COSINE");
static const int DOT_PRODUCT_HASH = HashingUtils::HashString("DOT_PRODUCT");
static const int EUCLIDEAN_HASH = HashingUtils::HashString("EUCLIDEAN");

VectorDistanceFunction GetVectorDistanceFunctionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COSINE_HASH) {
    return VectorDistanceFunction::COSINE;
  } else if (hashCode == DOT_PRODUCT_HASH) {
    return VectorDistanceFunction::DOT_PRODUCT;
  } else if (hashCode == EUCLIDEAN_HASH) {
    return VectorDistanceFunction::EUCLIDEAN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VectorDistanceFunction>(hashCode);
  }

  return VectorDistanceFunction::NOT_SET;
}

Aws::String GetNameForVectorDistanceFunction(VectorDistanceFunction enumValue) {
  switch (enumValue) {
    case VectorDistanceFunction::NOT_SET:
      return {};
    case VectorDistanceFunction::COSINE:
      return "COSINE";
    case VectorDistanceFunction::DOT_PRODUCT:
      return "DOT_PRODUCT";
    case VectorDistanceFunction::EUCLIDEAN:
      return "EUCLIDEAN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VectorDistanceFunctionMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
