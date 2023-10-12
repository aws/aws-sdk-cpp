/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/UpsertAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Honeycode
  {
    namespace Model
    {
      namespace UpsertActionMapper
      {

        static constexpr uint32_t UPDATED_HASH = ConstExprHashingUtils::HashString("UPDATED");
        static constexpr uint32_t APPENDED_HASH = ConstExprHashingUtils::HashString("APPENDED");


        UpsertAction GetUpsertActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATED_HASH)
          {
            return UpsertAction::UPDATED;
          }
          else if (hashCode == APPENDED_HASH)
          {
            return UpsertAction::APPENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpsertAction>(hashCode);
          }

          return UpsertAction::NOT_SET;
        }

        Aws::String GetNameForUpsertAction(UpsertAction enumValue)
        {
          switch(enumValue)
          {
          case UpsertAction::NOT_SET:
            return {};
          case UpsertAction::UPDATED:
            return "UPDATED";
          case UpsertAction::APPENDED:
            return "APPENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpsertActionMapper
    } // namespace Model
  } // namespace Honeycode
} // namespace Aws
