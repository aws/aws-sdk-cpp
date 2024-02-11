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
  enum class FindingDetailsErrorCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    ACCESS_DENIED,
    FINDING_DETAILS_NOT_FOUND,
    INVALID_INPUT
  };

namespace FindingDetailsErrorCodeMapper
{
AWS_INSPECTOR2_API FindingDetailsErrorCode GetFindingDetailsErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForFindingDetailsErrorCode(FindingDetailsErrorCode value);
} // namespace FindingDetailsErrorCodeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
