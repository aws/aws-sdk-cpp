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
  enum class ValidatorType
  {
    NOT_SET,
    JSON_SCHEMA,
    LAMBDA
  };

namespace ValidatorTypeMapper
{
AWS_APPCONFIG_API ValidatorType GetValidatorTypeForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForValidatorType(ValidatorType value);
} // namespace ValidatorTypeMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
