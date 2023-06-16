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
  enum class TermLength
  {
    NOT_SET,
    ONE_YEAR,
    THREE_YEAR
  };

namespace TermLengthMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API TermLength GetTermLengthForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForTermLength(TermLength value);
} // namespace TermLengthMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
