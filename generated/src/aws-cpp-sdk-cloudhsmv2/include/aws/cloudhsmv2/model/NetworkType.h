/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{
  enum class NetworkType
  {
    NOT_SET,
    IPV4,
    DUALSTACK
  };

namespace NetworkTypeMapper
{
AWS_CLOUDHSMV2_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_CLOUDHSMV2_API Aws::String GetNameForNetworkType(NetworkType value);
} // namespace NetworkTypeMapper
} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
