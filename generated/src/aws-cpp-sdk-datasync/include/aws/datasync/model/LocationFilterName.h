/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class LocationFilterName
  {
    NOT_SET,
    LocationUri,
    LocationType,
    CreationTime
  };

namespace LocationFilterNameMapper
{
AWS_DATASYNC_API LocationFilterName GetLocationFilterNameForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForLocationFilterName(LocationFilterName value);
} // namespace LocationFilterNameMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
