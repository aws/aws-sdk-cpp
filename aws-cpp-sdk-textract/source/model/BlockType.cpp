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
