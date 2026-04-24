/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/Kendra_EXPORTS.h>

namespace Aws {
namespace kendra {
namespace Model {
enum class PrincipalMappingStatus { NOT_SET, FAILED, SUCCEEDED, PROCESSING, DELETING, DELETED };

namespace PrincipalMappingStatusMapper {
AWS_KENDRA_API PrincipalMappingStatus GetPrincipalMappingStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForPrincipalMappingStatus(PrincipalMappingStatus value);
}  // namespace PrincipalMappingStatusMapper
}  // namespace Model
}  // namespace kendra
}  // namespace Aws
