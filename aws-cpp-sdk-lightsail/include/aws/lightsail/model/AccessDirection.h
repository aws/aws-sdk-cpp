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
  enum class AccessDirection
  {
    NOT_SET,
    inbound,
    outbound
  };

namespace AccessDirectionMapper
{
AWS_LIGHTSAIL_API AccessDirection GetAccessDirectionForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForAccessDirection(AccessDirection value);
} // namespace AccessDirectionMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
