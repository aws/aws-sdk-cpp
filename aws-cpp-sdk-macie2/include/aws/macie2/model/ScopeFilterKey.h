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
  enum class ScopeFilterKey
  {
    NOT_SET,
    BUCKET_CREATION_DATE,
    OBJECT_EXTENSION,
    OBJECT_LAST_MODIFIED_DATE,
    OBJECT_SIZE,
    TAG
  };

namespace ScopeFilterKeyMapper
{
AWS_MACIE2_API ScopeFilterKey GetScopeFilterKeyForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForScopeFilterKey(ScopeFilterKey value);
} // namespace ScopeFilterKeyMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
