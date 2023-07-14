/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ActionStatus.h>
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
      namespace ActionStatusMapper
      {

        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");


        ActionStatus GetActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scheduled_HASH)
          {
            return ActionStatus::Scheduled;
          }
          else if (hashCode == Pending_HASH)
          {
            return ActionStatus::Pending;
          }
          else if (hashCode == Running_HASH)
          {
            return ActionStatus::Running;
          }
          else if (hashCode == Unknown_HASH)
          {
            return ActionStatus::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionStatus>(hashCode);
          }

          return ActionStatus::NOT_SET;
        }

        Aws::String GetNameForActionStatus(ActionStatus enumValue)
        {
          switch(enumValue)
          {
          case ActionStatus::Scheduled:
            return "Scheduled";
          case ActionStatus::Pending:
            return "Pending";
          case ActionStatus::Running:
            return "Running";
          case ActionStatus::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionStatusMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
