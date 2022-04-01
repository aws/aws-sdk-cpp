/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{
  enum class RxNormAttributeType
  {
    NOT_SET,
    DOSAGE,
    DURATION,
    FORM,
    FREQUENCY,
    RATE,
    ROUTE_OR_MODE,
    STRENGTH
  };

namespace RxNormAttributeTypeMapper
{
AWS_COMPREHENDMEDICAL_API RxNormAttributeType GetRxNormAttributeTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForRxNormAttributeType(RxNormAttributeType value);
} // namespace RxNormAttributeTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
