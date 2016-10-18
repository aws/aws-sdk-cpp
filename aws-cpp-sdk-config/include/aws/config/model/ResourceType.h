/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    AWS_EC2_CustomerGateway,
    AWS_EC2_EIP,
    AWS_EC2_Host,
    AWS_EC2_Instance,
    AWS_EC2_InternetGateway,
    AWS_EC2_NetworkAcl,
    AWS_EC2_NetworkInterface,
    AWS_EC2_RouteTable,
    AWS_EC2_SecurityGroup,
    AWS_EC2_Subnet,
    AWS_CloudTrail_Trail,
    AWS_EC2_Volume,
    AWS_EC2_VPC,
    AWS_EC2_VPNConnection,
    AWS_EC2_VPNGateway,
    AWS_IAM_Group,
    AWS_IAM_Policy,
    AWS_IAM_Role,
    AWS_IAM_User,
    AWS_ACM_Certificate,
    AWS_RDS_DBInstance,
    AWS_RDS_DBSubnetGroup,
    AWS_RDS_DBSecurityGroup,
    AWS_RDS_DBSnapshot,
    AWS_RDS_EventSubscription,
    AWS_ElasticLoadBalancingV2_LoadBalancer,
    AWS_S3_Bucket
  };

namespace ResourceTypeMapper
{
AWS_CONFIGSERVICE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
