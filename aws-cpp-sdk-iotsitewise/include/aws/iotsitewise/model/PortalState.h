/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class PortalState
  {
    NOT_SET,
    CREATING,
    UPDATING,
    DELETING,
    ACTIVE,
    FAILED
  };

namespace PortalStateMapper
{
AWS_IOTSITEWISE_API PortalState GetPortalStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForPortalState(PortalState value);
} // namespace PortalStateMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
