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
  enum class IdNamespaceType
  {
    NOT_SET,
    SOURCE,
    TARGET
  };

namespace IdNamespaceTypeMapper
{
AWS_ENTITYRESOLUTION_API IdNamespaceType GetIdNamespaceTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForIdNamespaceType(IdNamespaceType value);
} // namespace IdNamespaceTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
