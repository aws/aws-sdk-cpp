/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class ElevationReference
  {
    NOT_SET,
    AGL,
    AMSL
  };

namespace ElevationReferenceMapper
{
AWS_PRIVATENETWORKS_API ElevationReference GetElevationReferenceForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForElevationReference(ElevationReference value);
} // namespace ElevationReferenceMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
