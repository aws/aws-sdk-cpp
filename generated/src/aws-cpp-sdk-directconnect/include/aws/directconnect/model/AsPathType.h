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
enum class AsPathType { NOT_SET, seq, set };

namespace AsPathTypeMapper {
AWS_DIRECTCONNECT_API AsPathType GetAsPathTypeForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForAsPathType(AsPathType value);
}  // namespace AsPathTypeMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
