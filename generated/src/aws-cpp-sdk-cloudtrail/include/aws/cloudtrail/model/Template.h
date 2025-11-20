/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudTrail {
namespace Model {
enum class Template { NOT_SET, API_ACTIVITY, RESOURCE_ACCESS, USER_ACTIONS };

namespace TemplateMapper {
AWS_CLOUDTRAIL_API Template GetTemplateForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForTemplate(Template value);
}  // namespace TemplateMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
