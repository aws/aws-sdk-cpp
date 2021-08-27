/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ServiceType
  {
    NOT_SET,
    DATA,
    CREDENTIAL_PROVIDER,
    JOBS
  };

namespace ServiceTypeMapper
{
AWS_IOT_API ServiceType GetServiceTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForServiceType(ServiceType value);
} // namespace ServiceTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
