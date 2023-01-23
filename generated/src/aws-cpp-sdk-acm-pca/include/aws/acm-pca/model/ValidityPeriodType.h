/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class ValidityPeriodType
  {
    NOT_SET,
    END_DATE,
    ABSOLUTE,
    DAYS,
    MONTHS,
    YEARS
  };

namespace ValidityPeriodTypeMapper
{
AWS_ACMPCA_API ValidityPeriodType GetValidityPeriodTypeForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForValidityPeriodType(ValidityPeriodType value);
} // namespace ValidityPeriodTypeMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
