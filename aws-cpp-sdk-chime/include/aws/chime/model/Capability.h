/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class Capability
  {
    NOT_SET,
    Voice,
    SMS
  };

namespace CapabilityMapper
{
AWS_CHIME_API Capability GetCapabilityForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForCapability(Capability value);
} // namespace CapabilityMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
