/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
{
namespace Model
{
  enum class IntendedUse
  {
    NOT_SET,
    SingleUse,
    Storage
  };

namespace IntendedUseMapper
{
AWS_LOCATIONSERVICE_API IntendedUse GetIntendedUseForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForIntendedUse(IntendedUse value);
} // namespace IntendedUseMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
