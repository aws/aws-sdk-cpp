/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectClient.h>

#include <algorithm>

namespace Aws {
namespace EC2InstanceConnect {

template <typename DerivedClient = EC2InstanceConnectClient>
class EC2InstanceConnectWaiter {
 public:
};
}  // namespace EC2InstanceConnect
}  // namespace Aws
