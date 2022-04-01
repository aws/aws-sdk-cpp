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
  enum class ComputeLocation
  {
    NOT_SET,
    EDGE,
    CLOUD
  };

namespace ComputeLocationMapper
{
AWS_IOTSITEWISE_API ComputeLocation GetComputeLocationForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForComputeLocation(ComputeLocation value);
} // namespace ComputeLocationMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
