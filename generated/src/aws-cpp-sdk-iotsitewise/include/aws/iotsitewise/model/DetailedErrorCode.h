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
  enum class DetailedErrorCode
  {
    NOT_SET,
    INCOMPATIBLE_COMPUTE_LOCATION,
    INCOMPATIBLE_FORWARDING_CONFIGURATION
  };

namespace DetailedErrorCodeMapper
{
AWS_IOTSITEWISE_API DetailedErrorCode GetDetailedErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForDetailedErrorCode(DetailedErrorCode value);
} // namespace DetailedErrorCodeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
