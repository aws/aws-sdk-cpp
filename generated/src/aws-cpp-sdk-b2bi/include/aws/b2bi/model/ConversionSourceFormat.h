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
  enum class ConversionSourceFormat
  {
    NOT_SET,
    JSON,
    XML
  };

namespace ConversionSourceFormatMapper
{
AWS_B2BI_API ConversionSourceFormat GetConversionSourceFormatForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForConversionSourceFormat(ConversionSourceFormat value);
} // namespace ConversionSourceFormatMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
