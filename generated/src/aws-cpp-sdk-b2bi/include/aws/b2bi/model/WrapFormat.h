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
  enum class WrapFormat
  {
    NOT_SET,
    SEGMENT,
    ONE_LINE,
    LINE_LENGTH
  };

namespace WrapFormatMapper
{
AWS_B2BI_API WrapFormat GetWrapFormatForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForWrapFormat(WrapFormat value);
} // namespace WrapFormatMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
