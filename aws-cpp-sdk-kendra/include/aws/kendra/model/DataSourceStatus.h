/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class DataSourceStatus
  {
    NOT_SET,
    CREATING,
    DELETING,
    FAILED,
    UPDATING,
    ACTIVE
  };

namespace DataSourceStatusMapper
{
AWS_KENDRA_API DataSourceStatus GetDataSourceStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForDataSourceStatus(DataSourceStatus value);
} // namespace DataSourceStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
