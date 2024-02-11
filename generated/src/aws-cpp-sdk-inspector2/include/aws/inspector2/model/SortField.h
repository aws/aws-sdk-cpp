/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class SortField
  {
    NOT_SET,
    AWS_ACCOUNT_ID,
    FINDING_TYPE,
    SEVERITY,
    FIRST_OBSERVED_AT,
    LAST_OBSERVED_AT,
    FINDING_STATUS,
    RESOURCE_TYPE,
    ECR_IMAGE_PUSHED_AT,
    ECR_IMAGE_REPOSITORY_NAME,
    ECR_IMAGE_REGISTRY,
    NETWORK_PROTOCOL,
    COMPONENT_TYPE,
    VULNERABILITY_ID,
    VULNERABILITY_SOURCE,
    INSPECTOR_SCORE,
    VENDOR_SEVERITY,
    EPSS_SCORE
  };

namespace SortFieldMapper
{
AWS_INSPECTOR2_API SortField GetSortFieldForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForSortField(SortField value);
} // namespace SortFieldMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
