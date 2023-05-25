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
  enum class ICD10CMTraitName
  {
    NOT_SET,
    NEGATION,
    DIAGNOSIS,
    SIGN,
    SYMPTOM,
    PERTAINS_TO_FAMILY,
    HYPOTHETICAL,
    LOW_CONFIDENCE
  };

namespace ICD10CMTraitNameMapper
{
AWS_COMPREHENDMEDICAL_API ICD10CMTraitName GetICD10CMTraitNameForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForICD10CMTraitName(ICD10CMTraitName value);
} // namespace ICD10CMTraitNameMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
