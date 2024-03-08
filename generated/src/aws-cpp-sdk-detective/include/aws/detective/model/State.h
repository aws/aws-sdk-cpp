/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class State
  {
    NOT_SET,
    ACTIVE,
    ARCHIVED
  };

namespace StateMapper
{
AWS_DETECTIVE_API State GetStateForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForState(State value);
} // namespace StateMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
