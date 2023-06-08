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
  enum class SNOMEDCTRelationshipType
  {
    NOT_SET,
    ACUITY,
    QUALITY,
    TEST_VALUE,
    TEST_UNITS,
    DIRECTION,
    SYSTEM_ORGAN_SITE,
    TEST_UNIT
  };

namespace SNOMEDCTRelationshipTypeMapper
{
AWS_COMPREHENDMEDICAL_API SNOMEDCTRelationshipType GetSNOMEDCTRelationshipTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForSNOMEDCTRelationshipType(SNOMEDCTRelationshipType value);
} // namespace SNOMEDCTRelationshipTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
