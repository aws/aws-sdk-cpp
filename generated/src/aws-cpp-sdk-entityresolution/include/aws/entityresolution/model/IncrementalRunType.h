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
  enum class IncrementalRunType
  {
    NOT_SET,
    IMMEDIATE
  };

namespace IncrementalRunTypeMapper
{
AWS_ENTITYRESOLUTION_API IncrementalRunType GetIncrementalRunTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForIncrementalRunType(IncrementalRunType value);
} // namespace IncrementalRunTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
