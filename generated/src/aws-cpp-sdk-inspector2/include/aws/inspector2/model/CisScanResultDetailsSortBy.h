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
  enum class CisScanResultDetailsSortBy
  {
    NOT_SET,
    CHECK_ID,
    STATUS
  };

namespace CisScanResultDetailsSortByMapper
{
AWS_INSPECTOR2_API CisScanResultDetailsSortBy GetCisScanResultDetailsSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisScanResultDetailsSortBy(CisScanResultDetailsSortBy value);
} // namespace CisScanResultDetailsSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
