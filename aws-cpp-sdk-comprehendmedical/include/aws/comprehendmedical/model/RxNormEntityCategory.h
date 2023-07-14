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
  enum class RxNormEntityCategory
  {
    NOT_SET,
    MEDICATION
  };

namespace RxNormEntityCategoryMapper
{
AWS_COMPREHENDMEDICAL_API RxNormEntityCategory GetRxNormEntityCategoryForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForRxNormEntityCategory(RxNormEntityCategory value);
} // namespace RxNormEntityCategoryMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
