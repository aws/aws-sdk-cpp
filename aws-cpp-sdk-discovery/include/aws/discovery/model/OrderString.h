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
  enum class OrderString
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace OrderStringMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API OrderString GetOrderStringForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForOrderString(OrderString value);
} // namespace OrderStringMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
