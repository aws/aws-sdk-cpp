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
  enum class SortOrderType
  {
    NOT_SET,
    asc,
    desc
  };

namespace SortOrderTypeMapper
{
AWS_SECRETSMANAGER_API SortOrderType GetSortOrderTypeForName(const Aws::String& name);

AWS_SECRETSMANAGER_API Aws::String GetNameForSortOrderType(SortOrderType value);
} // namespace SortOrderTypeMapper
} // namespace Model
} // namespace SecretsManager
} // namespace Aws
