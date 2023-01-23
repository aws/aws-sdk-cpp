/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class UserTrustProviderType
  {
    NOT_SET,
    iam_identity_center,
    oidc
  };

namespace UserTrustProviderTypeMapper
{
AWS_EC2_API UserTrustProviderType GetUserTrustProviderTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForUserTrustProviderType(UserTrustProviderType value);
} // namespace UserTrustProviderTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
