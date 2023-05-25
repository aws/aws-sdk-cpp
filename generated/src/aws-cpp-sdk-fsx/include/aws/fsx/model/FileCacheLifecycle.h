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
  enum class FileCacheLifecycle
  {
    NOT_SET,
    AVAILABLE,
    CREATING,
    DELETING,
    UPDATING,
    FAILED
  };

namespace FileCacheLifecycleMapper
{
AWS_FSX_API FileCacheLifecycle GetFileCacheLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFileCacheLifecycle(FileCacheLifecycle value);
} // namespace FileCacheLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
