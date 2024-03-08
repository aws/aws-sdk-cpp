/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCisScansDetailLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ListCisScansDetailLevelMapper
      {

        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
        static const int MEMBER_HASH = HashingUtils::HashString("MEMBER");


        ListCisScansDetailLevel GetListCisScansDetailLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORGANIZATION_HASH)
          {
            return ListCisScansDetailLevel::ORGANIZATION;
          }
          else if (hashCode == MEMBER_HASH)
          {
            return ListCisScansDetailLevel::MEMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListCisScansDetailLevel>(hashCode);
          }

          return ListCisScansDetailLevel::NOT_SET;
        }

        Aws::String GetNameForListCisScansDetailLevel(ListCisScansDetailLevel enumValue)
        {
          switch(enumValue)
          {
          case ListCisScansDetailLevel::NOT_SET:
            return {};
          case ListCisScansDetailLevel::ORGANIZATION:
            return "ORGANIZATION";
          case ListCisScansDetailLevel::MEMBER:
            return "MEMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListCisScansDetailLevelMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
