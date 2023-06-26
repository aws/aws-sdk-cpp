/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class ChangeSource
  {
    NOT_SET,
    ResourceReference,
    ParameterReference,
    ResourceAttribute,
    DirectModification,
    Automatic
  };

namespace ChangeSourceMapper
{
AWS_CLOUDFORMATION_API ChangeSource GetChangeSourceForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForChangeSource(ChangeSource value);
} // namespace ChangeSourceMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
