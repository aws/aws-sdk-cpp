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
  enum class ConversionTargetFormat
  {
    NOT_SET,
    X12
  };

namespace ConversionTargetFormatMapper
{
AWS_B2BI_API ConversionTargetFormat GetConversionTargetFormatForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForConversionTargetFormat(ConversionTargetFormat value);
} // namespace ConversionTargetFormatMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
