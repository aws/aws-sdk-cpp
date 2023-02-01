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
  enum class VpcEndpointErrorCode
  {
    NOT_SET,
    ENDPOINT_NOT_FOUND,
    SERVER_ERROR
  };

namespace VpcEndpointErrorCodeMapper
{
AWS_ELASTICSEARCHSERVICE_API VpcEndpointErrorCode GetVpcEndpointErrorCodeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForVpcEndpointErrorCode(VpcEndpointErrorCode value);
} // namespace VpcEndpointErrorCodeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
