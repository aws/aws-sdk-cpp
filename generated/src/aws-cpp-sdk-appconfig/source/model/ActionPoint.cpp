/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ActionPoint.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace ActionPointMapper
      {

        static const int PRE_CREATE_HOSTED_CONFIGURATION_VERSION_HASH = HashingUtils::HashString("PRE_CREATE_HOSTED_CONFIGURATION_VERSION");
        static const int PRE_START_DEPLOYMENT_HASH = HashingUtils::HashString("PRE_START_DEPLOYMENT");
        static const int ON_DEPLOYMENT_START_HASH = HashingUtils::HashString("ON_DEPLOYMENT_START");
        static const int ON_DEPLOYMENT_STEP_HASH = HashingUtils::HashString("ON_DEPLOYMENT_STEP");
        static const int ON_DEPLOYMENT_BAKING_HASH = HashingUtils::HashString("ON_DEPLOYMENT_BAKING");
        static const int ON_DEPLOYMENT_COMPLETE_HASH = HashingUtils::HashString("ON_DEPLOYMENT_COMPLETE");
        static const int ON_DEPLOYMENT_ROLLED_BACK_HASH = HashingUtils::HashString("ON_DEPLOYMENT_ROLLED_BACK");


        ActionPoint GetActionPointForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRE_CREATE_HOSTED_CONFIGURATION_VERSION_HASH)
          {
            return ActionPoint::PRE_CREATE_HOSTED_CONFIGURATION_VERSION;
          }
          else if (hashCode == PRE_START_DEPLOYMENT_HASH)
          {
            return ActionPoint::PRE_START_DEPLOYMENT;
          }
          else if (hashCode == ON_DEPLOYMENT_START_HASH)
          {
            return ActionPoint::ON_DEPLOYMENT_START;
          }
          else if (hashCode == ON_DEPLOYMENT_STEP_HASH)
          {
            return ActionPoint::ON_DEPLOYMENT_STEP;
          }
          else if (hashCode == ON_DEPLOYMENT_BAKING_HASH)
          {
            return ActionPoint::ON_DEPLOYMENT_BAKING;
          }
          else if (hashCode == ON_DEPLOYMENT_COMPLETE_HASH)
          {
            return ActionPoint::ON_DEPLOYMENT_COMPLETE;
          }
          else if (hashCode == ON_DEPLOYMENT_ROLLED_BACK_HASH)
          {
            return ActionPoint::ON_DEPLOYMENT_ROLLED_BACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionPoint>(hashCode);
          }

          return ActionPoint::NOT_SET;
        }

        Aws::String GetNameForActionPoint(ActionPoint enumValue)
        {
          switch(enumValue)
          {
          case ActionPoint::NOT_SET:
            return {};
          case ActionPoint::PRE_CREATE_HOSTED_CONFIGURATION_VERSION:
            return "PRE_CREATE_HOSTED_CONFIGURATION_VERSION";
          case ActionPoint::PRE_START_DEPLOYMENT:
            return "PRE_START_DEPLOYMENT";
          case ActionPoint::ON_DEPLOYMENT_START:
            return "ON_DEPLOYMENT_START";
          case ActionPoint::ON_DEPLOYMENT_STEP:
            return "ON_DEPLOYMENT_STEP";
          case ActionPoint::ON_DEPLOYMENT_BAKING:
            return "ON_DEPLOYMENT_BAKING";
          case ActionPoint::ON_DEPLOYMENT_COMPLETE:
            return "ON_DEPLOYMENT_COMPLETE";
          case ActionPoint::ON_DEPLOYMENT_ROLLED_BACK:
            return "ON_DEPLOYMENT_ROLLED_BACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionPointMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
