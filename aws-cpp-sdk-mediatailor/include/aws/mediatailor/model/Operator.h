/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class Operator
  {
    NOT_SET,
    EQUALS
  };

namespace OperatorMapper
{
AWS_MEDIATAILOR_API Operator GetOperatorForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForOperator(Operator value);
} // namespace OperatorMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
