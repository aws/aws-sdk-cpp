/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    SYSTEM,
    CUSTOM
  };

namespace TypeMapper
{
AWS_MEDIACONVERT_API Type GetTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
