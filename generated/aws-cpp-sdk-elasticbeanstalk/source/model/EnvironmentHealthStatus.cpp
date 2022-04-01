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

        static const int NoData_HASH = HashingUtils::HashString("NoData");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Ok_HASH = HashingUtils::HashString("Ok");
        static const int Info_HASH = HashingUtils::HashString("Info");
        static const int Warning_HASH = HashingUtils::HashString("Warning");
        static const int Degraded_HASH = HashingUtils::HashString("Degraded");
        static const int Severe_HASH = HashingUtils::HashString("Severe");
        static const int Suspended_HASH = HashingUtils::HashString("Suspended");


        EnvironmentHealthStatus GetEnvironmentHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
