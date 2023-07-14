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
  enum class DefaultRouteTableAssociationValue
  {
    NOT_SET,
    enable,
    disable
  };

namespace DefaultRouteTableAssociationValueMapper
{
AWS_EC2_API DefaultRouteTableAssociationValue GetDefaultRouteTableAssociationValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDefaultRouteTableAssociationValue(DefaultRouteTableAssociationValue value);
} // namespace DefaultRouteTableAssociationValueMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
