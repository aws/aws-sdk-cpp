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
  enum class ChangeSetType
  {
    NOT_SET,
    CREATE,
    UPDATE,
    IMPORT
  };

namespace ChangeSetTypeMapper
{
AWS_CLOUDFORMATION_API ChangeSetType GetChangeSetTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForChangeSetType(ChangeSetType value);
} // namespace ChangeSetTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
