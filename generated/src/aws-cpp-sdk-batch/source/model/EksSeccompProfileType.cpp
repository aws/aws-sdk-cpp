/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksSeccompProfileType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace EksSeccompProfileTypeMapper {

static const int RuntimeDefault_HASH = HashingUtils::HashString("RuntimeDefault");
static const int Localhost_HASH = HashingUtils::HashString("Localhost");
static const int Unconfined_HASH = HashingUtils::HashString("Unconfined");

EksSeccompProfileType GetEksSeccompProfileTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RuntimeDefault_HASH) {
    return EksSeccompProfileType::RuntimeDefault;
  } else if (hashCode == Localhost_HASH) {
    return EksSeccompProfileType::Localhost;
  } else if (hashCode == Unconfined_HASH) {
    return EksSeccompProfileType::Unconfined;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EksSeccompProfileType>(hashCode);
  }

  return EksSeccompProfileType::NOT_SET;
}

Aws::String GetNameForEksSeccompProfileType(EksSeccompProfileType enumValue) {
  switch (enumValue) {
    case EksSeccompProfileType::NOT_SET:
      return {};
    case EksSeccompProfileType::RuntimeDefault:
      return "RuntimeDefault";
    case EksSeccompProfileType::Localhost:
      return "Localhost";
    case EksSeccompProfileType::Unconfined:
      return "Unconfined";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EksSeccompProfileTypeMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
