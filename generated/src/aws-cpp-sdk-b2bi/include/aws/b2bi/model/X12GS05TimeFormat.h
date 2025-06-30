/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{
  enum class X12GS05TimeFormat
  {
    NOT_SET,
    HHMM,
    HHMMSS,
    HHMMSSDD
  };

namespace X12GS05TimeFormatMapper
{
AWS_B2BI_API X12GS05TimeFormat GetX12GS05TimeFormatForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForX12GS05TimeFormat(X12GS05TimeFormat value);
} // namespace X12GS05TimeFormatMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
