/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class SecondaryNetworkState {
  NOT_SET,
  create_in_progress,
  create_complete,
  create_failed,
  delete_in_progress,
  delete_complete,
  delete_failed
};

namespace SecondaryNetworkStateMapper {
AWS_EC2_API SecondaryNetworkState GetSecondaryNetworkStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSecondaryNetworkState(SecondaryNetworkState value);
}  // namespace SecondaryNetworkStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
