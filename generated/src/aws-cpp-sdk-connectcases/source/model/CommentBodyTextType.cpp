/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CommentBodyTextType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace CommentBodyTextTypeMapper
      {

        static constexpr uint32_t Text_Plain_HASH = ConstExprHashingUtils::HashString("Text/Plain");


        CommentBodyTextType GetCommentBodyTextTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Text_Plain_HASH)
          {
            return CommentBodyTextType::Text_Plain;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommentBodyTextType>(hashCode);
          }

          return CommentBodyTextType::NOT_SET;
        }

        Aws::String GetNameForCommentBodyTextType(CommentBodyTextType enumValue)
        {
          switch(enumValue)
          {
          case CommentBodyTextType::NOT_SET:
            return {};
          case CommentBodyTextType::Text_Plain:
            return "Text/Plain";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommentBodyTextTypeMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
