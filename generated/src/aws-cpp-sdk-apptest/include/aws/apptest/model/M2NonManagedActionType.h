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
  enum class M2NonManagedActionType
  {
    NOT_SET,
    Configure,
    Deconfigure
  };

namespace M2NonManagedActionTypeMapper
{
AWS_APPTEST_API M2NonManagedActionType GetM2NonManagedActionTypeForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForM2NonManagedActionType(M2NonManagedActionType value);
} // namespace M2NonManagedActionTypeMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
