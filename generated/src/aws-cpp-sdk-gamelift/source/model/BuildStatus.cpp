/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/BuildStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace BuildStatusMapper
      {

        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        BuildStatus GetBuildStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return BuildStatus::INITIALIZED;
          }
          else if (hashCode == READY_HASH)
          {
            return BuildStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BuildStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BuildStatus>(hashCode);
          }

          return BuildStatus::NOT_SET;
        }

        Aws::String GetNameForBuildStatus(BuildStatus enumValue)
        {
          switch(enumValue)
          {
          case BuildStatus::INITIALIZED:
            return "INITIALIZED";
          case BuildStatus::READY:
            return "READY";
          case BuildStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BuildStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
