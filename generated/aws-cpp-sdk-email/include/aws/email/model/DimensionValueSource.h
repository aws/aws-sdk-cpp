/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class DimensionValueSource
  {
    NOT_SET,
    messageTag,
    emailHeader,
    linkTag
  };

namespace DimensionValueSourceMapper
{
AWS_SES_API DimensionValueSource GetDimensionValueSourceForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForDimensionValueSource(DimensionValueSource value);
} // namespace DimensionValueSourceMapper
} // namespace Model
} // namespace SES
} // namespace Aws
