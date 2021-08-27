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
  enum class ModelInputDataFormat
  {
    NOT_SET,
    TEXT_CSV,
    APPLICATION_JSON
  };

namespace ModelInputDataFormatMapper
{
AWS_FRAUDDETECTOR_API ModelInputDataFormat GetModelInputDataFormatForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForModelInputDataFormat(ModelInputDataFormat value);
} // namespace ModelInputDataFormatMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
