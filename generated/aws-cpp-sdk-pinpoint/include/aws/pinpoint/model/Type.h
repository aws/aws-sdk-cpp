/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    ALL,
    ANY,
    NONE
  };

namespace TypeMapper
{
AWS_PINPOINT_API Type GetTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
