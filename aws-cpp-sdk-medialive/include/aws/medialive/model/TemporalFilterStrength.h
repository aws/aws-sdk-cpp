/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class TemporalFilterStrength
  {
    NOT_SET,
    AUTO,
    STRENGTH_1,
    STRENGTH_10,
    STRENGTH_11,
    STRENGTH_12,
    STRENGTH_13,
    STRENGTH_14,
    STRENGTH_15,
    STRENGTH_16,
    STRENGTH_2,
    STRENGTH_3,
    STRENGTH_4,
    STRENGTH_5,
    STRENGTH_6,
    STRENGTH_7,
    STRENGTH_8,
    STRENGTH_9
  };

namespace TemporalFilterStrengthMapper
{
AWS_MEDIALIVE_API TemporalFilterStrength GetTemporalFilterStrengthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForTemporalFilterStrength(TemporalFilterStrength value);
} // namespace TemporalFilterStrengthMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
