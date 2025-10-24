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
enum class RebootMigrationSupport { NOT_SET, unsupported, supported };

namespace RebootMigrationSupportMapper {
AWS_EC2_API RebootMigrationSupport GetRebootMigrationSupportForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRebootMigrationSupport(RebootMigrationSupport value);
}  // namespace RebootMigrationSupportMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
