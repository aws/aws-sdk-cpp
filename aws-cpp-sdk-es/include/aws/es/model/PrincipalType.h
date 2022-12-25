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
  enum class PrincipalType
  {
    NOT_SET,
    AWS_ACCOUNT,
    AWS_SERVICE
  };

namespace PrincipalTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API PrincipalType GetPrincipalTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForPrincipalType(PrincipalType value);
} // namespace PrincipalTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
