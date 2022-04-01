/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class NetworkSiteFilterKeys
  {
    NOT_SET,
    STATUS
  };

namespace NetworkSiteFilterKeysMapper
{
AWS_PRIVATENETWORKS_API NetworkSiteFilterKeys GetNetworkSiteFilterKeysForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForNetworkSiteFilterKeys(NetworkSiteFilterKeys value);
} // namespace NetworkSiteFilterKeysMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
