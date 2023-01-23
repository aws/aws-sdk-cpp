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
  enum class EntitySubType
  {
    NOT_SET,
    NAME,
    DX_NAME,
    DOSAGE,
    ROUTE_OR_MODE,
    FORM,
    FREQUENCY,
    DURATION,
    GENERIC_NAME,
    BRAND_NAME,
    STRENGTH,
    RATE,
    ACUITY,
    TEST_NAME,
    TEST_VALUE,
    TEST_UNITS,
    TEST_UNIT,
    PROCEDURE_NAME,
    TREATMENT_NAME,
    DATE,
    AGE,
    CONTACT_POINT,
    PHONE_OR_FAX,
    EMAIL,
    IDENTIFIER,
    ID,
    URL,
    ADDRESS,
    PROFESSION,
    SYSTEM_ORGAN_SITE,
    DIRECTION,
    QUALITY,
    QUANTITY,
    TIME_EXPRESSION,
    TIME_TO_MEDICATION_NAME,
    TIME_TO_DX_NAME,
    TIME_TO_TEST_NAME,
    TIME_TO_PROCEDURE_NAME,
    TIME_TO_TREATMENT_NAME,
    AMOUNT,
    GENDER,
    RACE_ETHNICITY,
    ALLERGIES,
    TOBACCO_USE,
    ALCOHOL_CONSUMPTION,
    REC_DRUG_USE
  };

namespace EntitySubTypeMapper
{
AWS_COMPREHENDMEDICAL_API EntitySubType GetEntitySubTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForEntitySubType(EntitySubType value);
} // namespace EntitySubTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
