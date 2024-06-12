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
  enum class M2ManagedActionType
  {
    NOT_SET,
    Configure,
    Deconfigure
  };

namespace M2ManagedActionTypeMapper
{
AWS_APPTEST_API M2ManagedActionType GetM2ManagedActionTypeForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForM2ManagedActionType(M2ManagedActionType value);
} // namespace M2ManagedActionTypeMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
