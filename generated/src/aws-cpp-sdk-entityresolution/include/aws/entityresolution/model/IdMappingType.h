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
  enum class IdMappingType
  {
    NOT_SET,
    PROVIDER
  };

namespace IdMappingTypeMapper
{
AWS_ENTITYRESOLUTION_API IdMappingType GetIdMappingTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForIdMappingType(IdMappingType value);
} // namespace IdMappingTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
