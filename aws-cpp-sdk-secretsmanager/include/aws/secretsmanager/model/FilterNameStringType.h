/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{
  enum class FilterNameStringType
  {
    NOT_SET,
    description,
    name,
    tag_key,
    tag_value,
    primary_region,
    owning_service,
    all
  };

namespace FilterNameStringTypeMapper
{
AWS_SECRETSMANAGER_API FilterNameStringType GetFilterNameStringTypeForName(const Aws::String& name);

AWS_SECRETSMANAGER_API Aws::String GetNameForFilterNameStringType(FilterNameStringType value);
} // namespace FilterNameStringTypeMapper
} // namespace Model
} // namespace SecretsManager
} // namespace Aws
