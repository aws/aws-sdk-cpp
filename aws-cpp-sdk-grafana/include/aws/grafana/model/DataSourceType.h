/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class DataSourceType
  {
    NOT_SET,
    AMAZON_OPENSEARCH_SERVICE,
    CLOUDWATCH,
    PROMETHEUS,
    XRAY,
    TIMESTREAM,
    SITEWISE,
    ATHENA,
    REDSHIFT,
    TWINMAKER
  };

namespace DataSourceTypeMapper
{
AWS_MANAGEDGRAFANA_API DataSourceType GetDataSourceTypeForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForDataSourceType(DataSourceType value);
} // namespace DataSourceTypeMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
