/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class IamInstanceProfileAssociationState
  {
    NOT_SET,
    associating,
    associated,
    disassociating,
    disassociated
  };

namespace IamInstanceProfileAssociationStateMapper
{
AWS_EC2_API IamInstanceProfileAssociationState GetIamInstanceProfileAssociationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIamInstanceProfileAssociationState(IamInstanceProfileAssociationState value);
} // namespace IamInstanceProfileAssociationStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
