/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/SettingName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace SettingNameMapper
      {

        static const int serviceLongArnFormat_HASH = HashingUtils::HashString("serviceLongArnFormat");
        static const int taskLongArnFormat_HASH = HashingUtils::HashString("taskLongArnFormat");
        static const int containerInstanceLongArnFormat_HASH = HashingUtils::HashString("containerInstanceLongArnFormat");
        static const int awsvpcTrunking_HASH = HashingUtils::HashString("awsvpcTrunking");
        static const int containerInsights_HASH = HashingUtils::HashString("containerInsights");
        static const int fargateFIPSMode_HASH = HashingUtils::HashString("fargateFIPSMode");
        static const int tagResourceAuthorization_HASH = HashingUtils::HashString("tagResourceAuthorization");
        static const int fargateTaskRetirementWaitPeriod_HASH = HashingUtils::HashString("fargateTaskRetirementWaitPeriod");
        static const int guardDutyActivate_HASH = HashingUtils::HashString("guardDutyActivate");


        SettingName GetSettingNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == serviceLongArnFormat_HASH)
          {
            return SettingName::serviceLongArnFormat;
          }
          else if (hashCode == taskLongArnFormat_HASH)
          {
            return SettingName::taskLongArnFormat;
          }
          else if (hashCode == containerInstanceLongArnFormat_HASH)
          {
            return SettingName::containerInstanceLongArnFormat;
          }
          else if (hashCode == awsvpcTrunking_HASH)
          {
            return SettingName::awsvpcTrunking;
          }
          else if (hashCode == containerInsights_HASH)
          {
            return SettingName::containerInsights;
          }
          else if (hashCode == fargateFIPSMode_HASH)
          {
            return SettingName::fargateFIPSMode;
          }
          else if (hashCode == tagResourceAuthorization_HASH)
          {
            return SettingName::tagResourceAuthorization;
          }
          else if (hashCode == fargateTaskRetirementWaitPeriod_HASH)
          {
            return SettingName::fargateTaskRetirementWaitPeriod;
          }
          else if (hashCode == guardDutyActivate_HASH)
          {
            return SettingName::guardDutyActivate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SettingName>(hashCode);
          }

          return SettingName::NOT_SET;
        }

        Aws::String GetNameForSettingName(SettingName enumValue)
        {
          switch(enumValue)
          {
          case SettingName::NOT_SET:
            return {};
          case SettingName::serviceLongArnFormat:
            return "serviceLongArnFormat";
          case SettingName::taskLongArnFormat:
            return "taskLongArnFormat";
          case SettingName::containerInstanceLongArnFormat:
            return "containerInstanceLongArnFormat";
          case SettingName::awsvpcTrunking:
            return "awsvpcTrunking";
          case SettingName::containerInsights:
            return "containerInsights";
          case SettingName::fargateFIPSMode:
            return "fargateFIPSMode";
          case SettingName::tagResourceAuthorization:
            return "tagResourceAuthorization";
          case SettingName::fargateTaskRetirementWaitPeriod:
            return "fargateTaskRetirementWaitPeriod";
          case SettingName::guardDutyActivate:
            return "guardDutyActivate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SettingNameMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
