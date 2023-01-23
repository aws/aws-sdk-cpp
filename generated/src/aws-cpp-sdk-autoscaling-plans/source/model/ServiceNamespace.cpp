/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/ServiceNamespace.h>
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
      namespace ServiceNamespaceMapper
      {

        static const int autoscaling_HASH = HashingUtils::HashString("autoscaling");
        static const int ecs_HASH = HashingUtils::HashString("ecs");
        static const int ec2_HASH = HashingUtils::HashString("ec2");
        static const int rds_HASH = HashingUtils::HashString("rds");
        static const int dynamodb_HASH = HashingUtils::HashString("dynamodb");


        ServiceNamespace GetServiceNamespaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == autoscaling_HASH)
          {
            return ServiceNamespace::autoscaling;
          }
          else if (hashCode == ecs_HASH)
          {
            return ServiceNamespace::ecs;
          }
          else if (hashCode == ec2_HASH)
          {
            return ServiceNamespace::ec2;
          }
          else if (hashCode == rds_HASH)
          {
            return ServiceNamespace::rds;
          }
          else if (hashCode == dynamodb_HASH)
          {
            return ServiceNamespace::dynamodb;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNamespace>(hashCode);
          }

          return ServiceNamespace::NOT_SET;
        }

        Aws::String GetNameForServiceNamespace(ServiceNamespace enumValue)
        {
          switch(enumValue)
          {
          case ServiceNamespace::autoscaling:
            return "autoscaling";
          case ServiceNamespace::ecs:
            return "ecs";
          case ServiceNamespace::ec2:
            return "ec2";
          case ServiceNamespace::rds:
            return "rds";
          case ServiceNamespace::dynamodb:
            return "dynamodb";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceNamespaceMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
