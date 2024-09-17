/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EntryViolationReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace EntryViolationReasonMapper
      {

        static const int MISSING_EXPECTED_ENTRY_HASH = HashingUtils::HashString("MISSING_EXPECTED_ENTRY");
        static const int INCORRECT_ENTRY_ORDER_HASH = HashingUtils::HashString("INCORRECT_ENTRY_ORDER");
        static const int ENTRY_CONFLICT_HASH = HashingUtils::HashString("ENTRY_CONFLICT");


        EntryViolationReason GetEntryViolationReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MISSING_EXPECTED_ENTRY_HASH)
          {
            return EntryViolationReason::MISSING_EXPECTED_ENTRY;
          }
          else if (hashCode == INCORRECT_ENTRY_ORDER_HASH)
          {
            return EntryViolationReason::INCORRECT_ENTRY_ORDER;
          }
          else if (hashCode == ENTRY_CONFLICT_HASH)
          {
            return EntryViolationReason::ENTRY_CONFLICT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntryViolationReason>(hashCode);
          }

          return EntryViolationReason::NOT_SET;
        }

        Aws::String GetNameForEntryViolationReason(EntryViolationReason enumValue)
        {
          switch(enumValue)
          {
          case EntryViolationReason::NOT_SET:
            return {};
          case EntryViolationReason::MISSING_EXPECTED_ENTRY:
            return "MISSING_EXPECTED_ENTRY";
          case EntryViolationReason::INCORRECT_ENTRY_ORDER:
            return "INCORRECT_ENTRY_ORDER";
          case EntryViolationReason::ENTRY_CONFLICT:
            return "ENTRY_CONFLICT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntryViolationReasonMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
