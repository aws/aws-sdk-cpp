/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class KeyStorageSecurityStandard
  {
    NOT_SET,
    FIPS_140_2_LEVEL_2_OR_HIGHER,
    FIPS_140_2_LEVEL_3_OR_HIGHER
  };

namespace KeyStorageSecurityStandardMapper
{
AWS_ACMPCA_API KeyStorageSecurityStandard GetKeyStorageSecurityStandardForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForKeyStorageSecurityStandard(KeyStorageSecurityStandard value);
} // namespace KeyStorageSecurityStandardMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
