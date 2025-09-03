/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AutoApprovedChangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace AutoApprovedChangeTypeMapper
      {

        static const int ADD_MEMBER_HASH = HashingUtils::HashString("ADD_MEMBER");


        AutoApprovedChangeType GetAutoApprovedChangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_MEMBER_HASH)
          {
            return AutoApprovedChangeType::ADD_MEMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoApprovedChangeType>(hashCode);
          }

          return AutoApprovedChangeType::NOT_SET;
        }

        Aws::String GetNameForAutoApprovedChangeType(AutoApprovedChangeType enumValue)
        {
          switch(enumValue)
          {
          case AutoApprovedChangeType::NOT_SET:
            return {};
          case AutoApprovedChangeType::ADD_MEMBER:
            return "ADD_MEMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoApprovedChangeTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
