/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/BlockType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace BlockTypeMapper
      {

        static const int LINE_HASH = HashingUtils::HashString("LINE");
        static const int WORD_HASH = HashingUtils::HashString("WORD");


        BlockType GetBlockTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINE_HASH)
          {
            return BlockType::LINE;
          }
          else if (hashCode == WORD_HASH)
          {
            return BlockType::WORD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlockType>(hashCode);
          }

          return BlockType::NOT_SET;
        }

        Aws::String GetNameForBlockType(BlockType enumValue)
        {
          switch(enumValue)
          {
          case BlockType::LINE:
            return "LINE";
          case BlockType::WORD:
            return "WORD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlockTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
