/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TransferMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace TransferModeMapper
      {

        static const int CHANGED_HASH = HashingUtils::HashString("CHANGED");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        TransferMode GetTransferModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHANGED_HASH)
          {
            return TransferMode::CHANGED;
          }
          else if (hashCode == ALL_HASH)
          {
            return TransferMode::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransferMode>(hashCode);
          }

          return TransferMode::NOT_SET;
        }

        Aws::String GetNameForTransferMode(TransferMode enumValue)
        {
          switch(enumValue)
          {
          case TransferMode::CHANGED:
            return "CHANGED";
          case TransferMode::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransferModeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
