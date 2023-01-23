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
  enum class Gid
  {
    NOT_SET,
    NONE,
    INT_VALUE,
    NAME,
    BOTH
  };

namespace GidMapper
{
AWS_DATASYNC_API Gid GetGidForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForGid(Gid value);
} // namespace GidMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
