/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class PatchFilterKey
  {
    NOT_SET,
    PATCH_SET,
    PRODUCT,
    PRODUCT_FAMILY,
    CLASSIFICATION,
    MSRC_SEVERITY,
    PATCH_ID,
    SECTION,
    PRIORITY,
    SEVERITY
  };

namespace PatchFilterKeyMapper
{
AWS_SSM_API PatchFilterKey GetPatchFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchFilterKey(PatchFilterKey value);
} // namespace PatchFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
