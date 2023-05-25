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
  enum class AccessType
  {
    NOT_SET,
    public_,
    private_
  };

namespace AccessTypeMapper
{
AWS_LIGHTSAIL_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForAccessType(AccessType value);
} // namespace AccessTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
