/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class Locale
  {
    NOT_SET,
    EN_US
  };

namespace LocaleMapper
{
AWS_INSPECTOR_API Locale GetLocaleForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForLocale(Locale value);
} // namespace LocaleMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
