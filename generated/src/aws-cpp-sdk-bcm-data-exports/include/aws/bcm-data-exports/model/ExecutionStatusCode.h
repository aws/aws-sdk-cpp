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
  enum class ExecutionStatusCode
  {
    NOT_SET,
    INITIATION_IN_PROCESS,
    QUERY_QUEUED,
    QUERY_IN_PROCESS,
    QUERY_FAILURE,
    DELIVERY_IN_PROCESS,
    DELIVERY_SUCCESS,
    DELIVERY_FAILURE
  };

namespace ExecutionStatusCodeMapper
{
AWS_BCMDATAEXPORTS_API ExecutionStatusCode GetExecutionStatusCodeForName(const Aws::String& name);

AWS_BCMDATAEXPORTS_API Aws::String GetNameForExecutionStatusCode(ExecutionStatusCode value);
} // namespace ExecutionStatusCodeMapper
} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
