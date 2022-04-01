/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class Locale
  {
    NOT_SET,
    DE_DE,
    EN_US,
    EN_GB,
    ES_ES,
    FR_FR,
    IT_IT,
    JA_JP,
    KO_KR,
    PT_BR,
    ZH_CN,
    ZH_TW
  };

namespace LocaleMapper
{
AWS_DEVOPSGURU_API Locale GetLocaleForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForLocale(Locale value);
} // namespace LocaleMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
