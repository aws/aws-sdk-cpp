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
  enum class TLSSecurityPolicy
  {
    NOT_SET,
    Policy_Min_TLS_1_0_2019_07,
    Policy_Min_TLS_1_2_2019_07
  };

namespace TLSSecurityPolicyMapper
{
AWS_ELASTICSEARCHSERVICE_API TLSSecurityPolicy GetTLSSecurityPolicyForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForTLSSecurityPolicy(TLSSecurityPolicy value);
} // namespace TLSSecurityPolicyMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
