/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class NetworkType
  {
    NOT_SET,
    IPV4,
    DUAL
  };

namespace NetworkTypeMapper
{
AWS_FSX_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForNetworkType(NetworkType value);
} // namespace NetworkTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
