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
  enum class VpcEndpointStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    ACTIVE,
    UPDATING,
    UPDATE_FAILED,
    DELETING,
    DELETE_FAILED
  };

namespace VpcEndpointStatusMapper
{
AWS_OPENSEARCHSERVICE_API VpcEndpointStatus GetVpcEndpointStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForVpcEndpointStatus(VpcEndpointStatus value);
} // namespace VpcEndpointStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
