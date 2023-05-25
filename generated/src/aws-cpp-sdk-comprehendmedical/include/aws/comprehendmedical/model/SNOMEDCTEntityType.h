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
  enum class SNOMEDCTEntityType
  {
    NOT_SET,
    DX_NAME,
    TEST_NAME,
    PROCEDURE_NAME,
    TREATMENT_NAME
  };

namespace SNOMEDCTEntityTypeMapper
{
AWS_COMPREHENDMEDICAL_API SNOMEDCTEntityType GetSNOMEDCTEntityTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForSNOMEDCTEntityType(SNOMEDCTEntityType value);
} // namespace SNOMEDCTEntityTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
