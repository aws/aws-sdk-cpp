/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EBS
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    completed,
    pending,
    error
  };

namespace StatusMapper
{
AWS_EBS_API Status GetStatusForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
