/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class DataSource
  {
    NOT_SET,
    EVENT,
    MODEL_SCORE,
    EXTERNAL_MODEL_SCORE
  };

namespace DataSourceMapper
{
AWS_FRAUDDETECTOR_API DataSource GetDataSourceForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForDataSource(DataSource value);
} // namespace DataSourceMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
