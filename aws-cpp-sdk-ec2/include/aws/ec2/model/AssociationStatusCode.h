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
  enum class AssociationStatusCode
  {
    NOT_SET,
    associating,
    associated,
    association_failed,
    disassociating,
    disassociated
  };

namespace AssociationStatusCodeMapper
{
AWS_EC2_API AssociationStatusCode GetAssociationStatusCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAssociationStatusCode(AssociationStatusCode value);
} // namespace AssociationStatusCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
