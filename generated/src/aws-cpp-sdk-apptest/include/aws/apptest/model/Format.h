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
  enum class Format
  {
    NOT_SET,
    FIXED,
    VARIABLE,
    LINE_SEQUENTIAL
  };

namespace FormatMapper
{
AWS_APPTEST_API Format GetFormatForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
