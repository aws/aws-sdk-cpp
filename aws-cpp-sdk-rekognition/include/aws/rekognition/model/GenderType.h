﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    MALE,
    FEMALE
  };

namespace GenderTypeMapper
{
AWS_REKOGNITION_API GenderType GetGenderTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForGenderType(GenderType value);
} // namespace GenderTypeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
