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
  enum class OnStackFailure
  {
    NOT_SET,
    DO_NOTHING,
    ROLLBACK,
    DELETE_
  };

namespace OnStackFailureMapper
{
AWS_CLOUDFORMATION_API OnStackFailure GetOnStackFailureForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForOnStackFailure(OnStackFailure value);
} // namespace OnStackFailureMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
