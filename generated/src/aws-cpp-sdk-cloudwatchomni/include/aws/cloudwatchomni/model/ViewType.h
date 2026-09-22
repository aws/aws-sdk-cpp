/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class ViewType { NOT_SET, USER, MANAGED };

namespace ViewTypeMapper {
AWS_CLOUDWATCHOMNI_API ViewType GetViewTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForViewType(ViewType value);
}  // namespace ViewTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
