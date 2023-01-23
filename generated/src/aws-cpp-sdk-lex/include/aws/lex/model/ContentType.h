/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{
  enum class ContentType
  {
    NOT_SET,
    application_vnd_amazonaws_card_generic
  };

namespace ContentTypeMapper
{
AWS_LEXRUNTIMESERVICE_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_LEXRUNTIMESERVICE_API Aws::String GetNameForContentType(ContentType value);
} // namespace ContentTypeMapper
} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
