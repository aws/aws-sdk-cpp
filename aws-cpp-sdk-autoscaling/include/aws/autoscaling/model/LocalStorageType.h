/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class LocalStorageType
  {
    NOT_SET,
    hdd,
    ssd
  };

namespace LocalStorageTypeMapper
{
AWS_AUTOSCALING_API LocalStorageType GetLocalStorageTypeForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForLocalStorageType(LocalStorageType value);
} // namespace LocalStorageTypeMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
