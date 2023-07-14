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
  enum class SopServiceType
  {
    NOT_SET,
    SSM
  };

namespace SopServiceTypeMapper
{
AWS_RESILIENCEHUB_API SopServiceType GetSopServiceTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForSopServiceType(SopServiceType value);
} // namespace SopServiceTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
