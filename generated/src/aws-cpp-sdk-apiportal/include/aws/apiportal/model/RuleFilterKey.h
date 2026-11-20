/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class RuleFilterKey { NOT_SET, RESOURCE_ARN, HOST, METHOD, PATH, PORT, ACCOUNT };

namespace RuleFilterKeyMapper {
AWS_APIPORTAL_API RuleFilterKey GetRuleFilterKeyForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForRuleFilterKey(RuleFilterKey value);
}  // namespace RuleFilterKeyMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
