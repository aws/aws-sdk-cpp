/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class SiteState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    UPDATING
  };

namespace SiteStateMapper
{
AWS_NETWORKMANAGER_API SiteState GetSiteStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForSiteState(SiteState value);
} // namespace SiteStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
