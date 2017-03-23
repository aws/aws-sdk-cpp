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
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace ScalableDimensionMapper
      {

        static const int ecs_service_DesiredCount_HASH = HashingUtils::HashString("ecs:service:DesiredCount");
        static const int ec2_spot_fleet_request_TargetCapacity_HASH = HashingUtils::HashString("ec2:spot-fleet-request:TargetCapacity");
        static const int elasticmapreduce_instancegroup_InstanceCount_HASH = HashingUtils::HashString("elasticmapreduce:instancegroup:InstanceCount");
        static const int appstream_fleet_DesiredCapacity_HASH = HashingUtils::HashString("appstream:fleet:DesiredCapacity");


        ScalableDimension GetScalableDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ecs_service_DesiredCount_HASH)
          {
            return ScalableDimension::ecs_service_DesiredCount;
          }
          else if (hashCode == ec2_spot_fleet_request_TargetCapacity_HASH)
          {
            return ScalableDimension::ec2_spot_fleet_request_TargetCapacity;
          }
          else if (hashCode == elasticmapreduce_instancegroup_InstanceCount_HASH)
          {
            return ScalableDimension::elasticmapreduce_instancegroup_InstanceCount;
          }
          else if (hashCode == appstream_fleet_DesiredCapacity_HASH)
          {
            return ScalableDimension::appstream_fleet_DesiredCapacity;
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
          case ScalableDimension::ecs_service_DesiredCount:
            return "ecs:service:DesiredCount";
          case ScalableDimension::ec2_spot_fleet_request_TargetCapacity:
            return "ec2:spot-fleet-request:TargetCapacity";
          case ScalableDimension::elasticmapreduce_instancegroup_InstanceCount:
            return "elasticmapreduce:instancegroup:InstanceCount";
          case ScalableDimension::appstream_fleet_DesiredCapacity:
            return "appstream:fleet:DesiredCapacity";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ScalableDimensionMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
