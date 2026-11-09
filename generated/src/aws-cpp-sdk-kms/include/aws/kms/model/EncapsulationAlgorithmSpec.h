/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMS_EXPORTS.h>

namespace Aws {
namespace KMS {
namespace Model {
enum class EncapsulationAlgorithmSpec { NOT_SET, ML_KEM };

namespace EncapsulationAlgorithmSpecMapper {
AWS_KMS_API EncapsulationAlgorithmSpec GetEncapsulationAlgorithmSpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForEncapsulationAlgorithmSpec(EncapsulationAlgorithmSpec value);
}  // namespace EncapsulationAlgorithmSpecMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
