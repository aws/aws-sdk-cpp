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
  enum class SNOMEDCTAttributeType
  {
    NOT_SET,
    ACUITY,
    QUALITY,
    DIRECTION,
    SYSTEM_ORGAN_SITE,
    TEST_VALUE,
    TEST_UNIT
  };

namespace SNOMEDCTAttributeTypeMapper
{
AWS_COMPREHENDMEDICAL_API SNOMEDCTAttributeType GetSNOMEDCTAttributeTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForSNOMEDCTAttributeType(SNOMEDCTAttributeType value);
} // namespace SNOMEDCTAttributeTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
