/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppMesh
{
namespace Model
{
  enum class DurationUnit
  {
    NOT_SET,
    s,
    ms
  };

namespace DurationUnitMapper
{
AWS_APPMESH_API DurationUnit GetDurationUnitForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForDurationUnit(DurationUnit value);
} // namespace DurationUnitMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
