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

        static constexpr uint32_t autoscaling_HASH = ConstExprHashingUtils::HashString("autoscaling");
        static constexpr uint32_t ecs_HASH = ConstExprHashingUtils::HashString("ecs");
        static constexpr uint32_t ec2_HASH = ConstExprHashingUtils::HashString("ec2");
        static constexpr uint32_t rds_HASH = ConstExprHashingUtils::HashString("rds");
        static constexpr uint32_t dynamodb_HASH = ConstExprHashingUtils::HashString("dynamodb");


        ServiceNamespace GetServiceNamespaceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ServiceNamespace::NOT_SET:
            return {};
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
