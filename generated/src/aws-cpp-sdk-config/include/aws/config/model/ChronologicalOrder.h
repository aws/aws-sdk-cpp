/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ChronologicalOrder
  {
    NOT_SET,
    Reverse,
    Forward
  };

namespace ChronologicalOrderMapper
{
AWS_CONFIGSERVICE_API ChronologicalOrder GetChronologicalOrderForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForChronologicalOrder(ChronologicalOrder value);
} // namespace ChronologicalOrderMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
