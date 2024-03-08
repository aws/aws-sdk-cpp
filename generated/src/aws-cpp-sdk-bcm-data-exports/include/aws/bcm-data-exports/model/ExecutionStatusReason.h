/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{
  enum class ExecutionStatusReason
  {
    NOT_SET,
    INSUFFICIENT_PERMISSION,
    BILL_OWNER_CHANGED,
    INTERNAL_FAILURE
  };

namespace ExecutionStatusReasonMapper
{
AWS_BCMDATAEXPORTS_API ExecutionStatusReason GetExecutionStatusReasonForName(const Aws::String& name);

AWS_BCMDATAEXPORTS_API Aws::String GetNameForExecutionStatusReason(ExecutionStatusReason value);
} // namespace ExecutionStatusReasonMapper
} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
