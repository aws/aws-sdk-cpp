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
  enum class EntityType
  {
    NOT_SET,
    MEDICATION,
    MEDICAL_CONDITION,
    PROTECTED_HEALTH_INFORMATION,
    TEST_TREATMENT_PROCEDURE,
    ANATOMY,
    TIME_EXPRESSION,
    BEHAVIORAL_ENVIRONMENTAL_SOCIAL
  };

namespace EntityTypeMapper
{
AWS_COMPREHENDMEDICAL_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForEntityType(EntityType value);
} // namespace EntityTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
