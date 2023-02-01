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
  enum class StatusType
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace StatusTypeMapper
{
AWS_LIGHTSAIL_API StatusType GetStatusTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForStatusType(StatusType value);
} // namespace StatusTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
