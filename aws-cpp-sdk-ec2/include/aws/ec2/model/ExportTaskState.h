/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ExportTaskState
  {
    NOT_SET,
    active,
    cancelling,
    cancelled,
    completed
  };

namespace ExportTaskStateMapper
{
AWS_EC2_API ExportTaskState GetExportTaskStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForExportTaskState(ExportTaskState value);
} // namespace ExportTaskStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
