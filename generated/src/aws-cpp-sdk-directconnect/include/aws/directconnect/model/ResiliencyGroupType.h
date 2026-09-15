/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

namespace Aws {
namespace DirectConnect {
namespace Model {
enum class ResiliencyGroupType { NOT_SET, Managed };

namespace ResiliencyGroupTypeMapper {
AWS_DIRECTCONNECT_API ResiliencyGroupType GetResiliencyGroupTypeForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForResiliencyGroupType(ResiliencyGroupType value);
}  // namespace ResiliencyGroupTypeMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
