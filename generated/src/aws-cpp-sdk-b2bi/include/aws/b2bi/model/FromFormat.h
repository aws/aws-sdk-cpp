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
  enum class FromFormat
  {
    NOT_SET,
    X12
  };

namespace FromFormatMapper
{
AWS_B2BI_API FromFormat GetFromFormatForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForFromFormat(FromFormat value);
} // namespace FromFormatMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
