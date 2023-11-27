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
  enum class X12Version
  {
    NOT_SET,
    VERSION_4010,
    VERSION_4030,
    VERSION_5010
  };

namespace X12VersionMapper
{
AWS_B2BI_API X12Version GetX12VersionForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForX12Version(X12Version value);
} // namespace X12VersionMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
