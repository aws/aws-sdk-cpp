/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/ScalableDimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScalingPlans
  {
    namespace Model
    {
      namespace ScalableDimensionMapper
      {

        static constexpr uint32_t autoscaling_autoScalingGroup_DesiredCapacity_HASH = ConstExprHashingUtils::HashString("autoscaling:autoScalingGroup:DesiredCapacity");
        static constexpr uint32_t ecs_service_DesiredCount_HASH = ConstExprHashingUtils::HashString("ecs:service:DesiredCount");
        static constexpr uint32_t ec2_spot_fleet_request_TargetCapacity_HASH = ConstExprHashingUtils::HashString("ec2:spot-fleet-request:TargetCapacity");
        static constexpr uint32_t rds_cluster_ReadReplicaCount_HASH = ConstExprHashingUtils::HashString("rds:cluster:ReadReplicaCount");
        static constexpr uint32_t dynamodb_table_ReadCapacityUnits_HASH = ConstExprHashingUtils::HashString("dynamodb:table:ReadCapacityUnits");
        static constexpr uint32_t dynamodb_table_WriteCapacityUnits_HASH = ConstExprHashingUtils::HashString("dynamodb:table:WriteCapacityUnits");
        static constexpr uint32_t dynamodb_index_ReadCapacityUnits_HASH = ConstExprHashingUtils::HashString("dynamodb:index:ReadCapacityUnits");
        static constexpr uint32_t dynamodb_index_WriteCapacityUnits_HASH = ConstExprHashingUtils::HashString("dynamodb:index:WriteCapacityUnits");


        ScalableDimension GetScalableDimensionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == autoscaling_autoScalingGroup_DesiredCapacity_HASH)
          {
            return ScalableDimension::autoscaling_autoScalingGroup_DesiredCapacity;
          }
          else if (hashCode == ecs_service_DesiredCount_HASH)
          {
            return ScalableDimension::ecs_service_DesiredCount;
          }
          else if (hashCode == ec2_spot_fleet_request_TargetCapacity_HASH)
          {
            return ScalableDimension::ec2_spot_fleet_request_TargetCapacity;
          }
          else if (hashCode == rds_cluster_ReadReplicaCount_HASH)
          {
            return ScalableDimension::rds_cluster_ReadReplicaCount;
          }
          else if (hashCode == dynamodb_table_ReadCapacityUnits_HASH)
          {
            return ScalableDimension::dynamodb_table_ReadCapacityUnits;
          }
          else if (hashCode == dynamodb_table_WriteCapacityUnits_HASH)
          {
            return ScalableDimension::dynamodb_table_WriteCapacityUnits;
          }
          else if (hashCode == dynamodb_index_ReadCapacityUnits_HASH)
          {
            return ScalableDimension::dynamodb_index_ReadCapacityUnits;
          }
          else if (hashCode == dynamodb_index_WriteCapacityUnits_HASH)
          {
            return ScalableDimension::dynamodb_index_WriteCapacityUnits;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalableDimension>(hashCode);
          }

          return ScalableDimension::NOT_SET;
        }

        Aws::String GetNameForScalableDimension(ScalableDimension enumValue)
        {
          switch(enumValue)
          {
          case ScalableDimension::NOT_SET:
            return {};
          case ScalableDimension::autoscaling_autoScalingGroup_DesiredCapacity:
            return "autoscaling:autoScalingGroup:DesiredCapacity";
          case ScalableDimension::ecs_service_DesiredCount:
            return "ecs:service:DesiredCount";
          case ScalableDimension::ec2_spot_fleet_request_TargetCapacity:
            return "ec2:spot-fleet-request:TargetCapacity";
          case ScalableDimension::rds_cluster_ReadReplicaCount:
            return "rds:cluster:ReadReplicaCount";
          case ScalableDimension::dynamodb_table_ReadCapacityUnits:
            return "dynamodb:table:ReadCapacityUnits";
          case ScalableDimension::dynamodb_table_WriteCapacityUnits:
            return "dynamodb:table:WriteCapacityUnits";
          case ScalableDimension::dynamodb_index_ReadCapacityUnits:
            return "dynamodb:index:ReadCapacityUnits";
          case ScalableDimension::dynamodb_index_WriteCapacityUnits:
            return "dynamodb:index:WriteCapacityUnits";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalableDimensionMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
