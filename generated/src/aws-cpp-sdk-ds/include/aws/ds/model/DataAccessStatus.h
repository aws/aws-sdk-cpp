/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class DataAccessStatus
  {
    NOT_SET,
    Disabled,
    Disabling,
    Enabled,
    Enabling,
    Failed
  };

namespace DataAccessStatusMapper
{
AWS_DIRECTORYSERVICE_API DataAccessStatus GetDataAccessStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForDataAccessStatus(DataAccessStatus value);
} // namespace DataAccessStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
