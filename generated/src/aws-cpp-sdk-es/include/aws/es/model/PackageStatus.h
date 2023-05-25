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
  enum class PackageStatus
  {
    NOT_SET,
    COPYING,
    COPY_FAILED,
    VALIDATING,
    VALIDATION_FAILED,
    AVAILABLE,
    DELETING,
    DELETED,
    DELETE_FAILED
  };

namespace PackageStatusMapper
{
AWS_ELASTICSEARCHSERVICE_API PackageStatus GetPackageStatusForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForPackageStatus(PackageStatus value);
} // namespace PackageStatusMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
