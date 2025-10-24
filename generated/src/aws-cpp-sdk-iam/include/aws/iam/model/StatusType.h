﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class StatusType { NOT_SET, Active, Inactive, Expired };

namespace StatusTypeMapper {
AWS_IAM_API StatusType GetStatusTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForStatusType(StatusType value);
}  // namespace StatusTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
