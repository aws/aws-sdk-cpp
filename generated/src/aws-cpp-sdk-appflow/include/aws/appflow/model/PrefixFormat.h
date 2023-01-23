/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class PrefixFormat
  {
    NOT_SET,
    YEAR,
    MONTH,
    DAY,
    HOUR,
    MINUTE
  };

namespace PrefixFormatMapper
{
AWS_APPFLOW_API PrefixFormat GetPrefixFormatForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForPrefixFormat(PrefixFormat value);
} // namespace PrefixFormatMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
