/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeSetHooksStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ChangeSetHooksStatusMapper
      {

        static const int PLANNING_HASH = HashingUtils::HashString("PLANNING");
        static const int PLANNED_HASH = HashingUtils::HashString("PLANNED");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");


        ChangeSetHooksStatus GetChangeSetHooksStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLANNING_HASH)
          {
            return ChangeSetHooksStatus::PLANNING;
          }
          else if (hashCode == PLANNED_HASH)
          {
            return ChangeSetHooksStatus::PLANNED;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return ChangeSetHooksStatus::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeSetHooksStatus>(hashCode);
          }

          return ChangeSetHooksStatus::NOT_SET;
        }

        Aws::String GetNameForChangeSetHooksStatus(ChangeSetHooksStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangeSetHooksStatus::NOT_SET:
            return {};
          case ChangeSetHooksStatus::PLANNING:
            return "PLANNING";
          case ChangeSetHooksStatus::PLANNED:
            return "PLANNED";
          case ChangeSetHooksStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeSetHooksStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
