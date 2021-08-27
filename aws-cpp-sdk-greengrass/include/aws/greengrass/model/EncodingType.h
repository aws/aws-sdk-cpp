/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Greengrass
{
namespace Model
{
  enum class EncodingType
  {
    NOT_SET,
    binary,
    json
  };

namespace EncodingTypeMapper
{
AWS_GREENGRASS_API EncodingType GetEncodingTypeForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForEncodingType(EncodingType value);
} // namespace EncodingTypeMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
