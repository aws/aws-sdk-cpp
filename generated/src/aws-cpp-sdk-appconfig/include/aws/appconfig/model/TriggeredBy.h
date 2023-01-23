/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{
  enum class TriggeredBy
  {
    NOT_SET,
    USER,
    APPCONFIG,
    CLOUDWATCH_ALARM,
    INTERNAL_ERROR
  };

namespace TriggeredByMapper
{
AWS_APPCONFIG_API TriggeredBy GetTriggeredByForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForTriggeredBy(TriggeredBy value);
} // namespace TriggeredByMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
