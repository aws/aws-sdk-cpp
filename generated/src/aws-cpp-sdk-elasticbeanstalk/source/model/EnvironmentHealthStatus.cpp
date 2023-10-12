/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EnvironmentHealthStatus.h>
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
      namespace EnvironmentHealthStatusMapper
      {

        static constexpr uint32_t NoData_HASH = ConstExprHashingUtils::HashString("NoData");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Ok_HASH = ConstExprHashingUtils::HashString("Ok");
        static constexpr uint32_t Info_HASH = ConstExprHashingUtils::HashString("Info");
        static constexpr uint32_t Warning_HASH = ConstExprHashingUtils::HashString("Warning");
        static constexpr uint32_t Degraded_HASH = ConstExprHashingUtils::HashString("Degraded");
        static constexpr uint32_t Severe_HASH = ConstExprHashingUtils::HashString("Severe");
        static constexpr uint32_t Suspended_HASH = ConstExprHashingUtils::HashString("Suspended");


        EnvironmentHealthStatus GetEnvironmentHealthStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NoData_HASH)
          {
            return EnvironmentHealthStatus::NoData;
          }
          else if (hashCode == Unknown_HASH)
          {
            return EnvironmentHealthStatus::Unknown;
          }
          else if (hashCode == Pending_HASH)
          {
            return EnvironmentHealthStatus::Pending;
          }
          else if (hashCode == Ok_HASH)
          {
            return EnvironmentHealthStatus::Ok;
          }
          else if (hashCode == Info_HASH)
          {
            return EnvironmentHealthStatus::Info;
          }
          else if (hashCode == Warning_HASH)
          {
            return EnvironmentHealthStatus::Warning;
          }
          else if (hashCode == Degraded_HASH)
          {
            return EnvironmentHealthStatus::Degraded;
          }
          else if (hashCode == Severe_HASH)
          {
            return EnvironmentHealthStatus::Severe;
          }
          else if (hashCode == Suspended_HASH)
          {
            return EnvironmentHealthStatus::Suspended;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentHealthStatus>(hashCode);
          }

          return EnvironmentHealthStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentHealthStatus(EnvironmentHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentHealthStatus::NOT_SET:
            return {};
          case EnvironmentHealthStatus::NoData:
            return "NoData";
          case EnvironmentHealthStatus::Unknown:
            return "Unknown";
          case EnvironmentHealthStatus::Pending:
            return "Pending";
          case EnvironmentHealthStatus::Ok:
            return "Ok";
          case EnvironmentHealthStatus::Info:
            return "Info";
          case EnvironmentHealthStatus::Warning:
            return "Warning";
          case EnvironmentHealthStatus::Degraded:
            return "Degraded";
          case EnvironmentHealthStatus::Severe:
            return "Severe";
          case EnvironmentHealthStatus::Suspended:
            return "Suspended";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentHealthStatusMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
