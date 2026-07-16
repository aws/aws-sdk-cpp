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
enum class DiversityCapType { NOT_SET, PERCENTAGE, VALUE };

namespace DiversityCapTypeMapper {
AWS_CUSTOMERPROFILES_API DiversityCapType GetDiversityCapTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForDiversityCapType(DiversityCapType value);
}  // namespace DiversityCapTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
