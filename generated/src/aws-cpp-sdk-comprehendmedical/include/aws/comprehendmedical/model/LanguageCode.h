/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    en
  };

namespace LanguageCodeMapper
{
AWS_COMPREHENDMEDICAL_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
