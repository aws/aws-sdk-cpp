/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/ActionCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glacier
  {
    namespace Model
    {
      namespace ActionCodeMapper
      {

        static constexpr uint32_t ArchiveRetrieval_HASH = ConstExprHashingUtils::HashString("ArchiveRetrieval");
        static constexpr uint32_t InventoryRetrieval_HASH = ConstExprHashingUtils::HashString("InventoryRetrieval");
        static constexpr uint32_t Select_HASH = ConstExprHashingUtils::HashString("Select");


        ActionCode GetActionCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ArchiveRetrieval_HASH)
          {
            return ActionCode::ArchiveRetrieval;
          }
          else if (hashCode == InventoryRetrieval_HASH)
          {
            return ActionCode::InventoryRetrieval;
          }
          else if (hashCode == Select_HASH)
          {
            return ActionCode::Select;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionCode>(hashCode);
          }

          return ActionCode::NOT_SET;
        }

        Aws::String GetNameForActionCode(ActionCode enumValue)
        {
          switch(enumValue)
          {
          case ActionCode::NOT_SET:
            return {};
          case ActionCode::ArchiveRetrieval:
            return "ArchiveRetrieval";
          case ActionCode::InventoryRetrieval:
            return "InventoryRetrieval";
          case ActionCode::Select:
            return "Select";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionCodeMapper
    } // namespace Model
  } // namespace Glacier
} // namespace Aws
