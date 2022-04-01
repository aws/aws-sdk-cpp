/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class StatusFilter
  {
    NOT_SET,
    DEPLOYMENT_SUCCEEDED,
    DEPLOYMENT_ERROR,
    REMOVAL_SUCCEEDED,
    REMOVAL_FAILED,
    PROCESSING_DEPLOYMENT,
    PROCESSING_REMOVAL,
    DEPLOYMENT_FAILED
  };

namespace StatusFilterMapper
{
AWS_PANORAMA_API StatusFilter GetStatusFilterForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForStatusFilter(StatusFilter value);
} // namespace StatusFilterMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
