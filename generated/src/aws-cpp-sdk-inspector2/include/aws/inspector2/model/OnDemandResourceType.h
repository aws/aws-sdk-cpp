/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class OnDemandResourceType { NOT_SET, AMI };

namespace OnDemandResourceTypeMapper {
AWS_INSPECTOR2_API OnDemandResourceType GetOnDemandResourceTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForOnDemandResourceType(OnDemandResourceType value);
}  // namespace OnDemandResourceTypeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
