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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class Unit
  {
    NOT_SET,
    NONE,
    SECONDS,
    MICRO_SECONDS,
    MILLI_SECONDS,
    BYTES,
    KILO_BYTES,
    MEGA_BYTES,
    GIGA_BYTES,
    TERA_BYTES,
    BITS,
    KILO_BITS,
    MEGA_BITS,
    GIGA_BITS,
    TERA_BITS,
    PERCENT,
    COUNT,
    BYTES_PER_SECOND,
    KILO_BYTES_PER_SECOND,
    MEGA_BYTES_PER_SECOND,
    GIGA_BYTES_PER_SECOND,
    TERA_BYTES_PER_SECOND,
    BITS_PER_SECOND,
    KILO_BITS_PER_SECOND,
    MEGA_BITS_PER_SECOND,
    GIGA_BITS_PER_SECOND,
    TERA_BITS_PER_SECOND,
    COUNT_PER_SECOND
  };

namespace UnitMapper
{
AWS_EMR_API Unit GetUnitForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForUnit(Unit value);
} // namespace UnitMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
