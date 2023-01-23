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
  enum class RxNormEntityType
  {
    NOT_SET,
    BRAND_NAME,
    GENERIC_NAME
  };

namespace RxNormEntityTypeMapper
{
AWS_COMPREHENDMEDICAL_API RxNormEntityType GetRxNormEntityTypeForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForRxNormEntityType(RxNormEntityType value);
} // namespace RxNormEntityTypeMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
