/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot/model/InfluxDBSecretType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {
namespace InfluxDBSecretTypeMapper {

static const int SecretString_HASH = HashingUtils::HashString("SecretString");
static const int SecretBinary_HASH = HashingUtils::HashString("SecretBinary");

InfluxDBSecretType GetInfluxDBSecretTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SecretString_HASH) {
    return InfluxDBSecretType::SecretString;
  } else if (hashCode == SecretBinary_HASH) {
    return InfluxDBSecretType::SecretBinary;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InfluxDBSecretType>(hashCode);
  }

  return InfluxDBSecretType::NOT_SET;
}

Aws::String GetNameForInfluxDBSecretType(InfluxDBSecretType enumValue) {
  switch (enumValue) {
    case InfluxDBSecretType::NOT_SET:
      return {};
    case InfluxDBSecretType::SecretString:
      return "SecretString";
    case InfluxDBSecretType::SecretBinary:
      return "SecretBinary";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InfluxDBSecretTypeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
