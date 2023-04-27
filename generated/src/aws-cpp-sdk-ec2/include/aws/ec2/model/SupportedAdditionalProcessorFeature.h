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
  enum class SupportedAdditionalProcessorFeature
  {
    NOT_SET,
    amd_sev_snp
  };

namespace SupportedAdditionalProcessorFeatureMapper
{
AWS_EC2_API SupportedAdditionalProcessorFeature GetSupportedAdditionalProcessorFeatureForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSupportedAdditionalProcessorFeature(SupportedAdditionalProcessorFeature value);
} // namespace SupportedAdditionalProcessorFeatureMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
