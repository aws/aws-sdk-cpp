/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class KxAzMode
  {
    NOT_SET,
    SINGLE,
    MULTI
  };

namespace KxAzModeMapper
{
AWS_FINSPACE_API KxAzMode GetKxAzModeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxAzMode(KxAzMode value);
} // namespace KxAzModeMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
