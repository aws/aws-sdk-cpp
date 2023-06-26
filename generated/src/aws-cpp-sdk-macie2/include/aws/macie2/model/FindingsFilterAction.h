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
  enum class FindingsFilterAction
  {
    NOT_SET,
    ARCHIVE,
    NOOP
  };

namespace FindingsFilterActionMapper
{
AWS_MACIE2_API FindingsFilterAction GetFindingsFilterActionForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForFindingsFilterAction(FindingsFilterAction value);
} // namespace FindingsFilterActionMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
