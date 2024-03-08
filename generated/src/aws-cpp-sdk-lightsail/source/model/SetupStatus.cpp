/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/SetupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace SetupStatusMapper
      {

        static const int succeeded_HASH = HashingUtils::HashString("succeeded");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int inProgress_HASH = HashingUtils::HashString("inProgress");


        SetupStatus GetSetupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == succeeded_HASH)
          {
            return SetupStatus::succeeded;
          }
          else if (hashCode == failed_HASH)
          {
            return SetupStatus::failed;
          }
          else if (hashCode == inProgress_HASH)
          {
            return SetupStatus::inProgress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SetupStatus>(hashCode);
          }

          return SetupStatus::NOT_SET;
        }

        Aws::String GetNameForSetupStatus(SetupStatus enumValue)
        {
          switch(enumValue)
          {
          case SetupStatus::NOT_SET:
            return {};
          case SetupStatus::succeeded:
            return "succeeded";
          case SetupStatus::failed:
            return "failed";
          case SetupStatus::inProgress:
            return "inProgress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SetupStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
