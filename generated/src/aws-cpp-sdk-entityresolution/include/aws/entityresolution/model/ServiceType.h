/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{
  enum class ServiceType
  {
    NOT_SET,
    ASSIGNMENT,
    ID_MAPPING
  };

namespace ServiceTypeMapper
{
AWS_ENTITYRESOLUTION_API ServiceType GetServiceTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForServiceType(ServiceType value);
} // namespace ServiceTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
