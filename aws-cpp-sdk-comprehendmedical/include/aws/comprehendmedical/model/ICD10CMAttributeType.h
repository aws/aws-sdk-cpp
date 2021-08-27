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
  enum class ICD10CMAttributeType
  {
    NOT_SET,
    ACUITY,
    DIRECTION,
    SYSTEM_ORGAN_SITE,
    QUALITY,
    QUANTITY
  };

namespace ICD10CMAttributeTypeMapper
{
AWS_COMPREHENDMEDICAL_API ICD10CMAttributeType GetICD10CMAttributeTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForICD10CMAttributeType(ICD10CMAttributeType value);
} // namespace ICD10CMAttributeTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
