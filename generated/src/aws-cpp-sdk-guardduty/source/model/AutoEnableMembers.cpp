/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AutoEnableMembers.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace AutoEnableMembersMapper
      {

        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AutoEnableMembers GetAutoEnableMembersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return AutoEnableMembers::NEW_;
          }
          else if (hashCode == ALL_HASH)
          {
            return AutoEnableMembers::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return AutoEnableMembers::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoEnableMembers>(hashCode);
          }

          return AutoEnableMembers::NOT_SET;
        }

        Aws::String GetNameForAutoEnableMembers(AutoEnableMembers enumValue)
        {
          switch(enumValue)
          {
          case AutoEnableMembers::NOT_SET:
            return {};
          case AutoEnableMembers::NEW_:
            return "NEW";
          case AutoEnableMembers::ALL:
            return "ALL";
          case AutoEnableMembers::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoEnableMembersMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
