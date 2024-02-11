/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class IdcUserAssignment
  {
    NOT_SET,
    REQUIRED,
    OPTIONAL
  };

namespace IdcUserAssignmentMapper
{
AWS_EMR_API IdcUserAssignment GetIdcUserAssignmentForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForIdcUserAssignment(IdcUserAssignment value);
} // namespace IdcUserAssignmentMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
