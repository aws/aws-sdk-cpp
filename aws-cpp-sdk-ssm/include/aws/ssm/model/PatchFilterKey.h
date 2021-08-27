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
    ARCH,
    ADVISORY_ID,
    BUGZILLA_ID,
    PATCH_SET,
    PRODUCT,
    PRODUCT_FAMILY,
    CLASSIFICATION,
    CVE_ID,
    EPOCH,
    MSRC_SEVERITY,
    NAME,
    PATCH_ID,
    SECTION,
    PRIORITY,
    REPOSITORY,
    RELEASE,
    SEVERITY,
    SECURITY,
    VERSION
  };

namespace PatchFilterKeyMapper
{
AWS_SSM_API PatchFilterKey GetPatchFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchFilterKey(PatchFilterKey value);
} // namespace PatchFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
