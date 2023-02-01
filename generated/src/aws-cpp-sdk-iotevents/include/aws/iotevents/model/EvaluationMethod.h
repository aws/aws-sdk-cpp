/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{
  enum class EvaluationMethod
  {
    NOT_SET,
    BATCH,
    SERIAL
  };

namespace EvaluationMethodMapper
{
AWS_IOTEVENTS_API EvaluationMethod GetEvaluationMethodForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForEvaluationMethod(EvaluationMethod value);
} // namespace EvaluationMethodMapper
} // namespace Model
} // namespace IoTEvents
} // namespace Aws
