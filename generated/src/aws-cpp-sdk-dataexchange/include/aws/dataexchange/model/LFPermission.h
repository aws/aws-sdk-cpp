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
  enum class LFPermission
  {
    NOT_SET,
    DESCRIBE,
    SELECT
  };

namespace LFPermissionMapper
{
AWS_DATAEXCHANGE_API LFPermission GetLFPermissionForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForLFPermission(LFPermission value);
} // namespace LFPermissionMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
