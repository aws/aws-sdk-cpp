/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class NetworkType
  {
    NOT_SET,
    Dual_stack,
    IPv4,
    IPv6
  };

namespace NetworkTypeMapper
{
AWS_DIRECTORYSERVICE_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForNetworkType(NetworkType value);
} // namespace NetworkTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
