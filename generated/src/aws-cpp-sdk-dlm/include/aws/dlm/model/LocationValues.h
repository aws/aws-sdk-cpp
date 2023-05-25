/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DLM
{
namespace Model
{
  enum class LocationValues
  {
    NOT_SET,
    CLOUD,
    OUTPOST_LOCAL
  };

namespace LocationValuesMapper
{
AWS_DLM_API LocationValues GetLocationValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForLocationValues(LocationValues value);
} // namespace LocationValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
