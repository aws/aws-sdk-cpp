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
  enum class OutboundCrossClusterSearchConnectionStatusCode
  {
    NOT_SET,
    PENDING_ACCEPTANCE,
    VALIDATING,
    VALIDATION_FAILED,
    PROVISIONING,
    ACTIVE,
    REJECTED,
    DELETING,
    DELETED
  };

namespace OutboundCrossClusterSearchConnectionStatusCodeMapper
{
AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnectionStatusCode GetOutboundCrossClusterSearchConnectionStatusCodeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForOutboundCrossClusterSearchConnectionStatusCode(OutboundCrossClusterSearchConnectionStatusCode value);
} // namespace OutboundCrossClusterSearchConnectionStatusCodeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
