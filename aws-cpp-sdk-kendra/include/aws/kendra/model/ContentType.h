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
  enum class ContentType
  {
    NOT_SET,
    PDF,
    HTML,
    MS_WORD,
    PLAIN_TEXT,
    PPT
  };

namespace ContentTypeMapper
{
AWS_KENDRA_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForContentType(ContentType value);
} // namespace ContentTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
