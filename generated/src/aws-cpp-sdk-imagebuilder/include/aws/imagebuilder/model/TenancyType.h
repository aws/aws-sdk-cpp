/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class TenancyType
  {
    NOT_SET,
    default_,
    dedicated,
    host
  };

namespace TenancyTypeMapper
{
AWS_IMAGEBUILDER_API TenancyType GetTenancyTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForTenancyType(TenancyType value);
} // namespace TenancyTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
