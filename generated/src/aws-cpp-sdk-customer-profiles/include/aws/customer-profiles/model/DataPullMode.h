/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
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
AWS_CUSTOMERPROFILES_API DataPullMode GetDataPullModeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForDataPullMode(DataPullMode value);
} // namespace DataPullModeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
