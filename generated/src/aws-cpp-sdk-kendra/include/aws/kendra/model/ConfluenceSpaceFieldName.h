/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class ConfluenceSpaceFieldName
  {
    NOT_SET,
    DISPLAY_URL,
    ITEM_TYPE,
    SPACE_KEY,
    URL
  };

namespace ConfluenceSpaceFieldNameMapper
{
AWS_KENDRA_API ConfluenceSpaceFieldName GetConfluenceSpaceFieldNameForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForConfluenceSpaceFieldName(ConfluenceSpaceFieldName value);
} // namespace ConfluenceSpaceFieldNameMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
