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
AWS_ELASTICSEARCHSERVICE_API VpcEndpointStatus GetVpcEndpointStatusForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForVpcEndpointStatus(VpcEndpointStatus value);
} // namespace VpcEndpointStatusMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
