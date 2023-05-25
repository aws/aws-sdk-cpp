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
  enum class ResourceOwner
  {
    NOT_SET,
    SELF,
    OTHER_ACCOUNTS
  };

namespace ResourceOwnerMapper
{
AWS_ACMPCA_API ResourceOwner GetResourceOwnerForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForResourceOwner(ResourceOwner value);
} // namespace ResourceOwnerMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
