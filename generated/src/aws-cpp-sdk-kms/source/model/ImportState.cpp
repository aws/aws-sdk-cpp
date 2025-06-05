/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ImportState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace ImportStateMapper
      {

        static const int IMPORTED_HASH = HashingUtils::HashString("IMPORTED");
        static const int PENDING_IMPORT_HASH = HashingUtils::HashString("PENDING_IMPORT");


        ImportState GetImportStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORTED_HASH)
          {
            return ImportState::IMPORTED;
          }
          else if (hashCode == PENDING_IMPORT_HASH)
          {
            return ImportState::PENDING_IMPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportState>(hashCode);
          }

          return ImportState::NOT_SET;
        }

        Aws::String GetNameForImportState(ImportState enumValue)
        {
          switch(enumValue)
          {
          case ImportState::NOT_SET:
            return {};
          case ImportState::IMPORTED:
            return "IMPORTED";
          case ImportState::PENDING_IMPORT:
            return "PENDING_IMPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportStateMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
