/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/BlockType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace BlockTypeMapper
      {

        static const int KEY_VALUE_SET_HASH = HashingUtils::HashString("KEY_VALUE_SET");
        static const int PAGE_HASH = HashingUtils::HashString("PAGE");
        static const int LINE_HASH = HashingUtils::HashString("LINE");
        static const int WORD_HASH = HashingUtils::HashString("WORD");
        static const int TABLE_HASH = HashingUtils::HashString("TABLE");
        static const int CELL_HASH = HashingUtils::HashString("CELL");
        static const int SELECTION_ELEMENT_HASH = HashingUtils::HashString("SELECTION_ELEMENT");
        static const int MERGED_CELL_HASH = HashingUtils::HashString("MERGED_CELL");
        static const int TITLE_HASH = HashingUtils::HashString("TITLE");
        static const int QUERY_HASH = HashingUtils::HashString("QUERY");
        static const int QUERY_RESULT_HASH = HashingUtils::HashString("QUERY_RESULT");
        static const int SIGNATURE_HASH = HashingUtils::HashString("SIGNATURE");


        BlockType GetBlockTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEY_VALUE_SET_HASH)
          {
            return BlockType::KEY_VALUE_SET;
          }
          else if (hashCode == PAGE_HASH)
          {
            return BlockType::PAGE;
          }
          else if (hashCode == LINE_HASH)
          {
            return BlockType::LINE;
          }
          else if (hashCode == WORD_HASH)
          {
            return BlockType::WORD;
          }
          else if (hashCode == TABLE_HASH)
          {
            return BlockType::TABLE;
          }
          else if (hashCode == CELL_HASH)
          {
            return BlockType::CELL;
          }
          else if (hashCode == SELECTION_ELEMENT_HASH)
          {
            return BlockType::SELECTION_ELEMENT;
          }
          else if (hashCode == MERGED_CELL_HASH)
          {
            return BlockType::MERGED_CELL;
          }
          else if (hashCode == TITLE_HASH)
          {
            return BlockType::TITLE;
          }
          else if (hashCode == QUERY_HASH)
          {
            return BlockType::QUERY;
          }
          else if (hashCode == QUERY_RESULT_HASH)
          {
            return BlockType::QUERY_RESULT;
          }
          else if (hashCode == SIGNATURE_HASH)
          {
            return BlockType::SIGNATURE;
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
          case BlockType::KEY_VALUE_SET:
            return "KEY_VALUE_SET";
          case BlockType::PAGE:
            return "PAGE";
          case BlockType::LINE:
            return "LINE";
          case BlockType::WORD:
            return "WORD";
          case BlockType::TABLE:
            return "TABLE";
          case BlockType::CELL:
            return "CELL";
          case BlockType::SELECTION_ELEMENT:
            return "SELECTION_ELEMENT";
          case BlockType::MERGED_CELL:
            return "MERGED_CELL";
          case BlockType::TITLE:
            return "TITLE";
          case BlockType::QUERY:
            return "QUERY";
          case BlockType::QUERY_RESULT:
            return "QUERY_RESULT";
          case BlockType::SIGNATURE:
            return "SIGNATURE";
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
  } // namespace Textract
} // namespace Aws
