/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class IpAddressType { NOT_SET, IPV4, IPV6, DUAL_STACK };

namespace IpAddressTypeMapper {
AWS_DEVOPSAGENT_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForIpAddressType(IpAddressType value);
}  // namespace IpAddressTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
