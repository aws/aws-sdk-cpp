/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class RegionType
  {
    NOT_SET,
    Primary,
    Additional
  };

namespace RegionTypeMapper
{
AWS_DIRECTORYSERVICE_API RegionType GetRegionTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForRegionType(RegionType value);
} // namespace RegionTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
