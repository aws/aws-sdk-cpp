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
  enum class LocalStorage
  {
    NOT_SET,
    included,
    excluded,
    required
  };

namespace LocalStorageMapper
{
AWS_AUTOSCALING_API LocalStorage GetLocalStorageForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForLocalStorage(LocalStorage value);
} // namespace LocalStorageMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
