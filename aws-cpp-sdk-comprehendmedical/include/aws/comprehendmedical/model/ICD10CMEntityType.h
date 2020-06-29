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
  enum class ICD10CMEntityType
  {
    NOT_SET,
    DX_NAME
  };

namespace ICD10CMEntityTypeMapper
{
AWS_COMPREHENDMEDICAL_API ICD10CMEntityType GetICD10CMEntityTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForICD10CMEntityType(ICD10CMEntityType value);
} // namespace ICD10CMEntityTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
