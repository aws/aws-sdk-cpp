/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{
  enum class M2NonManagedRuntime
  {
    NOT_SET,
    BluAge
  };

namespace M2NonManagedRuntimeMapper
{
AWS_APPTEST_API M2NonManagedRuntime GetM2NonManagedRuntimeForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForM2NonManagedRuntime(M2NonManagedRuntime value);
} // namespace M2NonManagedRuntimeMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
