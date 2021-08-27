/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class ContactLanguage
  {
    NOT_SET,
    EN,
    JA
  };

namespace ContactLanguageMapper
{
AWS_SESV2_API ContactLanguage GetContactLanguageForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForContactLanguage(ContactLanguage value);
} // namespace ContactLanguageMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
