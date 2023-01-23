/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class ClassificationScopeUpdateOperation
  {
    NOT_SET,
    ADD,
    REPLACE,
    REMOVE
  };

namespace ClassificationScopeUpdateOperationMapper
{
AWS_MACIE2_API ClassificationScopeUpdateOperation GetClassificationScopeUpdateOperationForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForClassificationScopeUpdateOperation(ClassificationScopeUpdateOperation value);
} // namespace ClassificationScopeUpdateOperationMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
