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
  enum class RenditionConfigurationRendition
  {
    NOT_SET,
    FULL_HD,
    HD,
    SD,
    LOWEST_RESOLUTION
  };

namespace RenditionConfigurationRenditionMapper
{
AWS_IVS_API RenditionConfigurationRendition GetRenditionConfigurationRenditionForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForRenditionConfigurationRendition(RenditionConfigurationRendition value);
} // namespace RenditionConfigurationRenditionMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
