/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AdministrativeActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace AdministrativeActionTypeMapper
      {

        static const int FILE_SYSTEM_UPDATE_HASH = HashingUtils::HashString("FILE_SYSTEM_UPDATE");
        static const int STORAGE_OPTIMIZATION_HASH = HashingUtils::HashString("STORAGE_OPTIMIZATION");


        AdministrativeActionType GetAdministrativeActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_SYSTEM_UPDATE_HASH)
          {
            return AdministrativeActionType::FILE_SYSTEM_UPDATE;
          }
          else if (hashCode == STORAGE_OPTIMIZATION_HASH)
          {
            return AdministrativeActionType::STORAGE_OPTIMIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdministrativeActionType>(hashCode);
          }

          return AdministrativeActionType::NOT_SET;
        }

        Aws::String GetNameForAdministrativeActionType(AdministrativeActionType enumValue)
        {
          switch(enumValue)
          {
          case AdministrativeActionType::FILE_SYSTEM_UPDATE:
            return "FILE_SYSTEM_UPDATE";
          case AdministrativeActionType::STORAGE_OPTIMIZATION:
            return "STORAGE_OPTIMIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdministrativeActionTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
