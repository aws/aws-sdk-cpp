/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/LedgerState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QLDB
  {
    namespace Model
    {
      namespace LedgerStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        LedgerState GetLedgerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return LedgerState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return LedgerState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return LedgerState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return LedgerState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LedgerState>(hashCode);
          }

          return LedgerState::NOT_SET;
        }

        Aws::String GetNameForLedgerState(LedgerState enumValue)
        {
          switch(enumValue)
          {
          case LedgerState::CREATING:
            return "CREATING";
          case LedgerState::ACTIVE:
            return "ACTIVE";
          case LedgerState::DELETING:
            return "DELETING";
          case LedgerState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LedgerStateMapper
    } // namespace Model
  } // namespace QLDB
} // namespace Aws
