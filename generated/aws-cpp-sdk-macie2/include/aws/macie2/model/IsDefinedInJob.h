/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class IsDefinedInJob
  {
    NOT_SET,
    TRUE,
    FALSE,
    UNKNOWN
  };

namespace IsDefinedInJobMapper
{
AWS_MACIE2_API IsDefinedInJob GetIsDefinedInJobForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForIsDefinedInJob(IsDefinedInJob value);
} // namespace IsDefinedInJobMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
