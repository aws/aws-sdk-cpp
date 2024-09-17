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
  enum class M2ManagedRuntime
  {
    NOT_SET,
    MicroFocus
  };

namespace M2ManagedRuntimeMapper
{
AWS_APPTEST_API M2ManagedRuntime GetM2ManagedRuntimeForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForM2ManagedRuntime(M2ManagedRuntime value);
} // namespace M2ManagedRuntimeMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
