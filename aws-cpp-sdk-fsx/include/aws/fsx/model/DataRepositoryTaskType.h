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
  enum class DataRepositoryTaskType
  {
    NOT_SET,
    EXPORT_TO_REPOSITORY,
    IMPORT_METADATA_FROM_REPOSITORY,
    RELEASE_DATA_FROM_FILESYSTEM,
    AUTO_RELEASE_DATA
  };

namespace DataRepositoryTaskTypeMapper
{
AWS_FSX_API DataRepositoryTaskType GetDataRepositoryTaskTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDataRepositoryTaskType(DataRepositoryTaskType value);
} // namespace DataRepositoryTaskTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
