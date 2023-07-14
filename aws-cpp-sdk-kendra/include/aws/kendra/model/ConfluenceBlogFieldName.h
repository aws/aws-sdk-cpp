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
  enum class ConfluenceBlogFieldName
  {
    NOT_SET,
    AUTHOR,
    DISPLAY_URL,
    ITEM_TYPE,
    LABELS,
    PUBLISH_DATE,
    SPACE_KEY,
    SPACE_NAME,
    URL,
    VERSION
  };

namespace ConfluenceBlogFieldNameMapper
{
AWS_KENDRA_API ConfluenceBlogFieldName GetConfluenceBlogFieldNameForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForConfluenceBlogFieldName(ConfluenceBlogFieldName value);
} // namespace ConfluenceBlogFieldNameMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
