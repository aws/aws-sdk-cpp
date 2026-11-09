/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/lookoutequipment/LookoutEquipmentErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LookoutEquipment;

namespace Aws {
namespace LookoutEquipment {
namespace LookoutEquipmentErrorMapper {

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  AWS_UNREFERENCED_PARAM(errorName);
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace LookoutEquipmentErrorMapper
}  // namespace LookoutEquipment
}  // namespace Aws
