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
  enum class SharedAccess
  {
    NOT_SET,
    EXTERNAL,
    INTERNAL,
    NOT_SHARED,
    UNKNOWN
  };

namespace SharedAccessMapper
{
AWS_MACIE2_API SharedAccess GetSharedAccessForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForSharedAccess(SharedAccess value);
} // namespace SharedAccessMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
