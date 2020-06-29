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
  enum class TransitGatewayMulitcastDomainAssociationState
  {
    NOT_SET,
    associating,
    associated,
    disassociating,
    disassociated
  };

namespace TransitGatewayMulitcastDomainAssociationStateMapper
{
AWS_EC2_API TransitGatewayMulitcastDomainAssociationState GetTransitGatewayMulitcastDomainAssociationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayMulitcastDomainAssociationState(TransitGatewayMulitcastDomainAssociationState value);
} // namespace TransitGatewayMulitcastDomainAssociationStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
