/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{
  enum class CapabilityType
  {
    NOT_SET,
    edi
  };

namespace CapabilityTypeMapper
{
AWS_B2BI_API CapabilityType GetCapabilityTypeForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForCapabilityType(CapabilityType value);
} // namespace CapabilityTypeMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
