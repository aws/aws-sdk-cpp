﻿/**
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
  enum class UnlabeledEventsTreatment
  {
    NOT_SET,
    IGNORE,
    FRAUD,
    LEGIT,
    AUTO
  };

namespace UnlabeledEventsTreatmentMapper
{
AWS_FRAUDDETECTOR_API UnlabeledEventsTreatment GetUnlabeledEventsTreatmentForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForUnlabeledEventsTreatment(UnlabeledEventsTreatment value);
} // namespace UnlabeledEventsTreatmentMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
