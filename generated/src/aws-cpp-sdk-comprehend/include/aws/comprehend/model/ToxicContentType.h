/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class ToxicContentType
  {
    NOT_SET,
    GRAPHIC,
    HARASSMENT_OR_ABUSE,
    HATE_SPEECH,
    INSULT,
    PROFANITY,
    SEXUAL,
    VIOLENCE_OR_THREAT
  };

namespace ToxicContentTypeMapper
{
AWS_COMPREHEND_API ToxicContentType GetToxicContentTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForToxicContentType(ToxicContentType value);
} // namespace ToxicContentTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
