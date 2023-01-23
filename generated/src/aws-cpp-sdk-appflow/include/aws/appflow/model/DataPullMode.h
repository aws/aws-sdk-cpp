/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class DataPullMode
  {
    NOT_SET,
    Incremental,
    Complete
  };

namespace DataPullModeMapper
{
AWS_APPFLOW_API DataPullMode GetDataPullModeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForDataPullMode(DataPullMode value);
} // namespace DataPullModeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
