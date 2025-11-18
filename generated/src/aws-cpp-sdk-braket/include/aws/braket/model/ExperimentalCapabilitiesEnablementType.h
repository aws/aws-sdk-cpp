/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Braket {
namespace Model {
enum class ExperimentalCapabilitiesEnablementType { NOT_SET, ALL, NONE };

namespace ExperimentalCapabilitiesEnablementTypeMapper {
AWS_BRAKET_API ExperimentalCapabilitiesEnablementType GetExperimentalCapabilitiesEnablementTypeForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForExperimentalCapabilitiesEnablementType(ExperimentalCapabilitiesEnablementType value);
}  // namespace ExperimentalCapabilitiesEnablementTypeMapper
}  // namespace Model
}  // namespace Braket
}  // namespace Aws
