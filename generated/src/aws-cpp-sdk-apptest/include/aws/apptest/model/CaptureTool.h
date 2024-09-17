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
  enum class CaptureTool
  {
    NOT_SET,
    Precisely,
    AWS_DMS
  };

namespace CaptureToolMapper
{
AWS_APPTEST_API CaptureTool GetCaptureToolForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForCaptureTool(CaptureTool value);
} // namespace CaptureToolMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
