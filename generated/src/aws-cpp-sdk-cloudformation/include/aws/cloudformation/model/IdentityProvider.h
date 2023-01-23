/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class IdentityProvider
  {
    NOT_SET,
    AWS_Marketplace,
    GitHub,
    Bitbucket
  };

namespace IdentityProviderMapper
{
AWS_CLOUDFORMATION_API IdentityProvider GetIdentityProviderForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForIdentityProvider(IdentityProvider value);
} // namespace IdentityProviderMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
