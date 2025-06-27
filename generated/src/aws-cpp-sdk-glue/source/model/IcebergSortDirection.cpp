/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergSortDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace IcebergSortDirectionMapper
      {

        static const int asc_HASH = HashingUtils::HashString("asc");
        static const int desc_HASH = HashingUtils::HashString("desc");


        IcebergSortDirection GetIcebergSortDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == asc_HASH)
          {
            return IcebergSortDirection::asc;
          }
          else if (hashCode == desc_HASH)
          {
            return IcebergSortDirection::desc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IcebergSortDirection>(hashCode);
          }

          return IcebergSortDirection::NOT_SET;
        }

        Aws::String GetNameForIcebergSortDirection(IcebergSortDirection enumValue)
        {
          switch(enumValue)
          {
          case IcebergSortDirection::NOT_SET:
            return {};
          case IcebergSortDirection::asc:
            return "asc";
          case IcebergSortDirection::desc:
            return "desc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IcebergSortDirectionMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
