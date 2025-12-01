/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class Scope { NOT_SET, PROFILE, DOMAIN_ };

namespace ScopeMapper {
AWS_CUSTOMERPROFILES_API Scope GetScopeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForScope(Scope value);
}  // namespace ScopeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
