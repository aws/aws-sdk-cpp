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
  enum class ReservedElasticsearchInstancePaymentOption
  {
    NOT_SET,
    ALL_UPFRONT,
    PARTIAL_UPFRONT,
    NO_UPFRONT
  };

namespace ReservedElasticsearchInstancePaymentOptionMapper
{
AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstancePaymentOption GetReservedElasticsearchInstancePaymentOptionForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForReservedElasticsearchInstancePaymentOption(ReservedElasticsearchInstancePaymentOption value);
} // namespace ReservedElasticsearchInstancePaymentOptionMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
