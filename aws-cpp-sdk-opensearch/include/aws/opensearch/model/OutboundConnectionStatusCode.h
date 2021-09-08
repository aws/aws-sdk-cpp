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
  enum class OutboundConnectionStatusCode
  {
    NOT_SET,
    VALIDATING,
    VALIDATION_FAILED,
    PENDING_ACCEPTANCE,
    APPROVED,
    PROVISIONING,
    ACTIVE,
    REJECTING,
    REJECTED,
    DELETING,
    DELETED
  };

namespace OutboundConnectionStatusCodeMapper
{
AWS_OPENSEARCHSERVICE_API OutboundConnectionStatusCode GetOutboundConnectionStatusCodeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForOutboundConnectionStatusCode(OutboundConnectionStatusCode value);
} // namespace OutboundConnectionStatusCodeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
