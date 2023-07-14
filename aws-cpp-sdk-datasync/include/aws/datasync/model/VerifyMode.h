/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class VerifyMode
  {
    NOT_SET,
    POINT_IN_TIME_CONSISTENT,
    ONLY_FILES_TRANSFERRED,
    NONE
  };

namespace VerifyModeMapper
{
AWS_DATASYNC_API VerifyMode GetVerifyModeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForVerifyMode(VerifyMode value);
} // namespace VerifyModeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
