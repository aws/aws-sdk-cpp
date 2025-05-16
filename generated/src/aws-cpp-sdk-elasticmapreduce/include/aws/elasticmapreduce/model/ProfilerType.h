/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  enum class ProfilerType
  {
    NOT_SET,
    SHS,
    TEZUI,
    YTS
  };

namespace ProfilerTypeMapper
{
AWS_EMR_API ProfilerType GetProfilerTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForProfilerType(ProfilerType value);
} // namespace ProfilerTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
