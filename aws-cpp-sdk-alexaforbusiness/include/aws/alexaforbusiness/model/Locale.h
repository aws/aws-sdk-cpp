/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class Locale
  {
    NOT_SET,
    en_US
  };

namespace LocaleMapper
{
AWS_ALEXAFORBUSINESS_API Locale GetLocaleForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForLocale(Locale value);
} // namespace LocaleMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
