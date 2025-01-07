/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SortFieldConnection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace SortFieldConnectionMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");


        SortFieldConnection GetSortFieldConnectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return SortFieldConnection::NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortFieldConnection>(hashCode);
          }

          return SortFieldConnection::NOT_SET;
        }

        Aws::String GetNameForSortFieldConnection(SortFieldConnection enumValue)
        {
          switch(enumValue)
          {
          case SortFieldConnection::NOT_SET:
            return {};
          case SortFieldConnection::NAME:
            return "NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortFieldConnectionMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
