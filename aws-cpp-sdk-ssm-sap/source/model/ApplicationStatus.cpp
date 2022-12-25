/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ApplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ApplicationStatusMapper
      {

        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        ApplicationStatus GetApplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATED_HASH)
          {
            return ApplicationStatus::ACTIVATED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ApplicationStatus::STARTING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ApplicationStatus::STOPPED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ApplicationStatus::STOPPING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ApplicationStatus::FAILED;
          }
          else if (hashCode == REGISTERING_HASH)
          {
            return ApplicationStatus::REGISTERING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApplicationStatus::DELETING;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ApplicationStatus::UNKNOWN;
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
          case ApplicationStatus::ACTIVATED:
            return "ACTIVATED";
          case ApplicationStatus::STARTING:
            return "STARTING";
          case ApplicationStatus::STOPPED:
            return "STOPPED";
          case ApplicationStatus::STOPPING:
            return "STOPPING";
          case ApplicationStatus::FAILED:
            return "FAILED";
          case ApplicationStatus::REGISTERING:
            return "REGISTERING";
          case ApplicationStatus::DELETING:
            return "DELETING";
          case ApplicationStatus::UNKNOWN:
            return "UNKNOWN";
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
  } // namespace SsmSap
} // namespace Aws
