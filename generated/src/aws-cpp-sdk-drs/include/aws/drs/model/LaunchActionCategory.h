/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class LaunchActionCategory
  {
    NOT_SET,
    MONITORING,
    VALIDATION,
    CONFIGURATION,
    SECURITY,
    OTHER
  };

namespace LaunchActionCategoryMapper
{
AWS_DRS_API LaunchActionCategory GetLaunchActionCategoryForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForLaunchActionCategory(LaunchActionCategory value);
} // namespace LaunchActionCategoryMapper
} // namespace Model
} // namespace drs
} // namespace Aws
