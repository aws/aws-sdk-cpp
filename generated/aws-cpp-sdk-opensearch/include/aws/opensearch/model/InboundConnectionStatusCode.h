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
  enum class InboundConnectionStatusCode
  {
    NOT_SET,
    PENDING_ACCEPTANCE,
    APPROVED,
    PROVISIONING,
    ACTIVE,
    REJECTING,
    REJECTED,
    DELETING,
    DELETED
  };

namespace InboundConnectionStatusCodeMapper
{
AWS_OPENSEARCHSERVICE_API InboundConnectionStatusCode GetInboundConnectionStatusCodeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInboundConnectionStatusCode(InboundConnectionStatusCode value);
} // namespace InboundConnectionStatusCodeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
