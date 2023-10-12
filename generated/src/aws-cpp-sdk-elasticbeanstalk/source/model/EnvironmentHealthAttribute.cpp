/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EnvironmentHealthAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace EnvironmentHealthAttributeMapper
      {

        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");
        static constexpr uint32_t Color_HASH = ConstExprHashingUtils::HashString("Color");
        static constexpr uint32_t Causes_HASH = ConstExprHashingUtils::HashString("Causes");
        static constexpr uint32_t ApplicationMetrics_HASH = ConstExprHashingUtils::HashString("ApplicationMetrics");
        static constexpr uint32_t InstancesHealth_HASH = ConstExprHashingUtils::HashString("InstancesHealth");
        static constexpr uint32_t All_HASH = ConstExprHashingUtils::HashString("All");
        static constexpr uint32_t HealthStatus_HASH = ConstExprHashingUtils::HashString("HealthStatus");
        static constexpr uint32_t RefreshedAt_HASH = ConstExprHashingUtils::HashString("RefreshedAt");


        EnvironmentHealthAttribute GetEnvironmentHealthAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Status_HASH)
          {
            return EnvironmentHealthAttribute::Status;
          }
          else if (hashCode == Color_HASH)
          {
            return EnvironmentHealthAttribute::Color;
          }
          else if (hashCode == Causes_HASH)
          {
            return EnvironmentHealthAttribute::Causes;
          }
          else if (hashCode == ApplicationMetrics_HASH)
          {
            return EnvironmentHealthAttribute::ApplicationMetrics;
          }
          else if (hashCode == InstancesHealth_HASH)
          {
            return EnvironmentHealthAttribute::InstancesHealth;
          }
          else if (hashCode == All_HASH)
          {
            return EnvironmentHealthAttribute::All;
          }
          else if (hashCode == HealthStatus_HASH)
          {
            return EnvironmentHealthAttribute::HealthStatus;
          }
          else if (hashCode == RefreshedAt_HASH)
          {
            return EnvironmentHealthAttribute::RefreshedAt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentHealthAttribute>(hashCode);
          }

          return EnvironmentHealthAttribute::NOT_SET;
        }

        Aws::String GetNameForEnvironmentHealthAttribute(EnvironmentHealthAttribute enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentHealthAttribute::NOT_SET:
            return {};
          case EnvironmentHealthAttribute::Status:
            return "Status";
          case EnvironmentHealthAttribute::Color:
            return "Color";
          case EnvironmentHealthAttribute::Causes:
            return "Causes";
          case EnvironmentHealthAttribute::ApplicationMetrics:
            return "ApplicationMetrics";
          case EnvironmentHealthAttribute::InstancesHealth:
            return "InstancesHealth";
          case EnvironmentHealthAttribute::All:
            return "All";
          case EnvironmentHealthAttribute::HealthStatus:
            return "HealthStatus";
          case EnvironmentHealthAttribute::RefreshedAt:
            return "RefreshedAt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentHealthAttributeMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
