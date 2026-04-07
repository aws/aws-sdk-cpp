/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Braket {
namespace Model {
enum class InstanceType {
  NOT_SET,
  ml_t3_large,
  ml_t3_xlarge,
  ml_t3_2xlarge,
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
  ml_c4_xlarge,
  ml_c4_2xlarge,
  ml_c4_4xlarge,
  ml_c4_8xlarge,
  ml_c5_xlarge,
  ml_c5_2xlarge,
  ml_c5_4xlarge,
  ml_c5_9xlarge,
  ml_c5_18xlarge,
  ml_c5n_xlarge,
  ml_c5n_2xlarge,
  ml_c5n_4xlarge,
  ml_c5n_9xlarge,
  ml_c5n_18xlarge,
  ml_p2_xlarge,
  ml_p2_8xlarge,
  ml_p2_16xlarge,
  ml_p3_2xlarge,
  ml_p3_8xlarge,
  ml_p3_16xlarge,
  ml_p3dn_24xlarge,
  ml_p4d_24xlarge,
  ml_g4dn_xlarge,
  ml_g4dn_2xlarge,
  ml_g4dn_4xlarge,
  ml_g4dn_8xlarge,
  ml_g4dn_12xlarge,
  ml_g4dn_16xlarge,
  ml_g6_xlarge,
  ml_g6_2xlarge,
  ml_g6_4xlarge,
  ml_g6_8xlarge,
  ml_g6_12xlarge,
  ml_g6_16xlarge,
  ml_g6_24xlarge,
  ml_g6_48xlarge,
  ml_g6e_xlarge,
  ml_g6e_2xlarge,
  ml_g6e_4xlarge,
  ml_g6e_8xlarge,
  ml_g6e_12xlarge,
  ml_g6e_16xlarge,
  ml_g6e_24xlarge,
  ml_g6e_48xlarge
};

namespace InstanceTypeMapper {
AWS_BRAKET_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForInstanceType(InstanceType value);
}  // namespace InstanceTypeMapper
}  // namespace Model
}  // namespace Braket
}  // namespace Aws
