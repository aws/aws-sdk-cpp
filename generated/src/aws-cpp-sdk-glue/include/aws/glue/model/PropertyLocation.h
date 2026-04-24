/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class PropertyLocation { NOT_SET, HEADER, BODY, QUERY_PARAM, PATH };

namespace PropertyLocationMapper {
AWS_GLUE_API PropertyLocation GetPropertyLocationForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForPropertyLocation(PropertyLocation value);
}  // namespace PropertyLocationMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
