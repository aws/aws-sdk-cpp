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
  enum class ICD10CMRelationshipType
  {
    NOT_SET,
    OVERLAP,
    SYSTEM_ORGAN_SITE,
    QUALITY
  };

namespace ICD10CMRelationshipTypeMapper
{
AWS_COMPREHENDMEDICAL_API ICD10CMRelationshipType GetICD10CMRelationshipTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForICD10CMRelationshipType(ICD10CMRelationshipType value);
} // namespace ICD10CMRelationshipTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
