﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class HostTenancy { NOT_SET, default_, dedicated, host };

namespace HostTenancyMapper {
AWS_EC2_API HostTenancy GetHostTenancyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForHostTenancy(HostTenancy value);
}  // namespace HostTenancyMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
