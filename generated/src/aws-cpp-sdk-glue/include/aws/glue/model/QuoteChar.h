/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class QuoteChar
  {
    NOT_SET,
    quote,
    quillemet,
    single_quote,
    disabled
  };

namespace QuoteCharMapper
{
AWS_GLUE_API QuoteChar GetQuoteCharForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForQuoteChar(QuoteChar value);
} // namespace QuoteCharMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
