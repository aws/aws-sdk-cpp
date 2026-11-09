/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectContactLens {
namespace Model {
enum class TagComparisonType { NOT_SET, EQUALS, NOT_EQUALS };

namespace TagComparisonTypeMapper {
AWS_CONNECTCONTACTLENS_API TagComparisonType GetTagComparisonTypeForName(const Aws::String& name);

AWS_CONNECTCONTACTLENS_API Aws::String GetNameForTagComparisonType(TagComparisonType value);
}  // namespace TagComparisonTypeMapper
}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws
