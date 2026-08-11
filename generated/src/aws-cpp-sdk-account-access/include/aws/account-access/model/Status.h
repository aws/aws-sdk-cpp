/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AccountAccess {
namespace Model {
enum class Status { NOT_SET, CREATE_IN_PROGRESS, ACTIVE, DELETE_IN_PROGRESS, CREATE_FAILED, DELETE_FAILED };

namespace StatusMapper {
AWS_ACCOUNTACCESS_API Status GetStatusForName(const Aws::String& name);

AWS_ACCOUNTACCESS_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
