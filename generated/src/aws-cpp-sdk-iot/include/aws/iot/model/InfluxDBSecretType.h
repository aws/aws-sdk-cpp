/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class InfluxDBSecretType { NOT_SET, SecretString, SecretBinary };

namespace InfluxDBSecretTypeMapper {
AWS_IOT_API InfluxDBSecretType GetInfluxDBSecretTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForInfluxDBSecretType(InfluxDBSecretType value);
}  // namespace InfluxDBSecretTypeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
