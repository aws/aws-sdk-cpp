﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class GenderType
  {
    NOT_SET,
    Male,
    Female
  };

namespace GenderTypeMapper
{
AWS_REKOGNITION_API GenderType GetGenderTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForGenderType(GenderType value);
} // namespace GenderTypeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
