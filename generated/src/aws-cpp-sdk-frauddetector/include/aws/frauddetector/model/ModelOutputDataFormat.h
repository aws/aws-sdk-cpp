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
  enum class ModelOutputDataFormat
  {
    NOT_SET,
    TEXT_CSV,
    APPLICATION_JSONLINES
  };

namespace ModelOutputDataFormatMapper
{
AWS_FRAUDDETECTOR_API ModelOutputDataFormat GetModelOutputDataFormatForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForModelOutputDataFormat(ModelOutputDataFormat value);
} // namespace ModelOutputDataFormatMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
