/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DisassociatedDataStorageState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace DisassociatedDataStorageStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DisassociatedDataStorageState GetDisassociatedDataStorageStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DisassociatedDataStorageState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DisassociatedDataStorageState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DisassociatedDataStorageState>(hashCode);
          }

          return DisassociatedDataStorageState::NOT_SET;
        }

        Aws::String GetNameForDisassociatedDataStorageState(DisassociatedDataStorageState enumValue)
        {
          switch(enumValue)
          {
          case DisassociatedDataStorageState::NOT_SET:
            return {};
          case DisassociatedDataStorageState::ENABLED:
            return "ENABLED";
          case DisassociatedDataStorageState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DisassociatedDataStorageStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
