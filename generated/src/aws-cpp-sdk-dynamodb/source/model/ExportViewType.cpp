/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExportViewType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ExportViewTypeMapper
      {

        static const int NEW_IMAGE_HASH = HashingUtils::HashString("NEW_IMAGE");
        static const int NEW_AND_OLD_IMAGES_HASH = HashingUtils::HashString("NEW_AND_OLD_IMAGES");


        ExportViewType GetExportViewTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW_IMAGE_HASH)
          {
            return ExportViewType::NEW_IMAGE;
          }
          else if (hashCode == NEW_AND_OLD_IMAGES_HASH)
          {
            return ExportViewType::NEW_AND_OLD_IMAGES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportViewType>(hashCode);
          }

          return ExportViewType::NOT_SET;
        }

        Aws::String GetNameForExportViewType(ExportViewType enumValue)
        {
          switch(enumValue)
          {
          case ExportViewType::NOT_SET:
            return {};
          case ExportViewType::NEW_IMAGE:
            return "NEW_IMAGE";
          case ExportViewType::NEW_AND_OLD_IMAGES:
            return "NEW_AND_OLD_IMAGES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportViewTypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
