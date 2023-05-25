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
  enum class TableTagPolicyLFPermission
  {
    NOT_SET,
    DESCRIBE,
    SELECT
  };

namespace TableTagPolicyLFPermissionMapper
{
AWS_DATAEXCHANGE_API TableTagPolicyLFPermission GetTableTagPolicyLFPermissionForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForTableTagPolicyLFPermission(TableTagPolicyLFPermission value);
} // namespace TableTagPolicyLFPermissionMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
