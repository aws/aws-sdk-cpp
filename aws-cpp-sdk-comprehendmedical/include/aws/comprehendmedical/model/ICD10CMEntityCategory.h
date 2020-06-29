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
  enum class ICD10CMEntityCategory
  {
    NOT_SET,
    MEDICAL_CONDITION
  };

namespace ICD10CMEntityCategoryMapper
{
AWS_COMPREHENDMEDICAL_API ICD10CMEntityCategory GetICD10CMEntityCategoryForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForICD10CMEntityCategory(ICD10CMEntityCategory value);
} // namespace ICD10CMEntityCategoryMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
