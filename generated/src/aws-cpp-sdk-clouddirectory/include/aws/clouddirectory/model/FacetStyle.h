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
  enum class FacetStyle
  {
    NOT_SET,
    STATIC_,
    DYNAMIC
  };

namespace FacetStyleMapper
{
AWS_CLOUDDIRECTORY_API FacetStyle GetFacetStyleForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForFacetStyle(FacetStyle value);
} // namespace FacetStyleMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
