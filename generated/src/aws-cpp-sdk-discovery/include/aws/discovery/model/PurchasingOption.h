/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class PurchasingOption
  {
    NOT_SET,
    ALL_UPFRONT,
    PARTIAL_UPFRONT,
    NO_UPFRONT
  };

namespace PurchasingOptionMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API PurchasingOption GetPurchasingOptionForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForPurchasingOption(PurchasingOption value);
} // namespace PurchasingOptionMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
