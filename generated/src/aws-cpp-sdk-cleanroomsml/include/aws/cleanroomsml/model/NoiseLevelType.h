/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class NoiseLevelType
  {
    NOT_SET,
    HIGH,
    MEDIUM,
    LOW,
    NONE
  };

namespace NoiseLevelTypeMapper
{
AWS_CLEANROOMSML_API NoiseLevelType GetNoiseLevelTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForNoiseLevelType(NoiseLevelType value);
} // namespace NoiseLevelTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
