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
  enum class BadRequestReason
  {
    NOT_SET,
    InvalidConfiguration
  };

namespace BadRequestReasonMapper
{
AWS_APPCONFIG_API BadRequestReason GetBadRequestReasonForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForBadRequestReason(BadRequestReason value);
} // namespace BadRequestReasonMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
