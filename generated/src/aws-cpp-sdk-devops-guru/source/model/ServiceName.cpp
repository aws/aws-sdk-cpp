/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ServiceName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace ServiceNameMapper
      {

        static const int API_GATEWAY_HASH = HashingUtils::HashString("API_GATEWAY");
        static const int APPLICATION_ELB_HASH = HashingUtils::HashString("APPLICATION_ELB");
        static const int AUTO_SCALING_GROUP_HASH = HashingUtils::HashString("AUTO_SCALING_GROUP");
        static const int CLOUD_FRONT_HASH = HashingUtils::HashString("CLOUD_FRONT");
        static const int DYNAMO_DB_HASH = HashingUtils::HashString("DYNAMO_DB");
        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int ECS_HASH = HashingUtils::HashString("ECS");
        static const int EKS_HASH = HashingUtils::HashString("EKS");
        static const int ELASTIC_BEANSTALK_HASH = HashingUtils::HashString("ELASTIC_BEANSTALK");
        static const int ELASTI_CACHE_HASH = HashingUtils::HashString("ELASTI_CACHE");
        static const int ELB_HASH = HashingUtils::HashString("ELB");
        static const int ES_HASH = HashingUtils::HashString("ES");
        static const int KINESIS_HASH = HashingUtils::HashString("KINESIS");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int NAT_GATEWAY_HASH = HashingUtils::HashString("NAT_GATEWAY");
        static const int NETWORK_ELB_HASH = HashingUtils::HashString("NETWORK_ELB");
        static const int RDS_HASH = HashingUtils::HashString("RDS");
        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int ROUTE_53_HASH = HashingUtils::HashString("ROUTE_53");
        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int SAGE_MAKER_HASH = HashingUtils::HashString("SAGE_MAKER");
        static const int SNS_HASH = HashingUtils::HashString("SNS");
        static const int SQS_HASH = HashingUtils::HashString("SQS");
        static const int STEP_FUNCTIONS_HASH = HashingUtils::HashString("STEP_FUNCTIONS");
        static const int SWF_HASH = HashingUtils::HashString("SWF");


        ServiceName GetServiceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_GATEWAY_HASH)
          {
            return ServiceName::API_GATEWAY;
          }
          else if (hashCode == APPLICATION_ELB_HASH)
          {
            return ServiceName::APPLICATION_ELB;
          }
          else if (hashCode == AUTO_SCALING_GROUP_HASH)
          {
            return ServiceName::AUTO_SCALING_GROUP;
          }
          else if (hashCode == CLOUD_FRONT_HASH)
          {
            return ServiceName::CLOUD_FRONT;
          }
          else if (hashCode == DYNAMO_DB_HASH)
          {
            return ServiceName::DYNAMO_DB;
          }
          else if (hashCode == EC2_HASH)
          {
            return ServiceName::EC2;
          }
          else if (hashCode == ECS_HASH)
          {
            return ServiceName::ECS;
          }
          else if (hashCode == EKS_HASH)
          {
            return ServiceName::EKS;
          }
          else if (hashCode == ELASTIC_BEANSTALK_HASH)
          {
            return ServiceName::ELASTIC_BEANSTALK;
          }
          else if (hashCode == ELASTI_CACHE_HASH)
          {
            return ServiceName::ELASTI_CACHE;
          }
          else if (hashCode == ELB_HASH)
          {
            return ServiceName::ELB;
          }
          else if (hashCode == ES_HASH)
          {
            return ServiceName::ES;
          }
          else if (hashCode == KINESIS_HASH)
          {
            return ServiceName::KINESIS;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return ServiceName::LAMBDA;
          }
          else if (hashCode == NAT_GATEWAY_HASH)
          {
            return ServiceName::NAT_GATEWAY;
          }
          else if (hashCode == NETWORK_ELB_HASH)
          {
            return ServiceName::NETWORK_ELB;
          }
          else if (hashCode == RDS_HASH)
          {
            return ServiceName::RDS;
          }
          else if (hashCode == REDSHIFT_HASH)
          {
            return ServiceName::REDSHIFT;
          }
          else if (hashCode == ROUTE_53_HASH)
          {
            return ServiceName::ROUTE_53;
          }
          else if (hashCode == S3_HASH)
          {
            return ServiceName::S3;
          }
          else if (hashCode == SAGE_MAKER_HASH)
          {
            return ServiceName::SAGE_MAKER;
          }
          else if (hashCode == SNS_HASH)
          {
            return ServiceName::SNS;
          }
          else if (hashCode == SQS_HASH)
          {
            return ServiceName::SQS;
          }
          else if (hashCode == STEP_FUNCTIONS_HASH)
          {
            return ServiceName::STEP_FUNCTIONS;
          }
          else if (hashCode == SWF_HASH)
          {
            return ServiceName::SWF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceName>(hashCode);
          }

          return ServiceName::NOT_SET;
        }

        Aws::String GetNameForServiceName(ServiceName enumValue)
        {
          switch(enumValue)
          {
          case ServiceName::NOT_SET:
            return {};
          case ServiceName::API_GATEWAY:
            return "API_GATEWAY";
          case ServiceName::APPLICATION_ELB:
            return "APPLICATION_ELB";
          case ServiceName::AUTO_SCALING_GROUP:
            return "AUTO_SCALING_GROUP";
          case ServiceName::CLOUD_FRONT:
            return "CLOUD_FRONT";
          case ServiceName::DYNAMO_DB:
            return "DYNAMO_DB";
          case ServiceName::EC2:
            return "EC2";
          case ServiceName::ECS:
            return "ECS";
          case ServiceName::EKS:
            return "EKS";
          case ServiceName::ELASTIC_BEANSTALK:
            return "ELASTIC_BEANSTALK";
          case ServiceName::ELASTI_CACHE:
            return "ELASTI_CACHE";
          case ServiceName::ELB:
            return "ELB";
          case ServiceName::ES:
            return "ES";
          case ServiceName::KINESIS:
            return "KINESIS";
          case ServiceName::LAMBDA:
            return "LAMBDA";
          case ServiceName::NAT_GATEWAY:
            return "NAT_GATEWAY";
          case ServiceName::NETWORK_ELB:
            return "NETWORK_ELB";
          case ServiceName::RDS:
            return "RDS";
          case ServiceName::REDSHIFT:
            return "REDSHIFT";
          case ServiceName::ROUTE_53:
            return "ROUTE_53";
          case ServiceName::S3:
            return "S3";
          case ServiceName::SAGE_MAKER:
            return "SAGE_MAKER";
          case ServiceName::SNS:
            return "SNS";
          case ServiceName::SQS:
            return "SQS";
          case ServiceName::STEP_FUNCTIONS:
            return "STEP_FUNCTIONS";
          case ServiceName::SWF:
            return "SWF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceNameMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
