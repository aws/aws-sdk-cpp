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
  enum class RxNormTraitName
  {
    NOT_SET,
    NEGATION
  };

namespace RxNormTraitNameMapper
{
AWS_COMPREHENDMEDICAL_API RxNormTraitName GetRxNormTraitNameForName(const Aws::String& name);

AWS_COMPREHENDMEDICAL_API Aws::String GetNameForRxNormTraitName(RxNormTraitName value);
} // namespace RxNormTraitNameMapper
} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
