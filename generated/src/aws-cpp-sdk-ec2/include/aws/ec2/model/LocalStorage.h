/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class LocalStorage
  {
    NOT_SET,
    included,
    required,
    excluded
  };

namespace LocalStorageMapper
{
AWS_EC2_API LocalStorage GetLocalStorageForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForLocalStorage(LocalStorage value);
} // namespace LocalStorageMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
