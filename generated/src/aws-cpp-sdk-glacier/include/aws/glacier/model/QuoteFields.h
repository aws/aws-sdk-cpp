/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class QuoteFields
  {
    NOT_SET,
    ALWAYS,
    ASNEEDED
  };

namespace QuoteFieldsMapper
{
AWS_GLACIER_API QuoteFields GetQuoteFieldsForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForQuoteFields(QuoteFields value);
} // namespace QuoteFieldsMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
