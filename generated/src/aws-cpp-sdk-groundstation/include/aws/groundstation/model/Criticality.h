/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class Criticality
  {
    NOT_SET,
    PREFERRED,
    REMOVED,
    REQUIRED
  };

namespace CriticalityMapper
{
AWS_GROUNDSTATION_API Criticality GetCriticalityForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForCriticality(Criticality value);
} // namespace CriticalityMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
