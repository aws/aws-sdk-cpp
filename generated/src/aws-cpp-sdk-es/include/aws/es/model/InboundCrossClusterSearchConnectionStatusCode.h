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
  enum class InboundCrossClusterSearchConnectionStatusCode
  {
    NOT_SET,
    PENDING_ACCEPTANCE,
    APPROVED,
    REJECTING,
    REJECTED,
    DELETING,
    DELETED
  };

namespace InboundCrossClusterSearchConnectionStatusCodeMapper
{
AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnectionStatusCode GetInboundCrossClusterSearchConnectionStatusCodeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForInboundCrossClusterSearchConnectionStatusCode(InboundCrossClusterSearchConnectionStatusCode value);
} // namespace InboundCrossClusterSearchConnectionStatusCodeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
