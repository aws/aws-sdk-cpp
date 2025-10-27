/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws {
namespace IoTWireless {
namespace Model {
enum class SigningAlg { NOT_SET, Ed25519, P256r1 };

namespace SigningAlgMapper {
AWS_IOTWIRELESS_API SigningAlg GetSigningAlgForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForSigningAlg(SigningAlg value);
}  // namespace SigningAlgMapper
}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
