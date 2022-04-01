/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/AutoRollbackEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace AutoRollbackEventMapper
      {

        static const int DEPLOYMENT_FAILURE_HASH = HashingUtils::HashString("DEPLOYMENT_FAILURE");
        static const int DEPLOYMENT_STOP_ON_ALARM_HASH = HashingUtils::HashString("DEPLOYMENT_STOP_ON_ALARM");
        static const int DEPLOYMENT_STOP_ON_REQUEST_HASH = HashingUtils::HashString("DEPLOYMENT_STOP_ON_REQUEST");


        AutoRollbackEvent GetAutoRollbackEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPLOYMENT_FAILURE_HASH)
          {
            return AutoRollbackEvent::DEPLOYMENT_FAILURE;
          }
          else if (hashCode == DEPLOYMENT_STOP_ON_ALARM_HASH)
          {
            return AutoRollbackEvent::DEPLOYMENT_STOP_ON_ALARM;
          }
          else if (hashCode == DEPLOYMENT_STOP_ON_REQUEST_HASH)
          {
            return AutoRollbackEvent::DEPLOYMENT_STOP_ON_REQUEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoRollbackEvent>(hashCode);
          }

          return AutoRollbackEvent::NOT_SET;
        }

        Aws::String GetNameForAutoRollbackEvent(AutoRollbackEvent enumValue)
        {
          switch(enumValue)
          {
          case AutoRollbackEvent::DEPLOYMENT_FAILURE:
            return "DEPLOYMENT_FAILURE";
          case AutoRollbackEvent::DEPLOYMENT_STOP_ON_ALARM:
            return "DEPLOYMENT_STOP_ON_ALARM";
          case AutoRollbackEvent::DEPLOYMENT_STOP_ON_REQUEST:
            return "DEPLOYMENT_STOP_ON_REQUEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoRollbackEventMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
