/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class OpenSearchWarmPartitionInstanceType
  {
    NOT_SET,
    ultrawarm1_medium_search,
    ultrawarm1_large_search,
    ultrawarm1_xlarge_search
  };

namespace OpenSearchWarmPartitionInstanceTypeMapper
{
AWS_OPENSEARCHSERVICE_API OpenSearchWarmPartitionInstanceType GetOpenSearchWarmPartitionInstanceTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForOpenSearchWarmPartitionInstanceType(OpenSearchWarmPartitionInstanceType value);
} // namespace OpenSearchWarmPartitionInstanceTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
