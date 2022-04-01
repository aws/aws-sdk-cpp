/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/SortKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace SortKeyMapper
      {

        static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");
        static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");


        SortKey GetSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DESCENDING_HASH)
          {
            return SortKey::DESCENDING;
          }
          else if (hashCode == ASCENDING_HASH)
          {
            return SortKey::ASCENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortKey>(hashCode);
          }

          return SortKey::NOT_SET;
        }

        Aws::String GetNameForSortKey(SortKey enumValue)
        {
          switch(enumValue)
          {
          case SortKey::DESCENDING:
            return "DESCENDING";
          case SortKey::ASCENDING:
            return "ASCENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortKeyMapper
    } // namespace Model
  } // namespace ConnectParticipant
} // namespace Aws
