/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class DomainScopeOption { NOT_SET, ENABLED, DISABLED };

namespace DomainScopeOptionMapper {
AWS_ACM_API DomainScopeOption GetDomainScopeOptionForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForDomainScopeOption(DomainScopeOption value);
}  // namespace DomainScopeOptionMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
