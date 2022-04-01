/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class FacetAttributeType
  {
    NOT_SET,
    STRING,
    BINARY,
    BOOLEAN,
    NUMBER,
    DATETIME,
    VARIANT
  };

namespace FacetAttributeTypeMapper
{
AWS_CLOUDDIRECTORY_API FacetAttributeType GetFacetAttributeTypeForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForFacetAttributeType(FacetAttributeType value);
} // namespace FacetAttributeTypeMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
