/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ProductionVariantInstanceType
  {
    NOT_SET,
    ml_t2_medium,
    ml_t2_large,
    ml_t2_xlarge,
    ml_t2_2xlarge,
    ml_m4_xlarge,
    ml_m4_2xlarge,
    ml_m4_4xlarge,
    ml_m4_10xlarge,
    ml_m4_16xlarge,
    ml_m5_large,
    ml_m5_xlarge,
    ml_m5_2xlarge,
    ml_m5_4xlarge,
    ml_m5_12xlarge,
    ml_m5_24xlarge,
    ml_m5d_large,
    ml_m5d_xlarge,
    ml_m5d_2xlarge,
    ml_m5d_4xlarge,
    ml_m5d_12xlarge,
    ml_m5d_24xlarge,
    ml_c4_large,
    ml_c4_xlarge,
    ml_c4_2xlarge,
    ml_c4_4xlarge,
    ml_c4_8xlarge,
    ml_p2_xlarge,
    ml_p2_8xlarge,
    ml_p2_16xlarge,
    ml_p3_2xlarge,
    ml_p3_8xlarge,
    ml_p3_16xlarge,
    ml_c5_large,
    ml_c5_xlarge,
    ml_c5_2xlarge,
    ml_c5_4xlarge,
    ml_c5_9xlarge,
    ml_c5_18xlarge,
    ml_c5d_large,
    ml_c5d_xlarge,
    ml_c5d_2xlarge,
    ml_c5d_4xlarge,
    ml_c5d_9xlarge,
    ml_c5d_18xlarge,
    ml_g4dn_xlarge,
    ml_g4dn_2xlarge,
    ml_g4dn_4xlarge,
    ml_g4dn_8xlarge,
    ml_g4dn_12xlarge,
    ml_g4dn_16xlarge,
    ml_r5_large,
    ml_r5_xlarge,
    ml_r5_2xlarge,
    ml_r5_4xlarge,
    ml_r5_12xlarge,
    ml_r5_24xlarge,
    ml_r5d_large,
    ml_r5d_xlarge,
    ml_r5d_2xlarge,
    ml_r5d_4xlarge,
    ml_r5d_12xlarge,
    ml_r5d_24xlarge,
    ml_inf1_xlarge,
    ml_inf1_2xlarge,
    ml_inf1_6xlarge,
    ml_inf1_24xlarge
  };

namespace ProductionVariantInstanceTypeMapper
{
AWS_SAGEMAKER_API ProductionVariantInstanceType GetProductionVariantInstanceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProductionVariantInstanceType(ProductionVariantInstanceType value);
} // namespace ProductionVariantInstanceTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
