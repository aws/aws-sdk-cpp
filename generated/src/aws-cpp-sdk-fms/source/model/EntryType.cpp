/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EntryType.h>
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
      namespace EntryTypeMapper
      {

        static const int FMS_MANAGED_FIRST_ENTRY_HASH = HashingUtils::HashString("FMS_MANAGED_FIRST_ENTRY");
        static const int FMS_MANAGED_LAST_ENTRY_HASH = HashingUtils::HashString("FMS_MANAGED_LAST_ENTRY");
        static const int CUSTOM_ENTRY_HASH = HashingUtils::HashString("CUSTOM_ENTRY");


        EntryType GetEntryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FMS_MANAGED_FIRST_ENTRY_HASH)
          {
            return EntryType::FMS_MANAGED_FIRST_ENTRY;
          }
          else if (hashCode == FMS_MANAGED_LAST_ENTRY_HASH)
          {
            return EntryType::FMS_MANAGED_LAST_ENTRY;
          }
          else if (hashCode == CUSTOM_ENTRY_HASH)
          {
            return EntryType::CUSTOM_ENTRY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntryType>(hashCode);
          }

          return EntryType::NOT_SET;
        }

        Aws::String GetNameForEntryType(EntryType enumValue)
        {
          switch(enumValue)
          {
          case EntryType::NOT_SET:
            return {};
          case EntryType::FMS_MANAGED_FIRST_ENTRY:
            return "FMS_MANAGED_FIRST_ENTRY";
          case EntryType::FMS_MANAGED_LAST_ENTRY:
            return "FMS_MANAGED_LAST_ENTRY";
          case EntryType::CUSTOM_ENTRY:
            return "CUSTOM_ENTRY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntryTypeMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
