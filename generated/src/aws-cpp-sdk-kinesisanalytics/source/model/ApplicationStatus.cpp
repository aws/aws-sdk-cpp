﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/ApplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalytics
  {
    namespace Model
    {
      namespace ApplicationStatusMapper
      {

        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        ApplicationStatus GetApplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETING_HASH)
          {
            return ApplicationStatus::DELETING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ApplicationStatus::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ApplicationStatus::STOPPING;
          }
          else if (hashCode == READY_HASH)
          {
            return ApplicationStatus::READY;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ApplicationStatus::RUNNING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ApplicationStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationStatus>(hashCode);
          }

          return ApplicationStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationStatus(ApplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationStatus::NOT_SET:
            return {};
          case ApplicationStatus::DELETING:
            return "DELETING";
          case ApplicationStatus::STARTING:
            return "STARTING";
          case ApplicationStatus::STOPPING:
            return "STOPPING";
          case ApplicationStatus::READY:
            return "READY";
          case ApplicationStatus::RUNNING:
            return "RUNNING";
          case ApplicationStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationStatusMapper
    } // namespace Model
  } // namespace KinesisAnalytics
} // namespace Aws
