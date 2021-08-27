/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Honeycode
{
namespace Model
{
  enum class Format
  {
    NOT_SET,
    AUTO,
    NUMBER,
    CURRENCY,
    DATE,
    TIME,
    DATE_TIME,
    PERCENTAGE,
    TEXT,
    ACCOUNTING,
    CONTACT,
    ROWLINK
  };

namespace FormatMapper
{
AWS_HONEYCODE_API Format GetFormatForName(const Aws::String& name);

AWS_HONEYCODE_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace Honeycode
} // namespace Aws
