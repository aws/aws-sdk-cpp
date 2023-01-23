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
  enum class DataSource
  {
    NOT_SET,
    AGENT
  };

namespace DataSourceMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API DataSource GetDataSourceForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForDataSource(DataSource value);
} // namespace DataSourceMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
