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
  enum class Atime
  {
    NOT_SET,
    NONE,
    BEST_EFFORT
  };

namespace AtimeMapper
{
AWS_DATASYNC_API Atime GetAtimeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForAtime(Atime value);
} // namespace AtimeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
