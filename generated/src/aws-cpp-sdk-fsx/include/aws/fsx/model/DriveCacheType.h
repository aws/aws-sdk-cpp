/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class DriveCacheType
  {
    NOT_SET,
    NONE,
    READ
  };

namespace DriveCacheTypeMapper
{
AWS_FSX_API DriveCacheType GetDriveCacheTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDriveCacheType(DriveCacheType value);
} // namespace DriveCacheTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
