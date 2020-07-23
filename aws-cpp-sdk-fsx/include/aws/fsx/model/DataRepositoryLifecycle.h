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
  enum class DataRepositoryLifecycle
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    MISCONFIGURED,
    UPDATING,
    DELETING
  };

namespace DataRepositoryLifecycleMapper
{
AWS_FSX_API DataRepositoryLifecycle GetDataRepositoryLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDataRepositoryLifecycle(DataRepositoryLifecycle value);
} // namespace DataRepositoryLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
