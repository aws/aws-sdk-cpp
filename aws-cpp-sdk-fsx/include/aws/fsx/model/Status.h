/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    FAILED,
    IN_PROGRESS,
    PENDING,
    COMPLETED,
    UPDATED_OPTIMIZING
  };

namespace StatusMapper
{
AWS_FSX_API Status GetStatusForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
