/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class LastLaunchResult
  {
    NOT_SET,
    NOT_STARTED,
    PENDING,
    SUCCEEDED,
    FAILED
  };

namespace LastLaunchResultMapper
{
AWS_DRS_API LastLaunchResult GetLastLaunchResultForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForLastLaunchResult(LastLaunchResult value);
} // namespace LastLaunchResultMapper
} // namespace Model
} // namespace drs
} // namespace Aws
