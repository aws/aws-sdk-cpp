/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class BlueprintType
  {
    NOT_SET,
    os,
    app
  };

namespace BlueprintTypeMapper
{
AWS_LIGHTSAIL_API BlueprintType GetBlueprintTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForBlueprintType(BlueprintType value);
} // namespace BlueprintTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
