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
enum class ViewUpdateAction { NOT_SET, ADD, REPLACE, ADD_OR_REPLACE, DROP };

namespace ViewUpdateActionMapper {
AWS_GLUE_API ViewUpdateAction GetViewUpdateActionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForViewUpdateAction(ViewUpdateAction value);
}  // namespace ViewUpdateActionMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
