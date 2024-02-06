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
  enum class DomainProcessingStatusType
  {
    NOT_SET,
    Creating,
    Active,
    Modifying,
    UpgradingEngineVersion,
    UpdatingServiceSoftware,
    Isolated,
    Deleting
  };

namespace DomainProcessingStatusTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API DomainProcessingStatusType GetDomainProcessingStatusTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForDomainProcessingStatusType(DomainProcessingStatusType value);
} // namespace DomainProcessingStatusTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
