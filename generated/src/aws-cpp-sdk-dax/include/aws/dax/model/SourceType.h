/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DAX
{
namespace Model
{
  enum class SourceType
  {
    NOT_SET,
    CLUSTER,
    PARAMETER_GROUP,
    SUBNET_GROUP
  };

namespace SourceTypeMapper
{
AWS_DAX_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_DAX_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace DAX
} // namespace Aws
