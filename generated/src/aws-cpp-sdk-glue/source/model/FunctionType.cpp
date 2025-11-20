/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/FunctionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace FunctionTypeMapper {

static const int REGULAR_FUNCTION_HASH = HashingUtils::HashString("REGULAR_FUNCTION");
static const int AGGREGATE_FUNCTION_HASH = HashingUtils::HashString("AGGREGATE_FUNCTION");
static const int STORED_PROCEDURE_HASH = HashingUtils::HashString("STORED_PROCEDURE");

FunctionType GetFunctionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGULAR_FUNCTION_HASH) {
    return FunctionType::REGULAR_FUNCTION;
  } else if (hashCode == AGGREGATE_FUNCTION_HASH) {
    return FunctionType::AGGREGATE_FUNCTION;
  } else if (hashCode == STORED_PROCEDURE_HASH) {
    return FunctionType::STORED_PROCEDURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FunctionType>(hashCode);
  }

  return FunctionType::NOT_SET;
}

Aws::String GetNameForFunctionType(FunctionType enumValue) {
  switch (enumValue) {
    case FunctionType::NOT_SET:
      return {};
    case FunctionType::REGULAR_FUNCTION:
      return "REGULAR_FUNCTION";
    case FunctionType::AGGREGATE_FUNCTION:
      return "AGGREGATE_FUNCTION";
    case FunctionType::STORED_PROCEDURE:
      return "STORED_PROCEDURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FunctionTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
