/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IVS
{
namespace Model
{
  enum class MultitrackMaximumResolution
  {
    NOT_SET,
    SD,
    HD,
    FULL_HD
  };

namespace MultitrackMaximumResolutionMapper
{
AWS_IVS_API MultitrackMaximumResolution GetMultitrackMaximumResolutionForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForMultitrackMaximumResolution(MultitrackMaximumResolution value);
} // namespace MultitrackMaximumResolutionMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
