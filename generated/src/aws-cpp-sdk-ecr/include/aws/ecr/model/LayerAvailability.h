﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class LayerAvailability
  {
    NOT_SET,
    AVAILABLE,
    UNAVAILABLE
  };

namespace LayerAvailabilityMapper
{
AWS_ECR_API LayerAvailability GetLayerAvailabilityForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForLayerAvailability(LayerAvailability value);
} // namespace LayerAvailabilityMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
