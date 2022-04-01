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
  enum class SNOMEDCTEntityCategory
  {
    NOT_SET,
    MEDICAL_CONDITION,
    ANATOMY,
    TEST_TREATMENT_PROCEDURE
  };

namespace SNOMEDCTEntityCategoryMapper
{
AWS_COMPREHENDMEDICAL_API SNOMEDCTEntityCategory GetSNOMEDCTEntityCategoryForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForSNOMEDCTEntityCategory(SNOMEDCTEntityCategory value);
} // namespace SNOMEDCTEntityCategoryMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
