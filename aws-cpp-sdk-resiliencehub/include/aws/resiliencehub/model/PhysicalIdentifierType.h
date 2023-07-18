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
  enum class PhysicalIdentifierType
  {
    NOT_SET,
    Arn,
    Native
  };

namespace PhysicalIdentifierTypeMapper
{
AWS_RESILIENCEHUB_API PhysicalIdentifierType GetPhysicalIdentifierTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForPhysicalIdentifierType(PhysicalIdentifierType value);
} // namespace PhysicalIdentifierTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
