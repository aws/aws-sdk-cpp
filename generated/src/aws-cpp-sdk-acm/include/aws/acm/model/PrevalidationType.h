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
enum class PrevalidationType { NOT_SET, DNS_PREVALIDATION };

namespace PrevalidationTypeMapper {
AWS_ACM_API PrevalidationType GetPrevalidationTypeForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForPrevalidationType(PrevalidationType value);
}  // namespace PrevalidationTypeMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
