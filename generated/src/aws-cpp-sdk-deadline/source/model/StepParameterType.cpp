﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/StepParameterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace StepParameterTypeMapper {

static const int INT_HASH = HashingUtils::HashString("INT");
static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int PATH_HASH = HashingUtils::HashString("PATH");
static const int CHUNK_INT_HASH = HashingUtils::HashString("CHUNK_INT");

StepParameterType GetStepParameterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INT_HASH) {
    return StepParameterType::INT;
  } else if (hashCode == FLOAT_HASH) {
    return StepParameterType::FLOAT;
  } else if (hashCode == STRING_HASH) {
    return StepParameterType::STRING;
  } else if (hashCode == PATH_HASH) {
    return StepParameterType::PATH;
  } else if (hashCode == CHUNK_INT_HASH) {
    return StepParameterType::CHUNK_INT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StepParameterType>(hashCode);
  }

  return StepParameterType::NOT_SET;
}

Aws::String GetNameForStepParameterType(StepParameterType enumValue) {
  switch (enumValue) {
    case StepParameterType::NOT_SET:
      return {};
    case StepParameterType::INT:
      return "INT";
    case StepParameterType::FLOAT:
      return "FLOAT";
    case StepParameterType::STRING:
      return "STRING";
    case StepParameterType::PATH:
      return "PATH";
    case StepParameterType::CHUNK_INT:
      return "CHUNK_INT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StepParameterTypeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
