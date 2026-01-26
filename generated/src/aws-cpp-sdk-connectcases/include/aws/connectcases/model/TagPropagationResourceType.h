/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectCases {
namespace Model {
enum class TagPropagationResourceType { NOT_SET, Cases };

namespace TagPropagationResourceTypeMapper {
AWS_CONNECTCASES_API TagPropagationResourceType GetTagPropagationResourceTypeForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForTagPropagationResourceType(TagPropagationResourceType value);
}  // namespace TagPropagationResourceTypeMapper
}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
