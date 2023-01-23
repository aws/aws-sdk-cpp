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
  enum class DomainPackageStatus
  {
    NOT_SET,
    ASSOCIATING,
    ASSOCIATION_FAILED,
    ACTIVE,
    DISSOCIATING,
    DISSOCIATION_FAILED
  };

namespace DomainPackageStatusMapper
{
AWS_ELASTICSEARCHSERVICE_API DomainPackageStatus GetDomainPackageStatusForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForDomainPackageStatus(DomainPackageStatus value);
} // namespace DomainPackageStatusMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
