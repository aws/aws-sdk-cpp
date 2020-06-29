/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Translate
{
namespace Model
{
  enum class TerminologyDataFormat
  {
    NOT_SET,
    CSV,
    TMX
  };

namespace TerminologyDataFormatMapper
{
AWS_TRANSLATE_API TerminologyDataFormat GetTerminologyDataFormatForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForTerminologyDataFormat(TerminologyDataFormat value);
} // namespace TerminologyDataFormatMapper
} // namespace Model
} // namespace Translate
} // namespace Aws
