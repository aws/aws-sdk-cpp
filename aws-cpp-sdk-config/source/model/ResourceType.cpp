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
#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int AWS_EC2_CustomerGateway_HASH = HashingUtils::HashString("AWS::EC2::CustomerGateway");
        static const int AWS_EC2_EIP_HASH = HashingUtils::HashString("AWS::EC2::EIP");
        static const int AWS_EC2_Host_HASH = HashingUtils::HashString("AWS::EC2::Host");
        static const int AWS_EC2_Instance_HASH = HashingUtils::HashString("AWS::EC2::Instance");
        static const int AWS_EC2_InternetGateway_HASH = HashingUtils::HashString("AWS::EC2::InternetGateway");
        static const int AWS_EC2_NetworkAcl_HASH = HashingUtils::HashString("AWS::EC2::NetworkAcl");
        static const int AWS_EC2_NetworkInterface_HASH = HashingUtils::HashString("AWS::EC2::NetworkInterface");
        static const int AWS_EC2_RouteTable_HASH = HashingUtils::HashString("AWS::EC2::RouteTable");
        static const int AWS_EC2_SecurityGroup_HASH = HashingUtils::HashString("AWS::EC2::SecurityGroup");
        static const int AWS_EC2_Subnet_HASH = HashingUtils::HashString("AWS::EC2::Subnet");
        static const int AWS_CloudTrail_Trail_HASH = HashingUtils::HashString("AWS::CloudTrail::Trail");
        static const int AWS_EC2_Volume_HASH = HashingUtils::HashString("AWS::EC2::Volume");
        static const int AWS_EC2_VPC_HASH = HashingUtils::HashString("AWS::EC2::VPC");
        static const int AWS_EC2_VPNConnection_HASH = HashingUtils::HashString("AWS::EC2::VPNConnection");
        static const int AWS_EC2_VPNGateway_HASH = HashingUtils::HashString("AWS::EC2::VPNGateway");
        static const int AWS_IAM_Group_HASH = HashingUtils::HashString("AWS::IAM::Group");
        static const int AWS_IAM_Policy_HASH = HashingUtils::HashString("AWS::IAM::Policy");
        static const int AWS_IAM_Role_HASH = HashingUtils::HashString("AWS::IAM::Role");
        static const int AWS_IAM_User_HASH = HashingUtils::HashString("AWS::IAM::User");
        static const int AWS_ACM_Certificate_HASH = HashingUtils::HashString("AWS::ACM::Certificate");
        static const int AWS_RDS_DBInstance_HASH = HashingUtils::HashString("AWS::RDS::DBInstance");
        static const int AWS_RDS_DBSubnetGroup_HASH = HashingUtils::HashString("AWS::RDS::DBSubnetGroup");
        static const int AWS_RDS_DBSecurityGroup_HASH = HashingUtils::HashString("AWS::RDS::DBSecurityGroup");
        static const int AWS_RDS_DBSnapshot_HASH = HashingUtils::HashString("AWS::RDS::DBSnapshot");
        static const int AWS_RDS_EventSubscription_HASH = HashingUtils::HashString("AWS::RDS::EventSubscription");
        static const int AWS_ElasticLoadBalancingV2_LoadBalancer_HASH = HashingUtils::HashString("AWS::ElasticLoadBalancingV2::LoadBalancer");
        static const int AWS_S3_Bucket_HASH = HashingUtils::HashString("AWS::S3::Bucket");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_EC2_CustomerGateway_HASH)
          {
            return ResourceType::AWS_EC2_CustomerGateway;
          }
          else if (hashCode == AWS_EC2_EIP_HASH)
          {
            return ResourceType::AWS_EC2_EIP;
          }
          else if (hashCode == AWS_EC2_Host_HASH)
          {
            return ResourceType::AWS_EC2_Host;
          }
          else if (hashCode == AWS_EC2_Instance_HASH)
          {
            return ResourceType::AWS_EC2_Instance;
          }
          else if (hashCode == AWS_EC2_InternetGateway_HASH)
          {
            return ResourceType::AWS_EC2_InternetGateway;
          }
          else if (hashCode == AWS_EC2_NetworkAcl_HASH)
          {
            return ResourceType::AWS_EC2_NetworkAcl;
          }
          else if (hashCode == AWS_EC2_NetworkInterface_HASH)
          {
            return ResourceType::AWS_EC2_NetworkInterface;
          }
          else if (hashCode == AWS_EC2_RouteTable_HASH)
          {
            return ResourceType::AWS_EC2_RouteTable;
          }
          else if (hashCode == AWS_EC2_SecurityGroup_HASH)
          {
            return ResourceType::AWS_EC2_SecurityGroup;
          }
          else if (hashCode == AWS_EC2_Subnet_HASH)
          {
            return ResourceType::AWS_EC2_Subnet;
          }
          else if (hashCode == AWS_CloudTrail_Trail_HASH)
          {
            return ResourceType::AWS_CloudTrail_Trail;
          }
          else if (hashCode == AWS_EC2_Volume_HASH)
          {
            return ResourceType::AWS_EC2_Volume;
          }
          else if (hashCode == AWS_EC2_VPC_HASH)
          {
            return ResourceType::AWS_EC2_VPC;
          }
          else if (hashCode == AWS_EC2_VPNConnection_HASH)
          {
            return ResourceType::AWS_EC2_VPNConnection;
          }
          else if (hashCode == AWS_EC2_VPNGateway_HASH)
          {
            return ResourceType::AWS_EC2_VPNGateway;
          }
          else if (hashCode == AWS_IAM_Group_HASH)
          {
            return ResourceType::AWS_IAM_Group;
          }
          else if (hashCode == AWS_IAM_Policy_HASH)
          {
            return ResourceType::AWS_IAM_Policy;
          }
          else if (hashCode == AWS_IAM_Role_HASH)
          {
            return ResourceType::AWS_IAM_Role;
          }
          else if (hashCode == AWS_IAM_User_HASH)
          {
            return ResourceType::AWS_IAM_User;
          }
          else if (hashCode == AWS_ACM_Certificate_HASH)
          {
            return ResourceType::AWS_ACM_Certificate;
          }
          else if (hashCode == AWS_RDS_DBInstance_HASH)
          {
            return ResourceType::AWS_RDS_DBInstance;
          }
          else if (hashCode == AWS_RDS_DBSubnetGroup_HASH)
          {
            return ResourceType::AWS_RDS_DBSubnetGroup;
          }
          else if (hashCode == AWS_RDS_DBSecurityGroup_HASH)
          {
            return ResourceType::AWS_RDS_DBSecurityGroup;
          }
          else if (hashCode == AWS_RDS_DBSnapshot_HASH)
          {
            return ResourceType::AWS_RDS_DBSnapshot;
          }
          else if (hashCode == AWS_RDS_EventSubscription_HASH)
          {
            return ResourceType::AWS_RDS_EventSubscription;
          }
          else if (hashCode == AWS_ElasticLoadBalancingV2_LoadBalancer_HASH)
          {
            return ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer;
          }
          else if (hashCode == AWS_S3_Bucket_HASH)
          {
            return ResourceType::AWS_S3_Bucket;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::AWS_EC2_CustomerGateway:
            return "AWS::EC2::CustomerGateway";
          case ResourceType::AWS_EC2_EIP:
            return "AWS::EC2::EIP";
          case ResourceType::AWS_EC2_Host:
            return "AWS::EC2::Host";
          case ResourceType::AWS_EC2_Instance:
            return "AWS::EC2::Instance";
          case ResourceType::AWS_EC2_InternetGateway:
            return "AWS::EC2::InternetGateway";
          case ResourceType::AWS_EC2_NetworkAcl:
            return "AWS::EC2::NetworkAcl";
          case ResourceType::AWS_EC2_NetworkInterface:
            return "AWS::EC2::NetworkInterface";
          case ResourceType::AWS_EC2_RouteTable:
            return "AWS::EC2::RouteTable";
          case ResourceType::AWS_EC2_SecurityGroup:
            return "AWS::EC2::SecurityGroup";
          case ResourceType::AWS_EC2_Subnet:
            return "AWS::EC2::Subnet";
          case ResourceType::AWS_CloudTrail_Trail:
            return "AWS::CloudTrail::Trail";
          case ResourceType::AWS_EC2_Volume:
            return "AWS::EC2::Volume";
          case ResourceType::AWS_EC2_VPC:
            return "AWS::EC2::VPC";
          case ResourceType::AWS_EC2_VPNConnection:
            return "AWS::EC2::VPNConnection";
          case ResourceType::AWS_EC2_VPNGateway:
            return "AWS::EC2::VPNGateway";
          case ResourceType::AWS_IAM_Group:
            return "AWS::IAM::Group";
          case ResourceType::AWS_IAM_Policy:
            return "AWS::IAM::Policy";
          case ResourceType::AWS_IAM_Role:
            return "AWS::IAM::Role";
          case ResourceType::AWS_IAM_User:
            return "AWS::IAM::User";
          case ResourceType::AWS_ACM_Certificate:
            return "AWS::ACM::Certificate";
          case ResourceType::AWS_RDS_DBInstance:
            return "AWS::RDS::DBInstance";
          case ResourceType::AWS_RDS_DBSubnetGroup:
            return "AWS::RDS::DBSubnetGroup";
          case ResourceType::AWS_RDS_DBSecurityGroup:
            return "AWS::RDS::DBSecurityGroup";
          case ResourceType::AWS_RDS_DBSnapshot:
            return "AWS::RDS::DBSnapshot";
          case ResourceType::AWS_RDS_EventSubscription:
            return "AWS::RDS::EventSubscription";
          case ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer:
            return "AWS::ElasticLoadBalancingV2::LoadBalancer";
          case ResourceType::AWS_S3_Bucket:
            return "AWS::S3::Bucket";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
