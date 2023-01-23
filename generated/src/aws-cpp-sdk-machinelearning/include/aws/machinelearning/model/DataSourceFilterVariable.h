/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{
  enum class DataSourceFilterVariable
  {
    NOT_SET,
    CreatedAt,
    LastUpdatedAt,
    Status,
    Name,
    DataLocationS3,
    IAMUser
  };

namespace DataSourceFilterVariableMapper
{
AWS_MACHINELEARNING_API DataSourceFilterVariable GetDataSourceFilterVariableForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForDataSourceFilterVariable(DataSourceFilterVariable value);
} // namespace DataSourceFilterVariableMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
