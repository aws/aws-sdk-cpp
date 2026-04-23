/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/workdocs/model/FolderContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace FolderContentTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int FOLDER_HASH = HashingUtils::HashString("FOLDER");


        FolderContentType GetFolderContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return FolderContentType::ALL;
          }
          else if (hashCode == DOCUMENT_HASH)
          {
            return FolderContentType::DOCUMENT;
          }
          else if (hashCode == FOLDER_HASH)
          {
            return FolderContentType::FOLDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FolderContentType>(hashCode);
          }

          return FolderContentType::NOT_SET;
        }

        Aws::String GetNameForFolderContentType(FolderContentType enumValue)
        {
          switch(enumValue)
          {
          case FolderContentType::ALL:
            return "ALL";
          case FolderContentType::DOCUMENT:
            return "DOCUMENT";
          case FolderContentType::FOLDER:
            return "FOLDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FolderContentTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
