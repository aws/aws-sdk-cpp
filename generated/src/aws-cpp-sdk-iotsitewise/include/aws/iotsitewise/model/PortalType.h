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
  enum class PortalType
  {
    NOT_SET,
    SITEWISE_PORTAL_V1,
    SITEWISE_PORTAL_V2
  };

namespace PortalTypeMapper
{
AWS_IOTSITEWISE_API PortalType GetPortalTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForPortalType(PortalType value);
} // namespace PortalTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
