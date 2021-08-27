/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PI
{
namespace Model
{
  enum class ServiceType
  {
    NOT_SET,
    RDS
  };

namespace ServiceTypeMapper
{
AWS_PI_API ServiceType GetServiceTypeForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForServiceType(ServiceType value);
} // namespace ServiceTypeMapper
} // namespace Model
} // namespace PI
} // namespace Aws
