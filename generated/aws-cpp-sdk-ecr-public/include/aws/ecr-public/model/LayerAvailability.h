/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECRPublic
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
AWS_ECRPUBLIC_API LayerAvailability GetLayerAvailabilityForName(const Aws::String& name);

AWS_ECRPUBLIC_API Aws::String GetNameForLayerAvailability(LayerAvailability value);
} // namespace LayerAvailabilityMapper
} // namespace Model
} // namespace ECRPublic
} // namespace Aws
