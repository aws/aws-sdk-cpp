/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class EndpointType
  {
    NOT_SET,
    HOME
  };

namespace EndpointTypeMapper
{
AWS_KENDRA_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForEndpointType(EndpointType value);
} // namespace EndpointTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
