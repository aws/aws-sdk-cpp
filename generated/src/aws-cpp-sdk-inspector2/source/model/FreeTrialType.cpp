/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/FreeTrialType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace FreeTrialTypeMapper {

static const int EC2_HASH = HashingUtils::HashString("EC2");
static const int ECR_HASH = HashingUtils::HashString("ECR");
static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
static const int LAMBDA_CODE_HASH = HashingUtils::HashString("LAMBDA_CODE");
static const int CODE_REPOSITORY_HASH = HashingUtils::HashString("CODE_REPOSITORY");
static const int VM_HASH = HashingUtils::HashString("VM");
static const int CONTAINER_IMAGE_HASH = HashingUtils::HashString("CONTAINER_IMAGE");
static const int SERVERLESS_FUNCTION_HASH = HashingUtils::HashString("SERVERLESS_FUNCTION");

FreeTrialType GetFreeTrialTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EC2_HASH) {
    return FreeTrialType::EC2;
  } else if (hashCode == ECR_HASH) {
    return FreeTrialType::ECR;
  } else if (hashCode == LAMBDA_HASH) {
    return FreeTrialType::LAMBDA;
  } else if (hashCode == LAMBDA_CODE_HASH) {
    return FreeTrialType::LAMBDA_CODE;
  } else if (hashCode == CODE_REPOSITORY_HASH) {
    return FreeTrialType::CODE_REPOSITORY;
  } else if (hashCode == VM_HASH) {
    return FreeTrialType::VM;
  } else if (hashCode == CONTAINER_IMAGE_HASH) {
    return FreeTrialType::CONTAINER_IMAGE;
  } else if (hashCode == SERVERLESS_FUNCTION_HASH) {
    return FreeTrialType::SERVERLESS_FUNCTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FreeTrialType>(hashCode);
  }

  return FreeTrialType::NOT_SET;
}

Aws::String GetNameForFreeTrialType(FreeTrialType enumValue) {
  switch (enumValue) {
    case FreeTrialType::NOT_SET:
      return {};
    case FreeTrialType::EC2:
      return "EC2";
    case FreeTrialType::ECR:
      return "ECR";
    case FreeTrialType::LAMBDA:
      return "LAMBDA";
    case FreeTrialType::LAMBDA_CODE:
      return "LAMBDA_CODE";
    case FreeTrialType::CODE_REPOSITORY:
      return "CODE_REPOSITORY";
    case FreeTrialType::VM:
      return "VM";
    case FreeTrialType::CONTAINER_IMAGE:
      return "CONTAINER_IMAGE";
    case FreeTrialType::SERVERLESS_FUNCTION:
      return "SERVERLESS_FUNCTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FreeTrialTypeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
