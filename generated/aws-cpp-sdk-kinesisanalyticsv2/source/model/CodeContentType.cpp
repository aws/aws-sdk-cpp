/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
