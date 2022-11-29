/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace SheetContentTypeMapper
      {

        static const int PAGINATED_HASH = HashingUtils::HashString("PAGINATED");
        static const int INTERACTIVE_HASH = HashingUtils::HashString("INTERACTIVE");


        SheetContentType GetSheetContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PAGINATED_HASH)
          {
            return SheetContentType::PAGINATED;
          }
          else if (hashCode == INTERACTIVE_HASH)
          {
            return SheetContentType::INTERACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SheetContentType>(hashCode);
          }

          return SheetContentType::NOT_SET;
        }

        Aws::String GetNameForSheetContentType(SheetContentType enumValue)
        {
          switch(enumValue)
          {
          case SheetContentType::PAGINATED:
            return "PAGINATED";
          case SheetContentType::INTERACTIVE:
            return "INTERACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SheetContentTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
