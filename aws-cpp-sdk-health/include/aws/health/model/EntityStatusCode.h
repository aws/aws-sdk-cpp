/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Health
{
namespace Model
{
  enum class EntityStatusCode
  {
    NOT_SET,
    IMPAIRED,
    UNIMPAIRED,
    UNKNOWN
  };

namespace EntityStatusCodeMapper
{
AWS_HEALTH_API EntityStatusCode GetEntityStatusCodeForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEntityStatusCode(EntityStatusCode value);
} // namespace EntityStatusCodeMapper
} // namespace Model
} // namespace Health
} // namespace Aws
