/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    TagContext,
    RequestContext
  };

namespace TypeMapper
{
AWS_CLOUDTRAIL_API Type GetTypeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
