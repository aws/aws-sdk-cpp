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
  enum class Include
  {
    NOT_SET,
    ALL,
    ANY,
    NONE
  };

namespace IncludeMapper
{
AWS_PINPOINT_API Include GetIncludeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForInclude(Include value);
} // namespace IncludeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
