/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DAX
{
namespace Model
{
  enum class NetworkType
  {
    NOT_SET,
    ipv4,
    ipv6,
    dual_stack
  };

namespace NetworkTypeMapper
{
AWS_DAX_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_DAX_API Aws::String GetNameForNetworkType(NetworkType value);
} // namespace NetworkTypeMapper
} // namespace Model
} // namespace DAX
} // namespace Aws
