/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codestar-notifications/model/TargetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarNotifications
  {
    namespace Model
    {
      namespace TargetStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UNREACHABLE_HASH = HashingUtils::HashString("UNREACHABLE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");


        TargetStatus GetTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return TargetStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TargetStatus::ACTIVE;
          }
          else if (hashCode == UNREACHABLE_HASH)
          {
            return TargetStatus::UNREACHABLE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return TargetStatus::INACTIVE;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return TargetStatus::DEACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetStatus>(hashCode);
          }

          return TargetStatus::NOT_SET;
        }

        Aws::String GetNameForTargetStatus(TargetStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetStatus::PENDING:
            return "PENDING";
          case TargetStatus::ACTIVE:
            return "ACTIVE";
          case TargetStatus::UNREACHABLE:
            return "UNREACHABLE";
          case TargetStatus::INACTIVE:
            return "INACTIVE";
          case TargetStatus::DEACTIVATED:
            return "DEACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetStatusMapper
    } // namespace Model
  } // namespace CodeStarNotifications
} // namespace Aws
