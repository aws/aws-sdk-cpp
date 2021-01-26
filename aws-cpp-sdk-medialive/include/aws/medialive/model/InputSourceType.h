/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class InputSourceType
  {
    NOT_SET,
    STATIC_,
    DYNAMIC
  };

namespace InputSourceTypeMapper
{
AWS_MEDIALIVE_API InputSourceType GetInputSourceTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputSourceType(InputSourceType value);
} // namespace InputSourceTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
