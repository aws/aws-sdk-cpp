/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class ListUpdateMode
  {
    NOT_SET,
    REPLACE,
    APPEND,
    REMOVE
  };

namespace ListUpdateModeMapper
{
AWS_FRAUDDETECTOR_API ListUpdateMode GetListUpdateModeForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForListUpdateMode(ListUpdateMode value);
} // namespace ListUpdateModeMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
