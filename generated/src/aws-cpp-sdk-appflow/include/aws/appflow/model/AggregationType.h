/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class AggregationType
  {
    NOT_SET,
    None,
    SingleFile
  };

namespace AggregationTypeMapper
{
AWS_APPFLOW_API AggregationType GetAggregationTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForAggregationType(AggregationType value);
} // namespace AggregationTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
