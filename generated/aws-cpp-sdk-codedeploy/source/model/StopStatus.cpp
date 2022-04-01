/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/StopStatus.h>
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
      namespace StopStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");


        StopStatus GetStopStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return StopStatus::Pending;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return StopStatus::Succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StopStatus>(hashCode);
          }

          return StopStatus::NOT_SET;
        }

        Aws::String GetNameForStopStatus(StopStatus enumValue)
        {
          switch(enumValue)
          {
          case StopStatus::Pending:
            return "Pending";
          case StopStatus::Succeeded:
            return "Succeeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StopStatusMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
