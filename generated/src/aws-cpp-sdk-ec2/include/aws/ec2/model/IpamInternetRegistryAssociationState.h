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
enum class IpamInternetRegistryAssociationState {
  NOT_SET,
  pending_enable,
  create_in_progress,
  create_failed,
  enable_in_progress,
  enable_complete,
  enable_failed,
  delete_in_progress,
  delete_complete,
  delete_failed
};

namespace IpamInternetRegistryAssociationStateMapper {
AWS_EC2_API IpamInternetRegistryAssociationState GetIpamInternetRegistryAssociationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamInternetRegistryAssociationState(IpamInternetRegistryAssociationState value);
}  // namespace IpamInternetRegistryAssociationStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
