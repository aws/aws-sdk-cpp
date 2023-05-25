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
  enum class RelationshipType
  {
    NOT_SET,
    EVERY,
    WITH_DOSAGE,
    ADMINISTERED_VIA,
    FOR,
    NEGATIVE,
    OVERLAP,
    DOSAGE,
    ROUTE_OR_MODE,
    FORM,
    FREQUENCY,
    DURATION,
    STRENGTH,
    RATE,
    ACUITY,
    TEST_VALUE,
    TEST_UNITS,
    TEST_UNIT,
    DIRECTION,
    SYSTEM_ORGAN_SITE,
    AMOUNT
  };

namespace RelationshipTypeMapper
{
AWS_COMPREHENDMEDICAL_API RelationshipType GetRelationshipTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForRelationshipType(RelationshipType value);
} // namespace RelationshipTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
