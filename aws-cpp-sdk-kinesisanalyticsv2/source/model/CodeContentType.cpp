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

#include <aws/kinesisanalyticsv2/model/CodeContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace CodeContentTypeMapper
      {

        static const int PLAINTEXT_HASH = HashingUtils::HashString("PLAINTEXT");
        static const int ZIPFILE_HASH = HashingUtils::HashString("ZIPFILE");


        CodeContentType GetCodeContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAINTEXT_HASH)
          {
            return CodeContentType::PLAINTEXT;
          }
          else if (hashCode == ZIPFILE_HASH)
          {
            return CodeContentType::ZIPFILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeContentType>(hashCode);
          }

          return CodeContentType::NOT_SET;
        }

        Aws::String GetNameForCodeContentType(CodeContentType enumValue)
        {
          switch(enumValue)
          {
          case CodeContentType::PLAINTEXT:
            return "PLAINTEXT";
          case CodeContentType::ZIPFILE:
            return "ZIPFILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeContentTypeMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
