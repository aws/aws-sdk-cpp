/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/TargetDestination.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace TargetDestinationMapper
      {

        static const int None_specified_HASH = HashingUtils::HashString("None specified");
        static const int AWS_Elastic_BeanStalk_HASH = HashingUtils::HashString("AWS Elastic BeanStalk");
        static const int AWS_Fargate_HASH = HashingUtils::HashString("AWS Fargate");
        static const int Amazon_Elastic_Cloud_Compute_EC2_HASH = HashingUtils::HashString("Amazon Elastic Cloud Compute (EC2)");
        static const int Amazon_Elastic_Container_Service_ECS_HASH = HashingUtils::HashString("Amazon Elastic Container Service (ECS)");
        static const int Amazon_Elastic_Kubernetes_Service_EKS_HASH = HashingUtils::HashString("Amazon Elastic Kubernetes Service (EKS)");
        static const int Aurora_MySQL_HASH = HashingUtils::HashString("Aurora MySQL");
        static const int Aurora_PostgreSQL_HASH = HashingUtils::HashString("Aurora PostgreSQL");
        static const int Amazon_Relational_Database_Service_on_MySQL_HASH = HashingUtils::HashString("Amazon Relational Database Service on MySQL");
        static const int Amazon_Relational_Database_Service_on_PostgreSQL_HASH = HashingUtils::HashString("Amazon Relational Database Service on PostgreSQL");
        static const int Amazon_DocumentDB_HASH = HashingUtils::HashString("Amazon DocumentDB");
        static const int Amazon_DynamoDB_HASH = HashingUtils::HashString("Amazon DynamoDB");
        static const int Amazon_Relational_Database_Service_HASH = HashingUtils::HashString("Amazon Relational Database Service");
        static const int Babelfish_for_Aurora_PostgreSQL_HASH = HashingUtils::HashString("Babelfish for Aurora PostgreSQL");


        TargetDestination GetTargetDestinationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_specified_HASH)
          {
            return TargetDestination::None_specified;
          }
          else if (hashCode == AWS_Elastic_BeanStalk_HASH)
          {
            return TargetDestination::AWS_Elastic_BeanStalk;
          }
          else if (hashCode == AWS_Fargate_HASH)
          {
            return TargetDestination::AWS_Fargate;
          }
          else if (hashCode == Amazon_Elastic_Cloud_Compute_EC2_HASH)
          {
            return TargetDestination::Amazon_Elastic_Cloud_Compute_EC2;
          }
          else if (hashCode == Amazon_Elastic_Container_Service_ECS_HASH)
          {
            return TargetDestination::Amazon_Elastic_Container_Service_ECS;
          }
          else if (hashCode == Amazon_Elastic_Kubernetes_Service_EKS_HASH)
          {
            return TargetDestination::Amazon_Elastic_Kubernetes_Service_EKS;
          }
          else if (hashCode == Aurora_MySQL_HASH)
          {
            return TargetDestination::Aurora_MySQL;
          }
          else if (hashCode == Aurora_PostgreSQL_HASH)
          {
            return TargetDestination::Aurora_PostgreSQL;
          }
          else if (hashCode == Amazon_Relational_Database_Service_on_MySQL_HASH)
          {
            return TargetDestination::Amazon_Relational_Database_Service_on_MySQL;
          }
          else if (hashCode == Amazon_Relational_Database_Service_on_PostgreSQL_HASH)
          {
            return TargetDestination::Amazon_Relational_Database_Service_on_PostgreSQL;
          }
          else if (hashCode == Amazon_DocumentDB_HASH)
          {
            return TargetDestination::Amazon_DocumentDB;
          }
          else if (hashCode == Amazon_DynamoDB_HASH)
          {
            return TargetDestination::Amazon_DynamoDB;
          }
          else if (hashCode == Amazon_Relational_Database_Service_HASH)
          {
            return TargetDestination::Amazon_Relational_Database_Service;
          }
          else if (hashCode == Babelfish_for_Aurora_PostgreSQL_HASH)
          {
            return TargetDestination::Babelfish_for_Aurora_PostgreSQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetDestination>(hashCode);
          }

          return TargetDestination::NOT_SET;
        }

        Aws::String GetNameForTargetDestination(TargetDestination enumValue)
        {
          switch(enumValue)
          {
          case TargetDestination::None_specified:
            return "None specified";
          case TargetDestination::AWS_Elastic_BeanStalk:
            return "AWS Elastic BeanStalk";
          case TargetDestination::AWS_Fargate:
            return "AWS Fargate";
          case TargetDestination::Amazon_Elastic_Cloud_Compute_EC2:
            return "Amazon Elastic Cloud Compute (EC2)";
          case TargetDestination::Amazon_Elastic_Container_Service_ECS:
            return "Amazon Elastic Container Service (ECS)";
          case TargetDestination::Amazon_Elastic_Kubernetes_Service_EKS:
            return "Amazon Elastic Kubernetes Service (EKS)";
          case TargetDestination::Aurora_MySQL:
            return "Aurora MySQL";
          case TargetDestination::Aurora_PostgreSQL:
            return "Aurora PostgreSQL";
          case TargetDestination::Amazon_Relational_Database_Service_on_MySQL:
            return "Amazon Relational Database Service on MySQL";
          case TargetDestination::Amazon_Relational_Database_Service_on_PostgreSQL:
            return "Amazon Relational Database Service on PostgreSQL";
          case TargetDestination::Amazon_DocumentDB:
            return "Amazon DocumentDB";
          case TargetDestination::Amazon_DynamoDB:
            return "Amazon DynamoDB";
          case TargetDestination::Amazon_Relational_Database_Service:
            return "Amazon Relational Database Service";
          case TargetDestination::Babelfish_for_Aurora_PostgreSQL:
            return "Babelfish for Aurora PostgreSQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetDestinationMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
