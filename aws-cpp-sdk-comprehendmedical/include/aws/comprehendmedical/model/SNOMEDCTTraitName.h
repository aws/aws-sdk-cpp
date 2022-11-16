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
  enum class SNOMEDCTTraitName
  {
    NOT_SET,
    NEGATION,
    DIAGNOSIS,
    SIGN,
    SYMPTOM,
    PERTAINS_TO_FAMILY,
    HYPOTHETICAL,
    LOW_CONFIDENCE,
    PAST_HISTORY,
    FUTURE
  };

namespace SNOMEDCTTraitNameMapper
{
AWS_COMPREHENDMEDICAL_API SNOMEDCTTraitName GetSNOMEDCTTraitNameForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForSNOMEDCTTraitName(SNOMEDCTTraitName value);
} // namespace SNOMEDCTTraitNameMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
