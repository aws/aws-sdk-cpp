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
  enum class OverwriteMode
  {
    NOT_SET,
    ALWAYS,
    NEVER
  };

namespace OverwriteModeMapper
{
AWS_DATASYNC_API OverwriteMode GetOverwriteModeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForOverwriteMode(OverwriteMode value);
} // namespace OverwriteModeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
