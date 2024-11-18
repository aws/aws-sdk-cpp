/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class DataFormat
  {
    NOT_SET,
    CSV,
    JSONL,
    ORC
  };

namespace DataFormatMapper
{
AWS_CUSTOMERPROFILES_API DataFormat GetDataFormatForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForDataFormat(DataFormat value);
} // namespace DataFormatMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
