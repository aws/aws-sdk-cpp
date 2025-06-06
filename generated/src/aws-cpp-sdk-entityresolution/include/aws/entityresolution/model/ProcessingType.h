﻿/**
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
  enum class ProcessingType
  {
    NOT_SET,
    CONSISTENT,
    EVENTUAL,
    EVENTUAL_NO_LOOKUP
  };

namespace ProcessingTypeMapper
{
AWS_ENTITYRESOLUTION_API ProcessingType GetProcessingTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForProcessingType(ProcessingType value);
} // namespace ProcessingTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
