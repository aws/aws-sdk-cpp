/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{
  enum class ContinuousDeploymentPolicyType
  {
    NOT_SET,
    SingleWeight,
    SingleHeader
  };

namespace ContinuousDeploymentPolicyTypeMapper
{
AWS_CLOUDFRONT_API ContinuousDeploymentPolicyType GetContinuousDeploymentPolicyTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForContinuousDeploymentPolicyType(ContinuousDeploymentPolicyType value);
} // namespace ContinuousDeploymentPolicyTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
