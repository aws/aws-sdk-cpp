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

#include <aws/workdocs/model/DocumentThumbnailType.h>
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
      namespace DocumentThumbnailTypeMapper
      {

        static const int SMALL_HASH = HashingUtils::HashString("SMALL");
        static const int SMALL_HQ_HASH = HashingUtils::HashString("SMALL_HQ");
        static const int LARGE_HASH = HashingUtils::HashString("LARGE");


        DocumentThumbnailType GetDocumentThumbnailTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMALL_HASH)
          {
            return DocumentThumbnailType::SMALL;
          }
          else if (hashCode == SMALL_HQ_HASH)
          {
            return DocumentThumbnailType::SMALL_HQ;
          }
          else if (hashCode == LARGE_HASH)
          {
            return DocumentThumbnailType::LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentThumbnailType>(hashCode);
          }

          return DocumentThumbnailType::NOT_SET;
        }

        Aws::String GetNameForDocumentThumbnailType(DocumentThumbnailType enumValue)
        {
          switch(enumValue)
          {
          case DocumentThumbnailType::SMALL:
            return "SMALL";
          case DocumentThumbnailType::SMALL_HQ:
            return "SMALL_HQ";
          case DocumentThumbnailType::LARGE:
            return "LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentThumbnailTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
