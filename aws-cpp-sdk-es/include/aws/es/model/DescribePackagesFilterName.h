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
  enum class DescribePackagesFilterName
  {
    NOT_SET,
    PackageID,
    PackageName,
    PackageStatus
  };

namespace DescribePackagesFilterNameMapper
{
AWS_ELASTICSEARCHSERVICE_API DescribePackagesFilterName GetDescribePackagesFilterNameForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForDescribePackagesFilterName(DescribePackagesFilterName value);
} // namespace DescribePackagesFilterNameMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
