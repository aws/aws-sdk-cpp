/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class ContentType
  {
    NOT_SET,
    PlainText,
    SSML,
    CustomPayload
  };

namespace ContentTypeMapper
{
AWS_LEXMODELBUILDINGSERVICE_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForContentType(ContentType value);
} // namespace ContentTypeMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
