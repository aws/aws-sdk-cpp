/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
  enum class RollbackOnDisable
  {
    NOT_SET,
    NO_ROLLBACK,
    DEFAULT_ROLLBACK
  };

namespace RollbackOnDisableMapper
{
AWS_ELASTICSEARCHSERVICE_API RollbackOnDisable GetRollbackOnDisableForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForRollbackOnDisable(RollbackOnDisable value);
} // namespace RollbackOnDisableMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
