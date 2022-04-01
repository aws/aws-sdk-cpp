/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class DisruptionType
  {
    NOT_SET,
    Software,
    Hardware,
    AZ,
    Region
  };

namespace DisruptionTypeMapper
{
AWS_RESILIENCEHUB_API DisruptionType GetDisruptionTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForDisruptionType(DisruptionType value);
} // namespace DisruptionTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
