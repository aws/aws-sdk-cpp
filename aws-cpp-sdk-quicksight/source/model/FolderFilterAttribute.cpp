/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FolderFilterAttribute.h>
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
      namespace FolderFilterAttributeMapper
      {

        static const int PARENT_FOLDER_ARN_HASH = HashingUtils::HashString("PARENT_FOLDER_ARN");


        FolderFilterAttribute GetFolderFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARENT_FOLDER_ARN_HASH)
          {
            return FolderFilterAttribute::PARENT_FOLDER_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FolderFilterAttribute>(hashCode);
          }

          return FolderFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForFolderFilterAttribute(FolderFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case FolderFilterAttribute::PARENT_FOLDER_ARN:
            return "PARENT_FOLDER_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FolderFilterAttributeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
