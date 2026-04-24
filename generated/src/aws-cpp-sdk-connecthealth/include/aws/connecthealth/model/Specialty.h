/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class Specialty { NOT_SET, PRIMARY_CARE };

namespace SpecialtyMapper {
AWS_CONNECTHEALTH_API Specialty GetSpecialtyForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForSpecialty(Specialty value);
}  // namespace SpecialtyMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
