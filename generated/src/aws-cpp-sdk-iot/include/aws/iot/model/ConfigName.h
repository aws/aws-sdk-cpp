/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ConfigName
  {
    NOT_SET,
    CERT_AGE_THRESHOLD_IN_DAYS,
    CERT_EXPIRATION_THRESHOLD_IN_DAYS
  };

namespace ConfigNameMapper
{
AWS_IOT_API ConfigName GetConfigNameForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForConfigName(ConfigName value);
} // namespace ConfigNameMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
