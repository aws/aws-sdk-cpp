/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{
  enum class MappingTemplateLanguage
  {
    NOT_SET,
    XSLT,
    JSONATA
  };

namespace MappingTemplateLanguageMapper
{
AWS_B2BI_API MappingTemplateLanguage GetMappingTemplateLanguageForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForMappingTemplateLanguage(MappingTemplateLanguage value);
} // namespace MappingTemplateLanguageMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
