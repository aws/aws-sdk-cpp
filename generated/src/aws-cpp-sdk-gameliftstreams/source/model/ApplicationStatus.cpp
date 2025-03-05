/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/ApplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace ApplicationStatusMapper
      {

        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ApplicationStatus GetApplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return ApplicationStatus::INITIALIZED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return ApplicationStatus::PROCESSING;
          }
          else if (hashCode == READY_HASH)
          {
            return ApplicationStatus::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApplicationStatus::DELETING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ApplicationStatus::ERROR_;
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
          case ApplicationStatus::INITIALIZED:
            return "INITIALIZED";
          case ApplicationStatus::PROCESSING:
            return "PROCESSING";
          case ApplicationStatus::READY:
            return "READY";
          case ApplicationStatus::DELETING:
            return "DELETING";
          case ApplicationStatus::ERROR_:
            return "ERROR";
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
  } // namespace GameLiftStreams
} // namespace Aws
