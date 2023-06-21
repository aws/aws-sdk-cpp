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
  enum class ScanType
  {
    NOT_SET,
    NETWORK,
    PACKAGE,
    CODE
  };

namespace ScanTypeMapper
{
AWS_INSPECTOR2_API ScanType GetScanTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForScanType(ScanType value);
} // namespace ScanTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
