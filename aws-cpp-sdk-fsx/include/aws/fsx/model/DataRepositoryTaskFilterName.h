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
  enum class DataRepositoryTaskFilterName
  {
    NOT_SET,
    file_system_id,
    task_lifecycle,
    data_repository_association_id,
    file_cache_id
  };

namespace DataRepositoryTaskFilterNameMapper
{
AWS_FSX_API DataRepositoryTaskFilterName GetDataRepositoryTaskFilterNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDataRepositoryTaskFilterName(DataRepositoryTaskFilterName value);
} // namespace DataRepositoryTaskFilterNameMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
