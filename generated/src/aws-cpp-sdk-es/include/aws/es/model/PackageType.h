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
  enum class PackageType
  {
    NOT_SET,
    TXT_DICTIONARY
  };

namespace PackageTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API PackageType GetPackageTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForPackageType(PackageType value);
} // namespace PackageTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
