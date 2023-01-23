/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class DatabaseLFTagPolicyPermission
  {
    NOT_SET,
    DESCRIBE
  };

namespace DatabaseLFTagPolicyPermissionMapper
{
AWS_DATAEXCHANGE_API DatabaseLFTagPolicyPermission GetDatabaseLFTagPolicyPermissionForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForDatabaseLFTagPolicyPermission(DatabaseLFTagPolicyPermission value);
} // namespace DatabaseLFTagPolicyPermissionMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
